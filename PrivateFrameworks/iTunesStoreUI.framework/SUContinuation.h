/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class <SUContinuationDelegate>;

@interface SUContinuation : NSObject  {
    <SUContinuationDelegate> *_delegate;
}

@property <SUContinuationDelegate> * delegate;


- (void)sendFinishToDelegate;
- (void)sendErrorToDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)start;
- (id)delegate;
- (void)cancel;

@end
