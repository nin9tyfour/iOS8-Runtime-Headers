/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/PassKit.framework/PassKit
 */

@class UIButton;

@interface PKPaymentSetupAssistantRegistrationViewController : PKPaymentAddCardViewController  {
    UIButton *_skipButton;
}

+ (bool)setupAssistantNeedsToRun;

- (void)preflightWithCompletion:(id)arg1;
- (id)initWithPaymentWebService:(id)arg1 context:(long long)arg2 delegate:(id)arg3;
- (void)skip:(id)arg1;
- (void)aboutButtonTouched:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;

@end
