# XunFeiPlugin-For-UE4
集成讯飞SDK,并制作成UE4插件

参考: https://blog.csdn.net/u012793104/article/details/78067937 
      https://blog.csdn.net/zhangmei126/article/details/101437452
      
第二个链接在复现时出现了SDK登录错误10132,讯飞的错误码显示是回调错误,一直没能解决这个问题

所以,综合这两篇文章自己重写了一个插件,另外感谢第一篇文章和第二篇文章的大佬.

引擎版本:UE4.22

使用方法见第一篇文章

更换bin文件下dll文件和ThirdParty文件夹下的头文件和lib文件

另外更改SpeechTask.cpp中,讯飞SDK的Appid.