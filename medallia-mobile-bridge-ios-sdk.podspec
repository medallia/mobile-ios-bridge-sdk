Pod::Spec.new do |spec|
    spec.name                     = 'medallia-mobile-bridge-ios-sdk'
    spec.version                  = '1.0.0'
    spec.homepage                 = 'https://github.com/medallia/mobile-ios-sdk'
    spec.source                   = { :git => 'https://github.com/medallia/mobile-ios-bridge-sdk.git', :tag => '1.0.0' }
    spec.authors                  = { 'Medallia' => 'cocoapods@medallia.com' }
    spec.license                  = { :type => 'Commercial', :text => 'null' }
    spec.summary                  = 'Medallia Mobile Bridge SDK'
    spec.vendored_frameworks      = 'MedalliaSDKEventBusInternal.xcframework'
    spec.libraries                = 'c++'
    spec.ios.deployment_target = '12.0'
                
                
                
                
    spec.ios.vendored_frameworks = 'MedalliaSDKEventBusInternal.xcframework'
end