/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOClientCapabilities, NSString, NSData;

@interface GEORPProblemNotificationAvailabilityRequest : PBRequest <NSCopying> {
    struct { 
        unsigned long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    } _businessIds;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    } _problemTypes;
    GEOClientCapabilities *_clientCapabilities;
    NSString *_countryCode;
    NSData *_devicePushToken;
    int _pinType;
    int _placeType;
    struct { 
        unsigned int pinType : 1; 
        unsigned int placeType : 1; 
    } _has;
}

@property(readonly) unsigned long long problemTypesCount;
@property(readonly) int* problemTypes;
@property(readonly) bool hasCountryCode;
@property(retain) NSString * countryCode;
@property(readonly) bool hasDevicePushToken;
@property(retain) NSData * devicePushToken;
@property(readonly) bool hasClientCapabilities;
@property(retain) GEOClientCapabilities * clientCapabilities;
@property(readonly) unsigned long long businessIdsCount;
@property(readonly) unsigned long long* businessIds;
@property bool hasPlaceType;
@property int placeType;
@property bool hasPinType;
@property int pinType;


- (int)placeType;
- (void)setBusinessIds:(unsigned long long*)arg1 count:(unsigned long long)arg2;
- (unsigned long long*)businessIds;
- (void)setProblemTypes:(int*)arg1 count:(unsigned long long)arg2;
- (int*)problemTypes;
- (void)addBusinessId:(unsigned long long)arg1;
- (unsigned long long)businessIdAtIndex:(unsigned long long)arg1;
- (void)clearBusinessIds;
- (unsigned long long)businessIdsCount;
- (void)addProblemType:(int)arg1;
- (int)problemTypeAtIndex:(unsigned long long)arg1;
- (void)clearProblemTypes;
- (unsigned long long)problemTypesCount;
- (id)devicePushToken;
- (bool)hasDevicePushToken;
- (void)setDevicePushToken:(id)arg1;
- (bool)hasPlaceType;
- (void)setHasPlaceType:(bool)arg1;
- (void)setPlaceType:(int)arg1;
- (int)pinType;
- (bool)hasPinType;
- (void)setHasPinType:(bool)arg1;
- (void)setPinType:(int)arg1;
- (id)clientCapabilities;
- (bool)hasClientCapabilities;
- (void)setClientCapabilities:(id)arg1;
- (bool)hasCountryCode;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (void)setCountryCode:(id)arg1;
- (id)countryCode;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
