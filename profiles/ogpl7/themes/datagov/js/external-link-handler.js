var tID;
var tDelay;
var tURL;
var tID2;
var tDelay2;
var tURL2;
function autoLoadSite() {
    if (--tDelay == 0) {
        jQuery("span#extlink-counter").html("0");
        clearInterval(tID);
        window.location = tURL;
    } else {
        jQuery("span#extlink-counter").html(tDelay);                 
    }
}
function autoLoadSite2() {
    if (--tDelay2 == 0) {
        jQuery("span#extlink-counter").html("0");
        clearInterval(tID2);
        window.location = tURL2;
    } else {
        jQuery("span#extlink-counter").html(tDelay2);
    }
}
jQuery(document).bind('ready',function(){
    jQuery("a.ext").click(function(){
        var targetURL = (this.href.length > 50) ? this.href.substring(0, 40) + "..." : this.href;
        tURL = this.href;
        tDelay = 7;

        jQuery.colorbox({
            html: "<div id=\"extlink-popup\">" +
                "<h2 class=\"align-center extlink-title\">You are exiting Data.gov</h2>" +
                "<div class=\"align-center extlink-content\">" +
                "<p>You will be taken to the following site in <span id=\"extlink-counter\">" +
                tDelay + "</span> second(s).</p>" +
                "<p><a href=\"" + tURL + "\">" + targetURL + "</a></p></div></div>",
            onCleanup: function(){clearInterval(tID)},
            opacity: "0.35",
            width: "400",
            height: "150",
            scrolling: false
        });
        tID = setInterval("autoLoadSite()", 1000);
        return false;
    });
});

// writing a new function with new variables so that links on ajax work
jQuery(function(){
    jQuery('.view').bind('ajaxComplete',function() {

        jQuery("a.ext").click(function(){
            var targetURL = (this.href.length > 50) ? this.href.substring(0, 40) + "..." : this.href;
            tURL2 = this.href;
            tDelay2 = 7;

            jQuery.colorbox({
                html: "<div id=\"extlink-popup\">" +
                    "<h2 class=\"align-center extlink-title\">You are exiting Data.gov</h2>" +
                    "<div class=\"align-center extlink-content\">" +
                    "<p>You will be taken to the following site in <span id=\"extlink-counter\">" +
                    tDelay2 + "</span> second(s).</p>" +
                    "<p><a href=\"" + tURL2 + "\">" + targetURL + "</a></p></div></div>",
              onCleanup: function(){clearInterval(tID2)},
                opacity: "0.35",
                width: "400",
                height: "150",
                scrolling: false
            });
           tID2 = setInterval("autoLoadSite2()", 1000);
            return false;
        });

    });
});
