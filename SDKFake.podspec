Pod::Spec.new do |s|

# 1
s.platform = :ios
s.ios.deployment_target = '9.0'
s.name = "SDKFake"
s.summary = "SDKFake is a sample for BioCatch Tests."
s.requires_arc = true

# 2
s.version = "0.1.0"

# 3
s.license = { :type => "MIT", :file => "LICENSE" }

# 4 - Replace with your name and e-mail address
s.author = { "Carlos Savi" => "carlosalberto.savi@gmail.com" }

# 5 - Replace this URL with your own GitHub page's URL (from the address bar)
s.homepage = "https://github.com/savi1411/SDKFake"

# 6 - Replace this URL with your own Git URL from "Quick Setup"
s.source = { :git => "https://github.com/savi1411/SDKFake.git",
:tag => "#{s.version}" }

# 7
s.framework = "UIKit"

s.dependency 'BioCatchSDK', '2.3.6.1444'

# 8
s.source_files = "SDKFake/**/*.{h,m,c}"

# 9
# s.resources = "SDKFake/**/*.{png,jpeg,jpg,storyboard,xib,xcassets}"

# 10
s.swift_version = "4.2"

end
