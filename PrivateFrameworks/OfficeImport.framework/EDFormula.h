/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSString;

@interface EDFormula : NSObject <EDFormulaBuilding> {
    struct __CFData { } *mPackedData;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)formula;

- (bool)isSharedFormula;
- (void)setOriginalFormulaString:(id)arg1;
- (bool)isCleanedWithEvaluationStack;
- (bool)isContainsRelativeReferences;
- (bool)convertTokensToSharedAtRow:(unsigned int)arg1 column:(unsigned int)arg2;
- (id)initWithFormula:(id)arg1;
- (void)archiveByAppendingToMutableData:(struct __CFData { }*)arg1;
- (void)unarchiveFromData:(struct __CFData { }*)arg1 offset:(unsigned long long*)arg2;
- (void)updateCleanedWithEvaluationStack:(bool)arg1;
- (void)updateContainsRelativeReferences:(bool)arg1;
- (void)setWarningParameter:(id)arg1;
- (id)warningParameter;
- (bool)replaceTokenAtIndex:(unsigned int)arg1 withFormula:(id)arg2 formulaTokenIndex:(unsigned int)arg3;
- (bool)replaceTokenAtIndex:(unsigned int)arg1 withFormula:(id)arg2;
- (unsigned int)countExtendedDataForTokenAtIndex:(unsigned int)arg1;
- (void)replaceTokenTypeAtIndex:(unsigned int)arg1 withType:(int)arg2;
- (bool)uppercaseArgAtIndex:(unsigned int)arg1;
- (bool)fixTableOfConstantsRefs;
- (bool)wrapArgumentsWithOperator:(int)arg1 argumentCount:(unsigned int)arg2 atIndex:(unsigned int)arg3;
- (bool)addInfixOperator:(int)arg1 atIndex:(unsigned int)arg2 factor:(double)arg3;
- (bool)shrinkSpanningRefAtArgIndex:(unsigned int)arg1;
- (void)markLastTokenAsSpanningRefVertically:(bool)arg1 withMin:(unsigned short)arg2 andMax:(unsigned short)arg3;
- (void)markLastTokenAsDuration;
- (id)lastTokenRefOrArea3dLinkRefIsValid:(bool*)arg1 withEDLinks:(id)arg2;
- (bool)convertLastRefsToArea;
- (bool)convertToIntersect:(unsigned int)arg1;
- (bool)convertToList:(unsigned int)arg1;
- (bool)addArrayWithCol:(int)arg1 andRow:(int)arg2;
- (bool)insertExternalName:(unsigned long long)arg1 withLink:(unsigned long long)arg2 atIndex:(unsigned int)arg3;
- (bool)insertName:(unsigned long long)arg1 atIndex:(unsigned int)arg2;
- (char *)addToken:(int)arg1 extendedDataLength:(unsigned int)arg2 numArgs:(int)arg3;
- (char *)extendedDataForTokenAtIndex:(unsigned int)arg1 extendedDataIndex:(unsigned int)arg2 length:(unsigned int*)arg3;
- (bool)convertToList:(unsigned int)arg1 withFinalParen:(bool)arg2;
- (char *)setExtendedDataForLastTokenAtIndex:(unsigned int)arg1 length:(unsigned int)arg2;
- (id)saveArgs:(unsigned int)arg1 andDelete:(bool)arg2;
- (bool)removeTokenAtIndex:(unsigned int)arg1;
- (unsigned int)firstTokenIndexForArgAtIndex:(unsigned int)arg1;
- (int)warningType;
- (bool)copyTokenAtIndex:(unsigned int)arg1 fromFormula:(id)arg2;
- (void)setupExtendedDataForTokenAtIndex:(unsigned int)arg1 extendedDataLength:(unsigned int)arg2 extendedDataCount:(unsigned int)arg3;
- (char *)setExtendedDataAtIndex:(unsigned int)arg1 extendedDataIndex:(unsigned int)arg2 length:(unsigned int)arg3;
- (bool)addToken:(int)arg1 extendedDataLength:(unsigned int)arg2 extendedDataCount:(unsigned int)arg3;
- (struct EDToken { unsigned short x1; unsigned int x2; }*)tokenAtIndex:(unsigned int)arg1;
- (struct ChVector<XlPtg *> { struct XlPtg {} **x1; struct XlPtg {} **x2; unsigned int x3; unsigned int x4; unsigned int x5; }*)xlPtgs;
- (bool)isBaseFormula;
- (bool)copyTokenFromXlPtg:(struct XlPtg { char *x1; int x2; unsigned int x3; unsigned short x4; }*)arg1;
- (void)populateXlPtg:(struct XlPtg { char *x1; int x2; unsigned int x3; unsigned short x4; }*)arg1 index:(unsigned int)arg2;
- (id)warning;
- (id)originalFormulaString;
- (void)setCleaned:(bool)arg1;
- (char *)addToken:(int)arg1 extendedDataLength:(unsigned int)arg2;
- (bool)setupTokensWithTokensCount:(unsigned int)arg1 tokensWithDataCount:(unsigned int)arg2 extendedDataLength:(unsigned int)arg3 extendedDataCount:(unsigned int)arg4;
- (void)setWarning:(int)arg1;
- (void)removeAllTokens;
- (bool)isCleaned;
- (bool)isSupportedFormula;
- (int)tokenTypeAtIndex:(unsigned int)arg1;
- (char *)lastExtendedDataForTokenAtIndex:(unsigned int)arg1 length:(unsigned int*)arg2;
- (unsigned int)tokenCount;
- (id)init;
- (void)dealloc;

@end
