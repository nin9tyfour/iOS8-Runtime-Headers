/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABPropertyGroupAlertItem : ABPropertyGroupItem  {
}

@property(getter=isTone,readonly) bool tone;
@property(getter=isVibration,readonly) bool vibration;


- (id)_vibrationManager;
- (id)_toneManager;
- (id)displayStringForValue:(id)arg1;
- (bool)isVibration;
- (bool)isTone;
- (bool)isValidValue:(id)arg1;
- (bool)canRemove;
- (id)displayLabel;
- (bool)isEquivalentToItem:(id)arg1 whenEditing:(bool)arg2;
- (id)description;

@end
