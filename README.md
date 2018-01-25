# oc-static-server

```
 将本项目所有文件拷贝到ios项目文件StaticServer目录下，添加进入xcode
 ```
 使用方法
 ```
 #import "StaticServer.h" 
 [StaticServer startServer:@"8081" optroot:@"game" localOnly:false keepAlive:false]; 
```

 参数说明: 
* port:监听端口 
* optroot:所在本地文件夹 
* localOnly: 本地使用localhost 
* keepAlive：进入后台是否保持服务激活 


