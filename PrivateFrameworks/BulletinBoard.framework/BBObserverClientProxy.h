/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@class NSMutableDictionary, NSXPCConnection, BBServer, NSObject<OS_dispatch_queue>, NSString;

@interface BBObserverClientProxy : NSObject <BBObserverServerInterface, BBObserverClientInterface> {
    NSXPCConnection *_connection;
    BBServer *_serverWeak;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_bulletinIDsToTransaction;
    NSString *_clientBundleIdentifier;
}

@property(retain) NSXPCConnection * connection;
@property BBServer * serverWeak;
@property(retain) NSObject<OS_dispatch_queue> * queue;
@property(retain) NSMutableDictionary * bulletinIDsToTransaction;
@property(retain) NSString * clientBundleIdentifier;

+ (id)xpcInterface;

- (void)setClientBundleIdentifier:(id)arg1;
- (void)setBulletinIDsToTransaction:(id)arg1;
- (id)bulletinIDsToTransaction;
- (void)setServerWeak:(id)arg1;
- (id)serverWeak;
- (id)clientBundleIdentifier;
- (void)getObserverDebugInfo:(id)arg1;
- (void)updateBulletin:(id)arg1 forFeeds:(unsigned long long)arg2 withHandler:(id)arg3;
- (id)transactionBulletinIDs;
- (unsigned long long)incrementedTransactionIDForBulletinID:(id)arg1;
- (void)removeTransaction:(id)arg1;
- (void)updateBulletin:(id)arg1 forFeeds:(unsigned long long)arg2;
- (id)currentTransactionForBulletinID:(id)arg1;
- (id)initWithServer:(id)arg1 connection:(id)arg2 queue:(id)arg3;
- (void)noteServerReceivedResponseForBulletin:(id)arg1;
- (void)noteAlertBehaviorOverrideStateChanged:(id)arg1;
- (void)noteAlertBehaviorOverridesChanged:(id)arg1;
- (void)updateSectionParameters:(id)arg1 forSectionID:(id)arg2;
- (void)updateSectionInfo:(id)arg1 inCategory:(long long)arg2;
- (void)updateSectionOrder:(id)arg1 forCategory:(long long)arg2;
- (void)updateSectionOrderRule:(id)arg1;
- (void)finishedWithBulletinID:(id)arg1 transactionID:(unsigned long long)arg2;
- (void)getAttachmentAspectRatioForBulletinID:(id)arg1 withHandler:(id)arg2;
- (void)getAttachmentPNGDataForBulletinID:(id)arg1 sizeConstraints:(id)arg2 withHandler:(id)arg3;
- (void)getSectionParametersForSectionID:(id)arg1 withHandler:(id)arg2;
- (void)removeBulletins:(id)arg1 inSection:(id)arg2 fromFeeds:(unsigned long long)arg3;
- (void)clearBulletinIDs:(id)arg1 inSection:(id)arg2;
- (void)clearSection:(id)arg1;
- (void)getBulletinsForPublisherBulletinIDs:(id)arg1 sectionID:(id)arg2 withHandler:(id)arg3;
- (void)getUniversalSectionIDForSectionID:(id)arg1 withHandler:(id)arg2;
- (void)getPrivilegedSenderAddressBookGroupRecordIDAndNameWithHandler:(id)arg1;
- (void)getPrivilegedSenderTypesWithHandler:(id)arg1;
- (void)getActiveAlertBehaviorOverridesWithHandler:(id)arg1;
- (void)getSortDescriptorsForSectionID:(id)arg1 withHandler:(id)arg2;
- (void)requestFutureBulletinsForSectionID:(id)arg1;
- (void)requestTodayBulletinsForSectionID:(id)arg1;
- (void)requestNoticesBulletinsForSectionID:(id)arg1;
- (void)getSectionInfoForCategory:(long long)arg1 withHandler:(id)arg2;
- (void)getSectionOrderRuleWithHandler:(id)arg1;
- (void)setObserverFeed:(unsigned long long)arg1 attachToLightsAndSirensGateway:(id)arg2;
- (void)setObserverFeed:(unsigned long long)arg1 asLightsAndSirensGateway:(id)arg2 priority:(unsigned long long)arg3;
- (void)handleResponse:(id)arg1;
- (id)connection;
- (id)server;
- (void)setQueue:(id)arg1;
- (id)queue;
- (void)setConnection:(id)arg1;
- (void)dealloc;
- (id)description;

@end
