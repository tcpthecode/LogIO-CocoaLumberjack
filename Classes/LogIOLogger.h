
#import <Foundation/Foundation.h>
#import <CocoaLumberjack/CocoaLumberjack.h>
#import <CocoaAsyncSocket/GCDAsyncSocket.h>

@interface LogIOLogger : DDAbstractLogger <DDLogger, GCDAsyncSocketDelegate>

+ (LogIOLogger *)sharedInstance;

+ (void)connectTo:(NSString *)host port:(uint16_t)port;

+ (void)configure;

+ (void)configureNode:(NSString *)nodeName stream:(NSString *)streamName;

@end
