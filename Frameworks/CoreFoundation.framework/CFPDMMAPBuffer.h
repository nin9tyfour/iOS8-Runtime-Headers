/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface CFPDMMAPBuffer : CFPDDataBuffer  {
    void *bytes;
    unsigned long long length;
}


- (unsigned long long)length;
- (id)initWithSize:(unsigned long long)arg1 bufferPtr:(void**)arg2;
- (id)initWithFileDescriptor:(int)arg1 size:(unsigned long long)arg2 allowMappingIfSafe:(bool)arg3;
- (void*)bytes;
- (void)finalize;
- (void)dealloc;

@end
