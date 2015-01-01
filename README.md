#掌门新锐 工作学习总结

> ##2014.12.30
####在自己home目录里可以找到相对应的.bash*文件

- .bashrc 这里可以添加一些自定义的sh命令,可以很方便的执行
- .bash_history 这个文件主要负责记录用户所操作的命令 对于记录的量是可以设置的
- .bash_profile 这个文件是系统的每个用户设置环境信息,当用户第一次登录时,该文件被执行.
- .bash_logout 这个文件在用户退出是会被执行

在使用时,应该**尽可能的把东西加在.bashrc里面而不是.bash_profile里面**,这样可以减少错误的发生.

> ##2014.12.31
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

> ##2014.01.01

####virtualbox R3问题

```bash
Unable to load R3 module D:\app\virtualbox/VBoxDD.DLL (VBoxDD): GetLastError=1790 (VERR_UNRESOLVED_ERROR).
```
这是我的错误日志,是使用vagrant的过程中虚拟机打不开找到的.百思不得其解,google之~
发现这里出现的问题主要是因为windows7的三个主题破解文件引起的,在网上有专门针对恢复的一种工具**UniversalThemePatcher**! 前车之鉴...