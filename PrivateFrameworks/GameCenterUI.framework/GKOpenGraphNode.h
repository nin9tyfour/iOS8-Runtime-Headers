/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@class NSError, NSURL;

@interface GKOpenGraphNode : NSObject  {
    unsigned long long _numberOfLikes;
    unsigned long long _numberOfFriendLikes;
    bool_liked;
    NSError *_error;
    NSURL *_url;
}

@property(readonly) NSURL * url;
@property bool liked;
@property unsigned long long numberOfFriendLikes;
@property unsigned long long numberOfLikes;
@property(retain) NSError * error;

+ (void)openGraphNodeForURL:(id)arg1 handler:(id)arg2;
+ (id)openGraphNodeAccessQueue;

- (unsigned long long)numberOfFriendLikes;
- (void)toggleLikeStatusWithCompletionHandler:(id)arg1;
- (void)clearErrorAndRefetchLikeStatusWithCompletionHandler:(id)arg1;
- (void)sendLikeEventWithCompletionHandler:(id)arg1;
- (void)sendDislikeEventWithCompletionHandler:(id)arg1;
- (unsigned long long)numberOfLikes;
- (bool)liked;
- (void)setNumberOfLikes:(unsigned long long)arg1;
- (void)setNumberOfFriendLikes:(unsigned long long)arg1;
- (void)setLiked:(bool)arg1;
- (void)fetchLikeStatusWithCompletionHandler:(id)arg1;
- (id)initWithOpenGraphURL:(id)arg1;
- (id)url;
- (void)setError:(id)arg1;
- (id)error;
- (void)dealloc;
- (id)description;

@end
