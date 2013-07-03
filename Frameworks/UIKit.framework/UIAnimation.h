/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface UIAnimation : NSObject  {
    id _target;
    SEL _action;
    id _delegate;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completion;

    struct { 
        unsigned int curve : 4; 
        unsigned int tvOutput : 1; 
        unsigned int useNSTimer : 1; 
    } _animationFlags;
    double _startTime;
    double _duration;
    int _state;
}


- (void)setDuration:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (int)state;
- (BOOL)usesNSTimer;
- (void)setAction:(SEL)arg1;
- (void)stopAnimation;
- (float)progressForFraction:(float)arg1;
- (void)markStart:(double)arg1;
- (void)setCompletion:(id)arg1;
- (id)completion;
- (void)markStop;
- (float)fractionForTime:(double)arg1;
- (void)setUsesNSTimer:(BOOL)arg1;
- (void)setProgress:(float)arg1;
- (void)setAnimationCurve:(int)arg1;
- (SEL)action;
- (id)initWithTarget:(id)arg1;
- (int)type;
- (id)target;

@end