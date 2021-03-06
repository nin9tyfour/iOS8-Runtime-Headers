/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADImageRecolorInfo, PDAnimationInfo, NSString, PDPlaceholder;

@interface PDOfficeArtClient : NSObject <OADClient, OADImageRecolorInfoClient> {
    OADImageRecolorInfo *mImageRecolorInfo;
    PDPlaceholder *mPlaceholder;
    boolmIsComment;
    PDAnimationInfo *mAnimationInfo;
    boolmHasOleChart;
    int mInheritedTextStylePlaceholderType;
}

@property int inheritedTextStylePlaceholderType;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)setIsComment:(bool)arg1;
- (void)setAnimationInfo:(id)arg1;
- (id)animationInfo;
- (bool)hasAnimationInfo;
- (int)inheritedTextStylePlaceholderType;
- (bool)isComment;
- (id)imageRecolorInfo;
- (bool)hasOleChart;
- (void)setHasOleChart:(bool)arg1;
- (void)setImageRecolorInfo:(id)arg1;
- (void)setInheritedTextStylePlaceholderType:(int)arg1;
- (bool)hasPlaceholder;
- (bool)hasBounds;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (id)init;
- (void)dealloc;
- (id)placeholder;
- (void)setPlaceholder:(id)arg1;

@end
