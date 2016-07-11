/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iCloudQuota.framework/iCloudQuota
 */

@interface ICQOfferManager : NSObject {
    NSURLSessionDataTask * _fetchOfferDataTask;
    NSTimer * _invalidationTimer;
    bool  _isRegisteredForDarwinNotifications;
    NSURLSession * _sharedURLSession;
    NSURLSessionDataTask * _teardownAckDataTask;
    long long  _testKind;
    long long  _testLevel;
}

@property (nonatomic) long long testKind;
@property (nonatomic) long long testLevel;

+ (id)sharedOfferManager;

- (void).cxx_destruct;
- (id)URLForAccount:(id)arg1 quotaKey:(id)arg2;
- (void)_addCommonHeadersToRequest:(id)arg1 account:(id)arg2;
- (bool)_attemptSetRequest:(id)arg1 toPostWithJSONDict:(id)arg2;
- (void)_fetchOfferForAccount:(id)arg1 notificationID:(id)arg2;
- (void)_fetchOfferForAccount:(id)arg1 notificationID:(id)arg2 completion:(id /* block */)arg3;
- (bool)_fetchPersistedOfferIfNeeded:(id*)arg1;
- (void)_firedInvalidationTimer:(id)arg1;
- (void)_handlePushReceivedDarwinNotification;
- (id)_lastPushNotificationID;
- (void)_postPushReceivedDarwinNotification;
- (id)_pushNotificationDictionary;
- (void)_registerForDarwinNotifications;
- (void)_respondWithTeardownAcknowledgementForNotificationDictionary:(id)arg1 store:(id)arg2 account:(id)arg3 completion:(id /* block */)arg4;
- (id)_sanitizedNotificationDictionary:(id)arg1 account:(id)arg2;
- (void)_setupTimerForInvalidationDate:(id)arg1;
- (void)_showDaemonAlertForOffer:(id)arg1 notificationDictionary:(id)arg2 store:(id)arg3 account:(id)arg4 completion:(id /* block */)arg5;
- (void)_teardownInvalidationTimer;
- (void)_unregisterForDarwinNotifications;
- (id)currentOffer;
- (id)currentOfferForBundleIdentifier:(id)arg1;
- (void)dealloc;
- (bool)fetchOfferIfNeeded;
- (id)init;
- (void)persistOffer:(id)arg1;
- (void)persistOffer:(id)arg1 completion:(id /* block */)arg2;
- (id)persistedOffer;
- (void)processPushNotificationDictionary:(id)arg1 completion:(id /* block */)arg2;
- (void)setTestKind:(long long)arg1;
- (void)setTestLevel:(long long)arg1;
- (long long)testKind;
- (long long)testLevel;

@end