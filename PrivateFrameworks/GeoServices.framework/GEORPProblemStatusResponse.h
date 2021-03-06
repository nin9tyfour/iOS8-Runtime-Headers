/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMutableArray;

@interface GEORPProblemStatusResponse : PBCodable <NSCopying> {
    NSMutableArray *_problemStatus;
    int _statusCode;
    struct { 
        unsigned int statusCode : 1; 
    } _has;
}

@property bool hasStatusCode;
@property int statusCode;
@property(retain) NSMutableArray * problemStatus;


- (id)problemStatus;
- (id)problemStatusAtIndex:(unsigned long long)arg1;
- (void)clearProblemStatus;
- (unsigned long long)problemStatusCount;
- (void)addProblemStatus:(id)arg1;
- (void)setProblemStatus:(id)arg1;
- (bool)hasStatusCode;
- (void)setHasStatusCode:(bool)arg1;
- (void)setStatusCode:(int)arg1;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (int)statusCode;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
