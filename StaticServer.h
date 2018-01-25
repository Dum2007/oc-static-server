//
//  StaticServer.h
//  hello_world-mobile
//
//  Created by Anne on 2018/1/23.
//

#import "GCDWebServer.h"

@interface StaticServer : NSObject {
    GCDWebServer* _webServer;
}

/// 实例化单例
+ (StaticServer*)sharedInstance;

- (instancetype)init;

@property(nonatomic, retain) NSString *localPath;
@property(nonatomic, retain) NSString *url;

@property (nonatomic, retain) NSString* www_root;
@property (nonatomic, retain) NSNumber* port;
@property (assign) BOOL localhost_only;
@property (assign) BOOL keep_alive;

- (NSString*)start:(NSString*)port optroot:(NSString*)optroot localOnly:(BOOL)localhost_only keepAlive:(BOOL)keep_alive;
- (void)stop;

+ (NSString*)startServer:(NSString*)port optroot:(NSString*)optroot localOnly:(BOOL)localOnly keepAlive:(BOOL)keepAlive;
+ (void)stopServer;
@end
