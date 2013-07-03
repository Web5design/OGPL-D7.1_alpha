
CONTENTS OF THIS FILE
---------------------

 * Overview
 * Usage

OVERVIEW
--------

This module will create a Drupal CRON entry to daily synchronize community
datasets with CKAN server. Each Drupal community should have a corresponding
CKAN group mapped. This module will daily query each mapped community by
accessing CKAN group dataset list API, and create/update/delete community
dataset node as needed.

Points to note:

 * Depending on the network bandwidth, it takes approximately one second to
   update one dataset. So if the amount of daily new/modified datasets is
   large, cron job need to be run more often, preferably at the midnight or
   early AM time frame. 

 * The module will query to list all datasets for all communities, then check
   each one of them to see whether it is new/updated at CKAN server. An API
   call to the CKAN server is executed for each dataset that need to be
   updated. The criteria we use to determine new/updated is last_modified
   value plus group value and tag value, since on CKAN system, modification of
   group assignment and tags do not trigger new last_modified value.

USAGE
-----

 * Add CKAN Metadata Access Point at /admin/config/datagov_get_metadata. A
   trailing slash is needed.

 * View the Drupal community <-> CKAN group map at
   /admin/config/development/ckan_sync_communities. Note however, you cannot
   change values at this configuration page. You will need to go to each
   community node edit page to make mapping changes.

 * Configure and run CKAN sycn cron jobs at
   /admin/config/development/ckan_dataset_sync.
   - CRON STATUS INFORMATION shows current CRON status.
   - RUN CRON MANUALLY will let you start a new cron, if there is no existing
     cron job queued. Otherwise the button will just behave like a regular
     cron call and execute existing queue. So, if you want to start a new
     cron, make sure existing queue are 0, as shown in the CRON STATUS
     INFORMATION, and also ensure current time is within the cron start and
     end time frame as set in DAILY CRON JOB SETTINGS.
   - FORCE TO RE-SYNC. This button will clear all datasets
     ckan_metadata_modified value, so all will be forced to be re-synced from
     CKAN server, which will make next CRON run much longer than normal
     circumstance.
   - DELETE ALL QUEUED ITEMS will clear existing queue, so you can start a new
     one.
   - DAILY CRON JOB SETTINGS is where you configure the CRON queue running
     length, daily CRON start and end time frame. It is recommended that you
     set it to start from 2AM and ends at 6AM, each queue runs for 1 minute.
     Then configure externally to call Drupal cron every two minutes from 2AM
     to 6AM.