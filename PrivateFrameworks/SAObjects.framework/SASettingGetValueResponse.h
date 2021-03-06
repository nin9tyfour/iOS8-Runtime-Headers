/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, SASettingEntity;

@interface SASettingGetValueResponse : SASettingResponse <SASettingSupplier> {
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(retain) SASettingEntity * setting;

+ (id)getValueResponseWithDictionary:(id)arg1 context:(id)arg2;
+ (id)getValueResponse;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
