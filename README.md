# xd0615
学习笔记：如何使用git以及配置  
1：下载git，这个群里分享直接下载，也可到官网：https://git-scm.com/  
2：安装到非系统盘（c）(听说会影响系统)  
3：在GitHub上创建一个开放项目并初始化（参考：https://www.liaoxuefeng.com/wiki/896043488029600/898732792973664）
添加SSh密钥，与本机联系（https://segmentfault.com/a/1190000013759207）  
4：git clone git地址将文件下载到本地  
   cd+项目名称/空格+ls 查看下载的md文件  
5：vim README.md开始编辑，按一下i从命令模式进入输入模式，编辑的过程中结尾2个空格默认换行    
6：结束编辑就用esc+:wq  
7:cat readme.md 查看更新内容  
8:完成后输入git add README.md保存所有修改，同时git commit -m "本次跟新描述"  
9:git push推送更新内容到服务器  
10:指令参考网址：https://blog.csdn.net/weelyy/article/details/82823798
