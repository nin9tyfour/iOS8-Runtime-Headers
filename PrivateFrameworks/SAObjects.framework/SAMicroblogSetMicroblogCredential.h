/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, SAMicroblogSocialCredential;

@interface SAMicroblogSetMicroblogCredential : SABaseCommand <SAServerBoundCommand> {
}

@property(retain) SAMicroblogSocialCredential * socialCredential;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(copy) NSString * aceId;
@property(copy) NSString * refId;

+ (id)setMicroblogCredentialWithDictionary:(id)arg1 context:(id)arg2;
+ (id)setMicroblogCredential;

- (void)setSocialCredential:(id)arg1;
- (id)socialCredential;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
