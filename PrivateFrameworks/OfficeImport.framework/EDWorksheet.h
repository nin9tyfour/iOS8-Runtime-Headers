/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDPane, OITSUPointerKeyDictionary, EDWarnings, EDRowBlocks, EDMergedCellCollection, EDReference, EDCollection, EDColumnInfoCollection;

@interface EDWorksheet : EDSheet  {
    EDRowBlocks *mRowBlocks;
    EDColumnInfoCollection *mColumnInfos;
    EDCollection *mConditionalFormattings;
    EDCollection *mHyperlinks;
    EDCollection *mTables;
    EDCollection *mPivotTables;
    EDMergedCellCollection *mMergedCells;
    EDPane *mPane;
    EDWarnings *mWorksheetWarnings;
    double mDefaultColumnWidth;
    unsigned short mDefaultRowHeight;
    unsigned long long mMaxRowOutlineLevel;
    unsigned long long mMaxColumnOutlineLevel;
    boolmFitToPage;
    EDReference *mMaxCellReferencedInFormulas;
    OITSUPointerKeyDictionary *mMergedRows;
    OITSUPointerKeyDictionary *mMergedCols;
    EDReference *mImplicitCellArea;
}


- (id)tables;
- (id)pivotTables;
- (void)setImplicitCellArea:(id)arg1;
- (id)implicitCellArea;
- (id)mergedColRef:(unsigned int)arg1;
- (bool)isColMerged:(unsigned int)arg1;
- (bool)hasMergedCol;
- (id)mergedRowRef:(unsigned int)arg1;
- (bool)isRowMerged:(unsigned int)arg1;
- (bool)hasMergedRow;
- (void)setMergedColsRef:(id)arg1 from:(unsigned int)arg2 to:(unsigned int)arg3;
- (void)setMergedRowsRef:(id)arg1 from:(unsigned int)arg2 to:(unsigned int)arg3;
- (void)updateMaxColumnOutlineLevelIfNeeded:(unsigned long long)arg1;
- (unsigned long long)maxColumnOutlineLevel;
- (void)updateMaxRowOutlineLevelIfNeeded:(unsigned long long)arg1;
- (unsigned long long)maxRowOutlineLevel;
- (bool)hasMergedCells;
- (bool)fitToPage;
- (void)reduceMemoryIfPossible;
- (void)setMaxColumnOutlineLevel:(unsigned long long)arg1;
- (void)setMaxRowOutlineLevel:(unsigned long long)arg1;
- (void)setFitToPage:(bool)arg1;
- (void)setDefaultRowHeight:(unsigned short)arg1;
- (void)setDefaultColumnWidth:(double)arg1;
- (id)worksheetWarnings;
- (id)hyperlinks;
- (id)conditionalFormattings;
- (id)maxCellReferencedInFormulas;
- (id)columnInfos;
- (unsigned short)defaultRowHeight;
- (double)defaultColumnWidth;
- (id)rowBlocks;
- (id)mergedCells;
- (id)pane;
- (void)setPane:(id)arg1;
- (void)setup;
- (void)teardown;

@end
