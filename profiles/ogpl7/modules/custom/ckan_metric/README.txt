
CONTENTS OF THIS FILE
---------------------

 * Overview
 * Usage

OVERVIEW
--------

This module will create a Drupal CRON entry to daily query CKAN server to get
the dataset count for each organization. 

USAGE
-----

 * Add CKAN Metadata Access Point at /admin/config/datagov_get_metadata. A
   trailing slash is needed.

 * Configure and run CKAN sycn cron jobs at
   /admin/config/development/ckan_metric_crons.
   - CRON STATUS INFORMATION shows current CRON status.
   - RUN CRON MANUALLY will let you start a new cron, if there is no existing
     cron job queued. Otherwise the button will just behave like a regular
     cron call and execute existing queue. So, if you want to start a new
     cron, make sure existing queue are 0, as shown in the CRON STATUS
     INFORMATION, and also ensure current time is within the cron start and
     end time frame as set in DAILY CRON JOB SETTINGS.
   - SERVER ADDRESS TO GET THE METRIC ORGANIZATION STRUCTURE. This is where to
     get the organization list and structure. 
   - DAILY CRON JOB SETTINGS is where you configure the CRON queue running
     length, daily CRON start and end time frame. It is recommended that you
     set it to start from 2AM and ends at 6AM, each queue runs for 1 minute.
     Then configure externally to call Drupal cron every two minutes from 2AM
     to 6AM.