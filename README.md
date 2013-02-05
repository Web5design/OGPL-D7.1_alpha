<blockquote>
<h2>INSTALLATION:</h2>
<ol>
<li>Make sure that your hosting environment meets the following requirements: <pre>http://drupal.org/requirements</pre> and both git and drush 5.8 (or later) are installed</p>
<li>Run: <pre>git clone https://github.com/REI-Systems/OGPL-D7.1_alpha.git</pre></li>
<li>Set-up the hosting environment for the cloned drupal distribution</li>
<li>Run: <pre>drush si ogpl7 --sites-subdir=<domain> --db-url=mysql://<username>:<password>@<domain>:<port>/<database> --account-name=<username> --account-mail=<accountemail> --account-pass=<userpassword> --site-mail=<siteemail> --site-name=<sitename></li></pre>
<li>Enable Datagov Content Moderation feature</li> 
<li>Enjoy!</li>
</ol>
</blockquote>
