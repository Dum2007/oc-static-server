# oc-static-server


将本项目所有文件拷贝到ios项目文件StaticServer目录下，添加进入xcode
使用方法

#import "StaticServer.h" \n
[StaticServer startServer:@"8081" optroot:@"game" localOnly:false keepAlive:false]; \n

参数说明: \n
port:监听端口 \n
optroot:所在本地文件夹 \n
localOnly: 本地使用localhost \n
keepAlive：进入后台是否激活服务 \n
