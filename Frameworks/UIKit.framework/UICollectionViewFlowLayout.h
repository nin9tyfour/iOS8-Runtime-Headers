/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableDictionary, NSDictionary, _UIFlowLayoutInfo, NSMutableArray;

@interface UICollectionViewFlowLayout : UICollectionViewLayout  {
    struct { 
        unsigned int delegateSizeForItem : 1; 
        unsigned int delegateReferenceSizeForHeader : 1; 
        unsigned int delegateReferenceSizeForFooter : 1; 
        unsigned int delegateInsetForSection : 1; 
        unsigned int delegateInteritemSpacingForSection : 1; 
        unsigned int delegateLineSpacingForSection : 1; 
        unsigned int delegateAlignmentOptions : 1; 
        unsigned int layoutDataIsValid : 1; 
        unsigned int delegateInfoIsValid : 1; 
        unsigned int roundsToScreenScale : 1; 
    } _gridLayoutFlags;
    double _interitemSpacing;
    double _lineSpacing;
    struct CGSize { 
        double width; 
        double height; 
    } _itemSize;
    struct CGSize { 
        double width; 
        double height; 
    } _estimatedItemSize;
    struct CGSize { 
        double width; 
        double height; 
    } _headerReferenceSize;
    struct CGSize { 
        double width; 
        double height; 
    } _footerReferenceSize;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _sectionInset;
    _UIFlowLayoutInfo *_data;
    struct CGSize { 
        double width; 
        double height; 
    } _currentLayoutSize;
    NSMutableDictionary *_insertedItemsAttributesDict;
    NSMutableDictionary *_insertedSectionHeadersAttributesDict;
    NSMutableDictionary *_insertedSectionFootersAttributesDict;
    NSMutableDictionary *_deletedItemsAttributesDict;
    NSMutableDictionary *_deletedSectionHeadersAttributesDict;
    NSMutableDictionary *_deletedSectionFootersAttributesDict;
    long long _scrollDirection;
    NSDictionary *_rowAlignmentsOptionsDictionary;
    struct CGPoint { 
        double x; 
        double y; 
    } _contentOffsetAdjustment;
    struct CGSize { 
        double width; 
        double height; 
    } _contentSizeAdjustment;
    NSMutableArray *_indexPathsToValidate;
}

@property double minimumLineSpacing;
@property double minimumInteritemSpacing;
@property struct CGSize { double x1; double x2; } itemSize;
@property struct CGSize { double x1; double x2; } estimatedItemSize;
@property long long scrollDirection;
@property struct CGSize { double x1; double x2; } headerReferenceSize;
@property struct CGSize { double x1; double x2; } footerReferenceSize;
@property struct UIEdgeInsets { double x1; double x2; double x3; double x4; } sectionInset;

+ (Class)invalidationContextClass;

- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (void)setEstimatedItemSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })estimatedItemSize;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })sectionInset;
- (struct CGSize { double x1; double x2; })footerReferenceSize;
- (struct CGSize { double x1; double x2; })headerReferenceSize;
- (bool)_roundsToScreenScale;
- (void)_setRoundsToScreenScale:(bool)arg1;
- (void)_updateContentSizeScrollingDimensionWithDelta:(double)arg1;
- (id)_rowAlignmentOptions;
- (void)_setRowAlignmentsOptions:(id)arg1;
- (void)_invalidateButKeepAllInfo;
- (void)_invalidateButKeepDelegateInfo;
- (struct CGSize { double x1; double x2; })synchronizeLayout;
- (id)finalLayoutAttributesForFooterInDeletedSection:(long long)arg1;
- (id)finalLayoutAttributesForHeaderInDeletedSection:(long long)arg1;
- (id)finalLayoutAttributesForDeletedItemAtIndexPath:(id)arg1;
- (id)initialLayoutAttributesForFooterInInsertedSection:(long long)arg1;
- (id)initialLayoutAttributesForHeaderInInsertedSection:(long long)arg1;
- (id)initialLayoutAttributesForInsertedItemAtIndexPath:(id)arg1;
- (void)_setNeedsLayoutComputationWithoutInvalidation;
- (void)setFooterReferenceSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setHeaderReferenceSize:(struct CGSize { double x1; double x2; })arg1;
- (id)layoutAttributesForFooterInSection:(long long)arg1;
- (id)layoutAttributesForHeaderInSection:(long long)arg1;
- (id)indexesForSectionFootersInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)indexesForSectionHeadersInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })_estimatedItemSize;
- (void)_setEstimatedItemSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_updateItemsLayoutForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_getSizingInfos;
- (void)_updateDelegateFlags;
- (double)minimumLineSpacing;
- (double)minimumInteritemSpacing;
- (id)indexesForSectionFootersInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 usingData:(id)arg2;
- (id)indexesForSectionHeadersInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 usingData:(id)arg2;
- (id)_layoutAttributesForItemsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })itemSize;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1 usingData:(id)arg2;
- (bool)_estimatesSizes;
- (long long)_sectionArrayIndexForIndexPath:(id)arg1;
- (id)layoutAttributesForFooterInSection:(long long)arg1 usingData:(id)arg2;
- (id)layoutAttributesForHeaderInSection:(long long)arg1 usingData:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForItem:(long long)arg1 inSection:(long long)arg2 usingData:(id)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForFooterInSection:(long long)arg1 usingData:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForHeaderInSection:(long long)arg1 usingData:(id)arg2;
- (void)_fetchItemsInfoForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)finalizeCollectionViewUpdates;
- (bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSectionInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (id)indexPathForItemAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (long long)scrollDirection;
- (void)setItemSize:(struct CGSize { double x1; double x2; })arg1;
- (id)invalidationContextForPreferredLayoutAttributes:(id)arg1 withOriginalAttributes:(id)arg2;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)invalidateLayoutWithContext:(id)arg1;
- (void)prepareLayout;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (bool)shouldInvalidateLayoutForPreferredLayoutAttributes:(id)arg1 withOriginalAttributes:(id)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (struct CGSize { double x1; double x2; })collectionViewContentSize;
- (void)setMinimumLineSpacing:(double)arg1;
- (void)setMinimumInteritemSpacing:(double)arg1;
- (void)setScrollDirection:(long long)arg1;

@end
