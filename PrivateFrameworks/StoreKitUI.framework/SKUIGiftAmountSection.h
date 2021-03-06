/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class UIControl, NSString, SKUIGiftAmountControl;

@interface SKUIGiftAmountSection : SKUIGiftTableViewSection  {
    SKUIGiftAmountControl *_amountControl;
}

@property(readonly) UIControl * amountControl;
@property(readonly) long long selectedAmount;
@property(readonly) NSString * selectedAmountString;


- (id)selectedAmountString;
- (long long)selectedAmount;
- (id)amountControl;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forIndexPath:(id)arg3;
- (id)tableViewCellForTableView:(id)arg1 indexPath:(id)arg2;
- (long long)numberOfRowsInSection;
- (double)heightForCellInTableView:(id)arg1 indexPath:(id)arg2;
- (void).cxx_destruct;

@end
