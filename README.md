### Installation

> 1. Make sure that your hosting environment meets the following requirements: <pre>http://drupal.org/requirements</pre> and both git and drush 5.8 (or later) are installed. In addition php(both cli and web instance) memory limit must be set to at least 256 MB (i.e: memory_limit = 256M)
> 2. Run: <pre>git clone https://github.com/REI-Systems/OGPL-D7.1_alpha.git</pre>
> 3. Set-up the hosting environment for the cloned drupal distribution
> 4. Run: <pre>drush si ogpl7 --db-url=mysql://&lt;username&gt;:&lt;password&gt;@&lt;domain&gt;:&lt;port&gt;/&lt;database&gt; --account-name=&lt;username&gt; --account-mail=&lt;accountemail&gt; --account-pass=&lt;userpassword&gt; --site-mail=&lt;siteemail&gt; --site-name=&lt;sitename&gt;</pre>
> 5. Enable Datagov Content Moderation feature
> 6. Enjoy!
