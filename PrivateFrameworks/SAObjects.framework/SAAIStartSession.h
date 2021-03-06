/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString;

@interface SAAIStartSession : SABaseCommand <SAServerBoundCommand> {
}

@property(copy) NSString * acousticIdSessionId;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(copy) NSString * aceId;
@property(copy) NSString * refId;

+ (id)startSessionWithDictionary:(id)arg1 context:(id)arg2;
+ (id)startSession;

- (void)setAcousticIdSessionId:(id)arg1;
- (id)acousticIdSessionId;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
