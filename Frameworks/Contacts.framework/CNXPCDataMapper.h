/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNXPCDataMapper : NSObject <CNDataMapper> {
    NSXPCConnection * _connection;
}

@property (retain) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)configureInterface:(id)arg1;

- (id)accountsMatchingPredicate:(id)arg1 error:(id*)arg2;
- (id)changeHistoryWithFetchRequest:(id)arg1 error:(id*)arg2;
- (bool)clearChangeHistoryForClient:(id)arg1 toSequenceNumber:(long long)arg2 error:(id*)arg3;
- (id)connection;
- (id)contactWithUserActivityUserInfo:(id)arg1 keysToFetch:(id)arg2;
- (id)contactsForFetchRequest:(id)arg1 error:(id*)arg2;
- (id)contactsForFetchRequest:(id)arg1 matchInfos:(id*)arg2 error:(id*)arg3;
- (id)containersMatchingPredicate:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (id)defaultContainerIdentifier;
- (id)executeFetchRequest:(id)arg1 progressiveResults:(id /* block */)arg2 completion:(id /* block */)arg3;
- (bool)executeSaveRequest:(id)arg1 error:(id*)arg2;
- (bool)executeSaveRequest:(id)arg1 response:(id*)arg2 error:(id*)arg3;
- (id)groupsMatchingPredicate:(id)arg1 error:(id*)arg2;
- (id)identifierWithError:(id*)arg1;
- (id)init;
- (id)initWithContactsEnvironment:(id)arg1;
- (id)meContactIdentifierWithError:(id*)arg1;
- (id)membersOfGroupWithIdentifier:(id)arg1 keysToFetch:(id)arg2 error:(id*)arg3;
- (id)policyForContainerWithIdentifier:(id)arg1 error:(id*)arg2;
- (bool)registerClientForChangeHistory:(id)arg1 error:(id*)arg2;
- (id)remoteResultForSelector:(SEL)arg1 error:(id*)arg2;
- (id)remoteResultForSelector:(SEL)arg1 parameters:(id)arg2 error:(id*)arg3;
- (id)remoteResultForSelector:(SEL)arg1 query:(id)arg2 error:(id*)arg3;
- (id)remoteResultForSelector:(SEL)arg1 query:(id)arg2 queryParameter:(id)arg3 error:(id*)arg4;
- (void)requestAccessForEntityType:(long long)arg1 completionHandler:(id /* block */)arg2;
- (bool)requestAccessForEntityType:(long long)arg1 error:(id*)arg2;
- (id)serverSearchContainersMatchingPredicate:(id)arg1 error:(id*)arg2;
- (bool)setBestMeIfNeededForGivenName:(id)arg1 familyName:(id)arg2 email:(id)arg3 error:(id*)arg4;
- (void)setConnection:(id)arg1;
- (bool)setMeContact:(id)arg1 error:(id*)arg2;
- (bool)setMeContact:(id)arg1 forContainer:(id)arg2 error:(id*)arg3;
- (id)subgroupsOfGroupWithIdentifier:(id)arg1 error:(id*)arg2;
- (id)unifiedContactCountWithError:(id*)arg1;
- (bool)unregisterClientForChangeHistory:(id)arg1 error:(id*)arg2;
- (id)userActivityUserInfoForContact:(id)arg1;

@end