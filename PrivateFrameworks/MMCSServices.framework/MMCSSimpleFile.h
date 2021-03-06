/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/MMCSServices.framework/MMCSServices
 */

@class NSString, NSURL, NSData;

@interface MMCSSimpleFile : NSObject  {
    int _fd;
    double _progress;
    NSString *_authToken;
    long long _encryptionBehavior;
    NSString *_localPath;
    NSURL *_requestURL;
    NSString *_requestorID;
    NSString *_guid;
    unsigned long long _itemID;
    NSData *_signature;
    NSData *_fileHash;
    unsigned long long _protocolFileSize;
}

@property(retain) NSString * guid;
@property unsigned long long itemID;
@property(retain) NSURL * requestURL;
@property(retain) NSString * requestorID;
@property(retain) NSData * signature;
@property(retain) NSString * authToken;
@property(retain) NSString * localPath;
@property int fd;
@property(retain) NSData * fileHash;
@property unsigned long long protocolFileSize;
@property double progress;
@property long long encryptionBehavior;


- (id)requestorID;
- (void)setEncryptionBehavior:(long long)arg1;
- (long long)encryptionBehavior;
- (void)setRequestURL:(id)arg1;
- (void)setRequestorID:(id)arg1;
- (void)setLocalPath:(id)arg1;
- (unsigned long long)protocolFileSize;
- (id)fileHash;
- (void)setProtocolFileSize:(unsigned long long)arg1;
- (void)setFileHash:(id)arg1;
- (void)setFd:(int)arg1;
- (int)fd;
- (id)authToken;
- (void)setAuthToken:(id)arg1;
- (id)requestURL;
- (void)setItemID:(unsigned long long)arg1;
- (void)setSignature:(id)arg1;
- (void)setGuid:(id)arg1;
- (id)localPath;
- (id)guid;
- (unsigned long long)itemID;
- (id)init;
- (void)dealloc;
- (id)description;
- (void)setProgress:(double)arg1;
- (double)progress;
- (id)signature;

@end
