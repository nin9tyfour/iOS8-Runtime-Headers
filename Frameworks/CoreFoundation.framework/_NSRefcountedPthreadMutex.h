/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface _NSRefcountedPthreadMutex : NSObject  {
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    } lock;
}


- (id)init;
- (void)unlock;
- (void)lock;
- (void)finalize;
- (void)dealloc;

@end
