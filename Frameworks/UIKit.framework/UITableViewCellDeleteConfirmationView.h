/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, _UITableViewCellActionButton;

@interface UITableViewCellDeleteConfirmationView : UIView  {
    double _visibleWidth;
    struct CGSize { 
        double width; 
        double height; 
    } _contentSize;
    double _visibleHeightRatio;
    double _cornerRadius;
    int _sectionLocation;
    _UITableViewCellActionButton *_deleteView;
    _UITableViewCellActionButton *_accessoryView;
    NSArray *_actionButtons;
}

@property double visibleWidth;
@property(readonly) struct CGSize { double x1; double x2; } contentSize;
@property double visibleHeightRatio;
@property double cornerRadius;
@property int sectionLocation;
@property(readonly) _UITableViewCellActionButton * deleteView;
@property(readonly) _UITableViewCellActionButton * accessoryView;


- (double)cornerRadius;
- (void)dealloc;
- (id)deleteView;
- (double)visibleHeightRatio;
- (double)visibleWidth;
- (void)updateBounds;
- (void)updateMaskView:(bool)arg1;
- (id)accessoryView;
- (void)setVisibleWidth:(double)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 actionButtons:(id)arg2 contentSize:(struct CGSize { double x1; double x2; })arg3;
- (void)setSectionLocation:(int)arg1;
- (int)sectionLocation;
- (void)setVisibleHeightRatio:(double)arg1;
- (struct CGSize { double x1; double x2; })contentSize;
- (void)setCornerRadius:(double)arg1;
- (void)didMoveToWindow;

@end
