Pod::Spec.new do |s|   
    s.name = 'QY_NIMSDK_LITE'
    s.version = '8.9.3'   
    s.summary = 'Netease IM Lite SDK'
    s.homepage = 'http://netease.im'   
    s.license = { :'type' => 'Copyright', :'text' => ' Copyright 2021 Netease '}  
    s.authors = 'Netease IM Team'  
    s.source = { :git => 'https://github.com/qiyukf/QY_NIMSDK.git', :tag => s.version}  
    s.platform = :ios, '9.0'
    s.vendored_frameworks = '**/NIMSDK.framework'  
    s.frameworks = 'SystemConfiguration', 'AVFoundation', 'CoreTelephony', 'AudioToolbox', 'CoreMedia' , 'VideoToolbox'   
    s.libraries = 'sqlite3.0', 'z', 'c++'  
   end 