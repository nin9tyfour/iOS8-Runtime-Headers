/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@class NSURL;

@interface __NSCFBackgroundAVAssetDownloadTask : __NSCFBackgroundSessionTask  {
    unsigned long long _downloadToken;
    unsigned long long _AVAssetDownloadToken;
    NSURL *_URL;
    NSURL *_destinationURL;
}

@property unsigned long long AVAssetDownloadToken;
@property(copy) NSURL * URL;
@property(copy) NSURL * destinationURL;


- (void)setDestinationURL:(id)arg1;
- (void)setURL:(id)arg1;
- (void)setAVAssetDownloadToken:(unsigned long long)arg1;
- (void)_onqueue_didReceiveProgressUpdateWithTotalBytesWritten:(long long)arg1 totalBytesExpectedToWrite:(long long)arg2;
- (id)initWithSession:(id)arg1 remoteSession:(id)arg2 URL:(id)arg3 destinationURL:(id)arg4 ident:(unsigned long long)arg5;
- (id)initWithTaskInfo:(id)arg1 session:(id)arg2 remoteSession:(id)arg3 ident:(unsigned long long)arg4;
- (id)destinationURL;
- (unsigned long long)AVAssetDownloadToken;
- (id)URL;
- (void)dealloc;

@end
