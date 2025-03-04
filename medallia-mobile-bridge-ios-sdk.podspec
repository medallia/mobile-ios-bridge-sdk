Pod::Spec.new do |spec|
    spec.name                     = 'medallia-mobile-bridge-ios-sdk'
    spec.version                  = '1.0.3'
    spec.homepage                 = 'https://github.com/medallia/mobile-ios-bridge-sdk'
    spec.source                   = { :git => 'https://github.com/medallia/mobile-ios-bridge-sdk.git', :tag => '1.0.3' }
    spec.authors                  = { 'Medallia' => 'cocoapods@medallia.com' }
    spec.license                  = { :type => 'Commercial', :text => 'Copyright © 2025 Medallia. Use subject to licensing terms.' }
    spec.summary                  = 'Medallia Mobile Bridge SDK'
    spec.vendored_frameworks      = 'MedalliaSDKEventBusInternal.xcframework'
    spec.libraries                = 'c++'
    spec.ios.deployment_target = '12.0'
                
                
                
                
    spec.ios.vendored_frameworks = 'MedalliaSDKEventBusInternal.xcframework'
end