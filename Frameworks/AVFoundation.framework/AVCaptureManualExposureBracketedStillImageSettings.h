/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureManualExposureBracketedStillImageSettings : AVCaptureBracketedStillImageSettings  {
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _exposureDuration;
    float _ISO;
}

@property(readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } exposureDuration;
@property(readonly) float ISO;

+ (id)manualExposureSettingsWithExposureDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 ISO:(float)arg2;

- (id)_initManualExposureSettingsWithExposureDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 ISO:(float)arg2;
- (float)ISO;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })exposureDuration;
- (id)description;

@end
