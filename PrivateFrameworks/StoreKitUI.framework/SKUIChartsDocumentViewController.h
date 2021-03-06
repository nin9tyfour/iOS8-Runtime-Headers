/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIChartsTemplateViewElement, NSString, SKUIChartColumnsView, NSMutableArray;

@interface SKUIChartsDocumentViewController : SKUIViewController <SKUIDocumentViewController> {
    SKUIChartColumnsView *_chartsView;
    NSMutableArray *_columnViewControllers;
    SKUIChartsTemplateViewElement *_templateElement;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (bool)_shouldForwardViewWillTransitionToSize;

- (void)documentDidUpdate:(id)arg1;
- (id)_columnViewControllers;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_chartInsets;
- (long long)_visibleColumnCountForWidth:(double)arg1;
- (id)_newColumnViewControllersWithReusableViewControllers:(id)arg1;
- (id)initWithTemplateElement:(id)arg1;
- (void)skui_viewWillAppear:(bool)arg1;
- (void).cxx_destruct;
- (id)contentScrollView;
- (void)viewWillAppear:(bool)arg1;
- (void)loadView;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (struct CGSize { double x1; double x2; })sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize { double x1; double x2; })arg2;
- (void)viewWillLayoutSubviews;

@end
