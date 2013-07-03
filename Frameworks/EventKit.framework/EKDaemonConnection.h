/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSString, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSMutableDictionary;

@interface EKDaemonConnection : NSObject  {
    unsigned long _options;
    NSString *_dbPath;
    unsigned int _serverPort;
    unsigned int _machPort;
    unsigned int _connectionPort;
    NSObject<OS_dispatch_queue> *_connectionLock;
    id _delegate;
    NSMutableDictionary *_replyHandlers;
    unsigned int _nextID;
    NSObject<OS_dispatch_source> *_replySource;
    NSObject<OS_dispatch_queue> *_replyHandlerLock;
    BOOL _registeredForStartNote;
}

@property(readonly) unsigned int port;
@property id delegate;


- (void)_daemonRestarted;
- (void)_processReplyWithID:(unsigned int)arg1 data:(id)arg2 finished:(BOOL)arg3;
- (void)_finishAllRepliesOnServerDeath;
- (BOOL)_connectToServer;
- (void)removeReplyHandler:(id)arg1;
- (id)addReplyHandler:(id)arg1;
- (id)initWithOptions:(unsigned long)arg1 path:(id)arg2;
- (void)disconnect;
- (unsigned int)port;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)delegate;

@end