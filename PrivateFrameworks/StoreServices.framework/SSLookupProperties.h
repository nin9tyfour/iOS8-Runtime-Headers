/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSMutableDictionary, NSString, CLLocation, NSNumber;

@interface SSLookupProperties : NSObject <NSCopying, SSXPCCoding> {
    CLLocation *_location;
    long long _localizationStyle;
    NSMutableDictionary *_requestParameters;
    NSNumber *_timeoutInterval;
}

@property(copy) NSString * keyProfile;
@property long long localizationStyle;
@property(copy) CLLocation * location;
@property(copy) NSNumber * timeoutInterval;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)setLocalizationStyle:(long long)arg1;
- (long long)localizationStyle;
- (void)setKeyProfile:(id)arg1;
- (id)keyProfile;
- (id)copyRequestParameters;
- (id)valueForRequestParameter:(id)arg1;
- (void)setValue:(id)arg1 forRequestParameter:(id)arg2;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (id)location;
- (void)setLocation:(id)arg1;
- (void)setTimeoutInterval:(id)arg1;
- (id)timeoutInterval;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
