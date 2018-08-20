# YTK_MVVM_Demo
根据猿题库大神分享的博客 ，敲的demo，重在学习。原文地址http://gracelancy.com/blog/2016/01/06/ape-ios-arch-design/

<img src = "http://gracelancy.com/assets/post/arch0.png"/>

# View Controller
 1.布局 subviews，得到dataConreoller请求下来的数据，根据数据初始化viewmodel ，并与view绑定
 2.用户操作view的回调在viewcontroller，操作viewmodel，刷新UI（没有借助第三方绑定<ReactiveCocoa,RXSwift...>）
 
# 
