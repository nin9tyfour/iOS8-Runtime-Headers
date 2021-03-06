/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSObject<OS_dispatch_queue>, NSString, NSXPCConnection;

@interface BBSettingsGateway : NSObject <BBSettingsGatewayClientInterface> {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _overrideStatusChangeHandler;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _activeOverrideTypesChangedHandler;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _overrideStateChangeHandler;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _overridesChangedHandler;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _overridesEffectiveWhileUnlockedChangedHandler;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _privilegedSenderGroupChangedHandler;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _privilegedSenderTypesChangedHandler;

    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)clientInterface;
+ (void)initialize;
+ (id)serverInterface;

- (void)setBehaviorOverridesEffectiveWhileUnlocked:(bool)arg1;
- (void)setBehaviorOverrideStatus:(long long)arg1;
- (void)setActiveBehaviorOverrideTypesChangeHandler:(id)arg1;
- (void)setBehaviorOverrideStatusChangeHandler:(id)arg1;
- (void)setBehaviorOverridesChangeHandler:(id)arg1;
- (void)setBehaviorOverridesEnabled:(bool)arg1;
- (void)getBehaviorOverridesEnabledWithCompletion:(id)arg1;
- (void)getBehaviorOverridesEffectiveWhileUnlockedWithCompletion:(id)arg1;
- (void)setSectionInfo:(id)arg1 forSectionID:(id)arg2;
- (void)setOrderedSectionIDs:(id)arg1;
- (void)setPrivilegedSenderTypesWithSourceChangeHandler:(id)arg1;
- (void)setPrivilegedSenderAddressBookGroupRecordIDWithSourceChangeHandler:(id)arg1;
- (void)setBehaviorOverrideStateChangeHandler:(id)arg1;
- (void)setBehaviorOverridesEffectiveWhileUnlockedChangeHandler:(id)arg1;
- (void)getPrivilegedSenderAddressBookGroupRecordIDAndNameWithCompletion:(id)arg1;
- (void)setBehaviorOverridesWithSourceChangeHandler:(id)arg1;
- (void)setBehaviorOverridesEffectiveWhileUnlocked:(bool)arg1 source:(unsigned long long)arg2;
- (void)setPrivilegedSenderAddressBookGroupRecordID:(int)arg1 name:(id)arg2 source:(unsigned long long)arg3;
- (void)setPrivilegedSenderTypes:(unsigned long long)arg1 source:(unsigned long long)arg2;
- (void)setSectionInfo:(id)arg1 forSectionID:(id)arg2 inCategory:(long long)arg3;
- (void)setOrderedSectionIDs:(id)arg1 forCategory:(long long)arg2;
- (void)setSectionOrderRule:(long long)arg1;
- (void)behaviorOverridesEffectiveWhileUnlockedChanged:(bool)arg1 source:(unsigned long long)arg2;
- (void)behaviorOverridesChanged:(id)arg1 source:(unsigned long long)arg2;
- (void)privilegedSenderAddressBookGroupRecordIDChanged:(int)arg1 name:(id)arg2 source:(unsigned long long)arg3;
- (void)privilegedSenderTypesChanged:(unsigned long long)arg1 source:(unsigned long long)arg2;
- (void)behaviorOverrideStatusChanged:(long long)arg1 source:(unsigned long long)arg2;
- (void)activeBehaviorOverrideTypesChanged:(unsigned long long)arg1 source:(unsigned long long)arg2;
- (void)getPrivilegedSenderTypesWithCompletion:(id)arg1;
- (void)getSectionOrderRuleWithCompletion:(id)arg1;
- (void)getSectionInfoForCategory:(long long)arg1 withCompletion:(id)arg2;
- (void)getBehaviorOverridesWithCompletion:(id)arg1;
- (void)setBehaviorOverrideStatusWithSourceChangeHandler:(id)arg1;
- (void)setActiveBehaviorOverrideTypesWithSourceChangeHandler:(id)arg1;
- (void)setBehaviorOverrides:(id)arg1;
- (void)setPrivilegedSenderAddressBookGroupRecordID:(int)arg1 name:(id)arg2;
- (void)setPrivilegedSenderTypes:(unsigned long long)arg1;
- (void)setBehaviorOverrideStatus:(long long)arg1 source:(unsigned long long)arg2;
- (void)setBehaviorOverrides:(id)arg1 source:(unsigned long long)arg2;
- (void)getSectionInfoWithCompletion:(id)arg1;
- (id)init;
- (void)invalidate;
- (void)dealloc;
- (id)initWithQueue:(id)arg1;

@end
