/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIViewController, UIView;

@interface _UIQueuingScrollViewState : _UITransitionState  {
    UIView *_view;
    UIViewController *_viewController;
    bool_manual;
}

@property(readonly) UIView * view;
@property(getter=isManual,readonly) bool manual;


- (id)view;
- (void)dealloc;
- (id)description;
- (bool)isManual;
- (id)initWithTransitionDirection:(long long)arg1 view:(id)arg2 manual:(bool)arg3 completion:(id)arg4;
- (bool)isCompatibleWithTransitionInDirection:(long long)arg1;

@end
