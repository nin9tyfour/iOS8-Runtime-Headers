/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSMutableData;

@interface _MFSecCMSEncoder : MFBufferedDataConsumer  {
    int _SecCMSError;
    struct SecCmsEncoderStr { } *_encoder;
    struct SecCmsMessageStr { } *_message;
    NSMutableData *_singleShot;
}

@property(readonly) int lastSecCMSError;


- (void)_appendBytes:(const void*)arg1 length:(unsigned long long)arg2;
- (id)initForEncryptionWithCompositionSpecification:(id)arg1 error:(id*)arg2;
- (id)initForSigningWithSender:(id)arg1 compositionSpecification:(id)arg2 error:(id*)arg3;
- (int)lastSecCMSError;
- (void)done;
- (id)data;
- (long long)appendData:(id)arg1;
- (void)dealloc;

@end
