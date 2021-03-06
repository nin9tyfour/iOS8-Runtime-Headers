/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVCaptureInputInternal, NSArray;

@interface AVCaptureInput : NSObject  {
    AVCaptureInputInternal *_inputInternal;
}

@property(readonly) NSArray * ports;

+ (void)initialize;

- (struct OpaqueCMClock { }*)clock;
- (void)detachFromFigCaptureSession:(struct OpaqueFigCaptureSession { }*)arg1;
- (void)attachToFigCaptureSession:(struct OpaqueFigCaptureSession { }*)arg1;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession { }*)arg1;
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession { }*)arg1;
- (id)ports;
- (void)performFigCaptureSessionOperationSafelyUsingBlock:(id)arg1;
- (id)init;
- (void)setSession:(id)arg1;
- (id)session;
- (void)dealloc;

@end
