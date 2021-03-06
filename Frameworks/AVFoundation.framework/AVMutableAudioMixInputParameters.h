/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVMutableAudioMixInputParametersInternal, NSString;

@interface AVMutableAudioMixInputParameters : AVAudioMixInputParameters  {
    AVMutableAudioMixInputParametersInternal *_mutableInputParameters;
}

@property int trackID;
@property(copy) NSString * audioTimePitchAlgorithm;
@property(retain) struct opaqueMTAudioProcessingTap { }* audioTapProcessor;

+ (id)audioMixInputParametersWithTrack:(id)arg1;
+ (id)audioMixInputParameters;

- (void)setVolume:(float)arg1 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)setVolumeRampFromStartVolume:(float)arg1 toEndVolume:(float)arg2 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg3;
- (void)setAudioTapProcessor:(struct opaqueMTAudioProcessingTap { }*)arg1;
- (void)setAudioTimePitchAlgorithm:(id)arg1;
- (id)audioTimePitchAlgorithm;
- (struct opaqueMTAudioProcessingTap { }*)audioTapProcessor;
- (void)setTrackID:(int)arg1;
- (int)trackID;

@end
