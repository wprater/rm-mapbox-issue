# -*- coding: utf-8 -*-
$:.unshift("/Library/RubyMotion/lib")
require 'motion/project/template/ios'

begin
  require 'bundler'
  Bundler.require
rescue LoadError
end

Motion::Project::App.setup do |app|
  # Use `rake config' to see complete project settings.
  app.name = 'someappname'

  app.pods do
    pod 'MapBox'
  end

  app.libs.delete_if { |lib| lib =~ /Proj4/ }
  app.vendor_project('vendor/Pods/MapBox/Proj4', :static, products: ['libProj4.a'])

end
