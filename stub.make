core = 7.x
api = 2

;Core
projects[drupal][type] = core
projects[drupal][version] = 7.22
;projects[drupal][type] = "core"
;projects[drupal][download][type] = "get"
;projects[drupal][download][url] = "http://files.aegir.cc/dev/drupal-7.22.1.tar.gz"

;Install profile
projects[mysite][type] = profile
projects[mysite][download][type] = git
projects[mysite][download][url] = https://github.com/eupho1/nfreeman.git
projects[mysite][download][branch] = 7.22.1
