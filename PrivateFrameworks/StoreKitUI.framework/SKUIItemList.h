/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSArray, NSString, NSMutableArray, NSMutableDictionary;

@interface SKUIItemList : NSObject <SKUICacheCoding, NSCopying> {
    NSMutableArray *_items;
    NSString *_seeAllURLString;
    NSString *_title;
    NSString *_seeAllTitle;
}

@property(copy) NSArray * items;
@property(copy) NSString * seeAllTitle;
@property(copy) NSString * seeAllURLString;
@property(copy) NSString * title;
@property(readonly) NSMutableDictionary * cacheRepresentation;


- (void)setSeeAllURLString:(id)arg1;
- (void)setSeeAllTitle:(id)arg1;
- (id)seeAllURLString;
- (id)seeAllTitle;
- (id)cacheRepresentation;
- (id)initWithCacheRepresentation:(id)arg1;
- (void)removeItemsAtIndexes:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (id)items;
- (void)addItems:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)addItem:(id)arg1;
- (void)setItems:(id)arg1;

@end