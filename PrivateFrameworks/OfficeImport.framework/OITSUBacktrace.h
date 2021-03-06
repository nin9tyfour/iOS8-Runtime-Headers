/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OITSUBacktrace : NSObject  {
    void **_callstack;
    int _frames;
    int _initAdjustment;
}

+ (id)callee;
+ (id)caller;
+ (id)backtrace;
+ (id)new;

- (id)backtraceString;
- (id)callee;
- (id)caller;
- (id)callerAtIndex:(long long)arg1;
- (id)initWithAdjustment:(int)arg1;
- (id)init;
- (bool)isEqual:(id)arg1;
- (void)dealloc;

@end
