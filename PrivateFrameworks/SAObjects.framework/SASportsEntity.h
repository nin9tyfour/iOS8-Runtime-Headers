/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, SASportsLeague, NSURL, SAUIAppPunchOut;

@interface SASportsEntity : SADomainObject  {
}

@property(copy) NSURL * image;
@property(copy) NSURL * largeImage;
@property(retain) SASportsLeague * league;
@property(copy) NSURL * listImage;
@property(copy) NSString * name;
@property(retain) SAUIAppPunchOut * punchout;

+ (id)entityWithDictionary:(id)arg1 context:(id)arg2;
+ (id)entity;

- (void)setPunchout:(id)arg1;
- (id)punchout;
- (void)setListImage:(id)arg1;
- (id)listImage;
- (void)setLeague:(id)arg1;
- (id)league;
- (void)setLargeImage:(id)arg1;
- (id)largeImage;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
- (id)encodedClassName;
- (void)setName:(id)arg1;
- (void)setImage:(id)arg1;
- (id)image;
- (id)name;
- (id)groupIdentifier;

@end
