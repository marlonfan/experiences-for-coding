#掌门新锐 工作学习总结

##2014.12.30
####在自己home目录里可以找到相对应的.bash*文件

- .bashrc 这里可以添加一些自定义的sh命令,可以很方便的执行
- .bash_history 这个文件主要负责记录用户所操作的命令 对于记录的量是可以设置的
- .bash_profile 这个文件是系统的每个用户设置环境信息,当用户第一次登录时,该文件被执行.
- .bash_logout 这个文件在用户退出是会被执行

在使用时,应该**尽可能的把东西加在.bashrc里面而不是.bash_profile里面**,这样可以减少错误的发生.

##2014.12.31
####laravel中总模型可以直接toArray()

在今天立哥review代码的时候提出来的.
原代码:
```php
$bmlist  = Appointment::all();
$baoming = [];

foreach ($bmlist as $bm) {
    $baoming[] = $bm->toArray();
}

return $baoming;
```
改进后的代码:
```php
$baoming = Appointment::all()->toArray();
return $baoming;
```
我只想深深说句 fuck!.

##2015.01.01
####virtualbox R3问题

```bash
Unable to load R3 module D:\app\virtualbox/VBoxDD.DLL (VBoxDD): GetLastError=1790 (VERR_UNRESOLVED_ERROR).
```
这是我的错误日志,是使用vagrant的过程中虚拟机打不开找到的.百思不得其解,google之~
发现这里出现的问题主要是因为windows7的三个主题破解文件引起的,在网上有专门针对恢复的一种工具**UniversalThemePatcher**! 前车之鉴...
``嗯.还有个小提示,用ssh提交git不要密码的,但是如果用的是http协议还是会要的.``

##2015.01.07
####laravel包开发问题

折腾了一晚上这个问题,用``Config:get()``一直取不到配置到最后发现**laravel的包名和Config取数据的时候的包名一定要大小写一致**

##2015.01.12
#####PS:原谅这几天太忙,好多东西还没总结.
####在foreach中的in_array()问题
昨天做一个时间匹配的时候需要大范围内的进行循环对比
我的思路是循环用in_array()对比是否包含某个字,老大说循环次数太多了...
原来要将要查找的值直接转换成键,然后去对比等不等于,这样是黑红二分叉查询。要比我的思路快很多~~

##2015.02.16
#####之前写完竟然忘记推..我是有多伤..唯一的好消息就是已换mac
####关于程序分层
在之前做的公司内部工作平台上对程序的分层开发比较模糊,导致后面走了很多弯路.
将代码以功能拆分降低耦合有助于后期重构代码,定位错误,开发单元测试.

