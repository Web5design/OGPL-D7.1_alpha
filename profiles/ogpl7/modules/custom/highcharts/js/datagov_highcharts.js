Drupal.behaviors.views_highcharts = {
    charts:[],
    attach:function (context) {
        jQuery.each(jQuery(".views-highcharts-chart", context).not(".views-highcharts-processed"), function (idx, value) {

            chart_id = jQuery(value).attr("id");

            if (Drupal.settings.views_highcharts[chart_id] == undefined) {
                return;
            }

            // Fix IE7 partial showing problem.
            jQuery(this).css('min-height', '400px');

            colors = Highcharts.getOptions().colors;

            // Helper functions to format visit count nicely.
            var add_comma = function (visits) {
                var ret;
                if (!visits) {
                    return ret;
                }

                ret = (visits + "").replace(/(^|[^\w.])(\d{4,})/g, function ($0, $1, $2) {
                    return $1 + $2.replace(/\d(?=(?:\d\d\d)+(?!\d))/g, "$&,");
                });
                return ret;
            }

            var precentage_decimal = function (precentage, decPlaces) {
                precentage = Math.round(precentage * Math.pow(10, decPlaces));
                return precentage / Math.pow(10, decPlaces);
            }

            var abbr_number = function (number, decPlaces) {
                // 2 decimal places => 100, 3 => 1000, etc
                decPlaces = Math.pow(10, decPlaces);

                // Enumerate number abbreviations
                var abbrev = [ "k", "m", "b", "t" ];

                // Go through the array backwards, so we do the largest first
                for (var i = abbrev.length - 1; i >= 0; i--) {

                    // Convert array index to "1000", "1000000", etc
                    var size = Math.pow(10, (i + 1) * 3);

                    // If the number is bigger or equal do the abbreviation
                    if (size <= number) {
                        // Here, we multiply by decPlaces, round, and then divide by decPlaces.
                        // This gives us nice rounding to a particular decimal place.
                        number = Math.round(number * decPlaces / size) / decPlaces;

                        // Add the letter for the abbreviation
                        number += abbrev[i];

                        // We are done... stop
                        break;
                    }
                }

                return number;
            }

            // Chart specific settings:
            var settings = {
                colorByPoint:{
                    'metrics_daily_visitor':false,
                    'metrics_monthly_visitor':true,
                    'metrics_monthly_download':true,
                    'metrics_monthly_page_views':true,
                    'metrics_top_country':true,
                    'metrics_top_state':true
                },
                dataLabels:{
                    'metrics_daily_visitor':false,
                    'metrics_monthly_visitor':true,
                    'metrics_monthly_download':true,
                    'metrics_monthly_page_views':true,
                    'metrics_top_country':true,
                    'metrics_top_state':true
                },
                decPlaces:{
                    'metrics_daily_visitor':1,
                    'metrics_monthly_visitor':1,
                    'metrics_monthly_download':1,
                    'metrics_monthly_page_views':1,
                    'metrics_top_country':1,
                    'metrics_top_state':1,
                    'metrics_suggested_dataset':1,
                    'metrics_rawtool':2,
                    'metrics_geodata':2
                }
            }

            // Finer control of the highchart options:
            var datagov_rewrite = Drupal.settings.views_highcharts[chart_id];

            // Fix pie chart.
            if (datagov_rewrite.series[0]['type'] == 'pie') {
                var data = datagov_rewrite.series[0].data;
                for (var i = 0; i < data.length; i++) {
                    data[i] = {
                        'name':datagov_rewrite.xAxis.categories[i],
                        'y':data[i][1]
                    };
                }
            }

            // Pie color:
            if (datagov_rewrite['storage']['view_name'] == 'metrics_suggested_dataset') {
                var data = datagov_rewrite.series[0].data;
                for (var i = 0; i < data.length; i++) {
                    if (data[i]['name'].indexOf('Potentially') != -1) {
                        data[i]['color'] = colors[5];
                    }
                    else if (data[i]['name'].indexOf('Already') != -1) {
                        data[i]['color'] = colors[0];
                    }
                    else if (data[i]['name'].indexOf('Not') != -1) {
                        data[i]['color'] = colors[1];
                    }
                    else {
                        data[i]['color'] = colors[2];
                    }
                }
            }

            // xAxis
            switch (datagov_rewrite['storage']['view_name']) {

                case 'metrics_daily_visitor' :
                    for (var i = datagov_rewrite.xAxis.categories.length - 1; i >= 0; i--) {
                        var d = datagov_rewrite.xAxis.categories[i];
                        // d comes in as yyyy-mm format.
                        d = d.split('-');
                        try {
                            d = parseInt(d[2], 10);
                            datagov_rewrite.xAxis.categories[i] = d;
                        }
                        catch (err) {
                        }
                    }
                    ;
                    datagov_rewrite.xAxis.title.text = 'Day of the Month';
                    break;

                case 'metrics_monthly_visitor':
                case 'metrics_monthly_download':
                case 'metrics_monthly_page_views':
                    for (var i = datagov_rewrite.xAxis.categories.length - 1; i >= 0; i--) {
                        var d = datagov_rewrite.xAxis.categories[i];
                        // d comes in as yyyy-mm format.
                        d = d.split('-');
                        try {
                            var y = d[0], m = parseInt(d[1], 10);
                            var months = ['Jan', 'Feb', 'Mar', 'Apr', 'May', 'Jun', 'Jul', 'Aug', 'Sep', 'Oct', 'Nov', 'Dec'];
                            var m = months[m - 1];
                            datagov_rewrite.xAxis.categories[i] = m + " " + y;
                        }
                        catch (err) {
                        }
                    }
                    ;
                    break;

                case 'metrics_top_state':
                    datagov_rewrite.xAxis.labels = {
                        rotation:-50,
                        align:'right'
                    }
                    break;
                case 'metrics_top_country':
                    datagov_rewrite.xAxis.labels = {
                        y: 40
                    }
                    datagov_rewrite['chart']['marginBottom'] = 75;
                    break;
                case 'communities_activity_graph':
                    datagov_rewrite.xAxis.title = {
                        text: 'Community Name',
                        style: {
                            fontFamily: 'novecentowidebold',
                            fontWeight: 'normal',
                            color: '#9b9b9b',
                            fontSize: '10px'
                        }
                    };
                    datagov_rewrite.xAxis.gridLineWidth = 0;
                    datagov_rewrite.xAxis.labels = {
                        style: {
                            fontFamily: 'novecentowidebold',
                            fontWeight: 'normal',
                            color: '#9b9b9b'
                        }
                    };
                    // might as well add yAxis changes here too
                    datagov_rewrite.yAxis.title.style = {
                        fontFamily: 'novecentowidebold',
                        fontWeight: 'normal',
                        color: '#9b9b9b',
                        fontSize: '10px'
                    };
                    datagov_rewrite.yAxis.gridLineWidth = 0;
                    datagov_rewrite.yAxis.labels = {
                        enabled: true
                    };
                    break;
            }

            // Tooltip
            datagov_rewrite['tooltip'] = {
                formatter:function () {
                    var point = this.point, s = '';
                    if (datagov_rewrite.series[0]['type'] == 'pie') {
                        s = '<b>' + this.point.name + '</b> ' + precentage_decimal(this.percentage, settings.decPlaces[datagov_rewrite['storage']['view_name']]) + ' %';
                    }
                    else {
                        s = this.x + ':<b>' + add_comma(this.y) + '</b><br/>';
                    }
                    return s;
                }
            };

            // Title
            switch (datagov_rewrite['storage']['view_name']) {
                case 'metrics_daily_visitor':
                case 'metrics_top_country':
                case 'metrics_top_state':
                    datagov_rewrite['title'] = {
                        text:datagov_rewrite['title']['text'] + " (" + datagov_rewrite['storage']['month_name'] + ")"
                    };
                    break;
            }

            // Color box before item list.
            if (datagov_rewrite['storage']['view_name'] == 'metrics_rawtool' || datagov_rewrite['storage']['view_name'] == 'metrics_geodata') {
                // this required unique colors, so add more colors to make sure more colors than items
                Highcharts.setOptions({
                    colors:colors.concat(['#402fc2', '#f6c11d', '#c39508', '#055c57', '#4824bc'])
                });
                colors = Highcharts.getOptions().colors;

                // Add colors before each item.
                jQuery('.view-' + datagov_rewrite['storage']['view_name'].replace('_', '-') + ' tbody tr').each(function (index) {
                    jQuery(this).prepend('<td><div style="width:11px;height:11px;border:1px solid black;background-color:' + colors[index] + '"></div></td>');
                });

                // dont forget to add an empty th for thead.
                jQuery('.view-' + datagov_rewrite['storage']['view_name'].replace('_', '-') + ' thead tr').each(function (index) {
                    jQuery(this).prepend('<th></th>');
                });
            }

            // Country flags
            if (datagov_rewrite['storage']['view_name'] == 'metrics_top_country') {
                var data = datagov_rewrite.series[0].data,
                    imagesMap = {};
                var drawImages = function () {
                    var chart = this;
                    for (var i = 0; i < chart.series[0].data.length; i++) {

                        var imageWidth = 32,
                            x = chart.plotLeft + chart.xAxis[0].translate(i, false) - imageWidth / 2,
                            y = chart.yAxis[0]['height'] + 40;
                        // on top of the column
                        // y = chart.yAxis[0]['height'] - chart.yAxis[0].translate(data[i], false) - 5;
                        imagesMap[i] = chart.renderer.image('/sites/all/themes/datagov/images/flags/32/' + datagov_rewrite.xAxis.categories[i] + ".png", x, y, imageWidth, imageWidth)
                            .attr({
                                zIndex:100
                            })
                            .add();
                    }
                };

                var alignImages = function () {
                    var chart = this;
                    for (var i = 0; i < chart.series[0].data.length; i++) {
                        var imageWidth = 32,
                            x = chart.plotLeft + chart.xAxis[0].translate(i, false) - imageWidth / 2,
                            y = chart.yAxis[0]['height'] + 40;
                        // on top of the column
                        // y = chart.yAxis[0]['height'] - chart.yAxis[0].translate(data[i], false) - 5;
                        imagesMap[i].attr({
                            x:x,
                            y:y});
                    }
                };

                datagov_rewrite['chart']['events'] = {
                    load:drawImages,
                    redraw:alignImages
                };
            }

            // Enable lables.
            datagov_rewrite['plotOptions'] = {
                column:{
                    // animation: false,
                    colorByPoint:settings.colorByPoint[datagov_rewrite['storage']['view_name']],
                    dataLabels:{
                        enabled:settings.dataLabels[datagov_rewrite['storage']['view_name']],
                        // color: colors[0],
                        // style: {
                        //  fontWeight: 'bold'
                        // },
                        formatter:function () {
                            return abbr_number(this.y, 1);
                        }
                    }
                },
                pie:{
                    allowPointSelect:true,
                    cursor:'pointer',
                    dataLabels:{
                        enabled:true,
                        color:'#000000',
                        connectorColor:'#000000',
                        formatter:function () {
                            var s = precentage_decimal(this.percentage, settings.decPlaces[datagov_rewrite['storage']['view_name']]) + ' %';
                            if (datagov_rewrite['storage']['view_name'] != 'metrics_rawtool' && datagov_rewrite['storage']['view_name'] != 'metrics_geodata') {
                                s = '<b>' + this.point.name + '</b><br>' + s;
                            }
                            return s;
                        }
                    }
                }
            };

            // Community Hub - change default colors, highlight the highest column with a different color
            if (datagov_rewrite['storage']['view_name'] == 'communities_activity_graph') {
                jQuery(this).css('min-height', '275px');
                // format chart
                    datagov_rewrite.chart.height = 250;
                    datagov_rewrite.chart.borderColor = '#e5eaee';
                    datagov_rewrite.chart.borderWidth = 1;
                    datagov_rewrite.chart.backgroundColor = '#f8f8f8';

                // format columns
                    datagov_rewrite.plotOptions.column.animation = false;
                    datagov_rewrite.plotOptions.column.borderColor = '#2d9bb2';
                    datagov_rewrite.plotOptions.column.shadow = false;
                    datagov_rewrite.plotOptions.column.dataLabels.enabled = true;
                    datagov_rewrite.plotOptions.column.dataLabels.style = {
                        fontFamily: 'novecentowidebold',
                        fontSize: '0px'
                    };
                    datagov_rewrite.plotOptions.column.dataLabels.color = '#54abbe';
                    //datagov_rewrite.plotOptions.column.dataLabels.backgroundColor = '#fff';
                    datagov_rewrite.plotOptions.column.dataLabels.borderRadius = 10;
                    datagov_rewrite.plotOptions.column.dataLabels.padding = 6;
                    datagov_rewrite.plotOptions.column.dataLabels.y = 30; // TODO: if the column value is too small, show the label above the column instead of below/inside it
                    datagov_rewrite.plotOptions.column.pointPadding = 0;
                    datagov_rewrite.series[0].color = '#54abbe';

                // // locate '- Private group -' entry. if found, delete this data item and its label. otherwise, delete the last data item and its label
                // // TODO: modify the Drupal view to prevent private group entries from showing, then deprecate this code block
                //     var indexToRemove = datagov_rewrite.xAxis.categories.length - 1;
                //     var newCategories = [];
                //     for (index in datagov_rewrite.xAxis.categories) {
                //         if (datagov_rewrite.xAxis.categories[index] == '- Private group -') {
                //             indexToRemove = index;
                //         } else if (index != indexToRemove) {
                //             newCategories.push(datagov_rewrite.xAxis.categories[index]);
                //         }
                //     }
                //     var newSeriesData = [];
                //     for (index in datagov_rewrite.series[0].data) {
                //         if (index != indexToRemove) {
                //             newSeriesData.push(datagov_rewrite.series[0].data[index]);
                //         }
                //     }
                //     datagov_rewrite.xAxis.categories = newCategories;
                //     datagov_rewrite.series[0].data = newSeriesData;

                // highlight the highest column with a different color
                    var maxValue = 0;
                    for (index in datagov_rewrite.series[0].data) { // loop the first time to find the max value
                        maxValue = Math.max(maxValue, datagov_rewrite.series[0].data[index]);
                    }
                    for (index in datagov_rewrite.series[0].data) { // loop again to apply style to max value
                        if (datagov_rewrite.series[0].data[index] == maxValue) {
                            datagov_rewrite.series[0].data[index] = {
                                color: '#bbe300',
                                y: maxValue,
                                borderColor: '#aed300',
                                dataLabels: { color: '#bbe300' }
                            };
                        }
                    }
            }

            if (datagov_rewrite['storage']['view_name'] == 'communities_activity_graph') {
                Drupal.behaviors.views_highcharts.charts[chart_id] =
                    new Highcharts.Chart(datagov_rewrite, function(chartObj) {
                        jQuery.each(chartObj.series[0].data, function(i, point) {
                            if(point.y < 100) { // if the value < 100 then show the number value above the column instead of inside
                                point.dataLabel.attr({y:240 - point.y});
                            }
                        });
                    });
            } else {
                Drupal.behaviors.views_highcharts.charts[chart_id] = new Highcharts.Chart(datagov_rewrite);
            }

            jQuery(value).addClass("views-highcharts-processed");

        })
    },
    detach:function (context) {

    }
};