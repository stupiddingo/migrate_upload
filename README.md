migrate_upload
==============

Imports csv uploads using migrate api

Working code, but needs more eyes and refactoring.

To use for dev:
```
git clone -b master https://github.com/idahofishgame/species.git
cd species/sites/all/modules
git clone https://github.com/stupiddingo/migrate_upload.git
mv migrate_upload custom
```
Install drupal with a new database
```
drush en migrate_upload
drush en observation_nest_survey
drush dl biblio
drush en biblio
```
Perhaps I can make this a bit more streamlined.  Accepting recommendations.
