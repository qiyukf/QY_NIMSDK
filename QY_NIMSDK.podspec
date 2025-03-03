Pod::Spec.new do |s|

    s.name     = 'QY_NIMSDK'
    s.version  = '9.2.8.1'
    s.license  = { :"type" => "Copyright",
                   :"text" => " Copyright 2021 Netease \n"}  
    s.summary  = '网易七鱼客服访客端 iOS SDK'
    s.homepage = 'https://qiyukf.com'
    s.author   = { 'qiyukf' => 'yunshangfu@126.com' }
    s.source   = { :git => 'https://github.com/qiyukf/QY_NIMSDK.git', :tag => "#{s.version}" }
    s.platform = :ios, '9.0'
    s.frameworks = 'SystemConfiguration', 'AVFoundation', 'CoreTelephony', 'AudioToolbox', 'CoreMedia', 'VideoToolbox'
    s.libraries = 'c++', 'z','sqlite3.0'
    s.vendored_frameworks = '**/NIMSDK.framework'
    end



