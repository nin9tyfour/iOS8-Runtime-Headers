/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVExternalDeviceControllerInternal, <AVExternalDeviceControllerDelegate>, NSArray;

@interface AVExternalDeviceController : NSObject  {
    AVExternalDeviceControllerInternal *_externalDeviceController;
}

@property <AVExternalDeviceControllerDelegate> * delegate;
@property long long discoveryMode;
@property(copy,readonly) NSArray * availableExternalDevices;


- (bool)isExternalDeviceCurrent:(id)arg1;
- (bool)setCurrentExternalDevice:(id)arg1;
- (id)availableExternalDevices;
- (bool)setCurrentExternalDevice:(id)arg1 withPassword:(id)arg2;
- (long long)discoveryMode;
- (void)setDiscoveryMode:(long long)arg1;
- (id)init;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;

@end
