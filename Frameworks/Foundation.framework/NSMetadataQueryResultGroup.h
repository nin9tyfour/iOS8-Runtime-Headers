/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSString, NSArray;

@interface NSMetadataQueryResultGroup : NSObject  {
    id _private[9];
    unsigned long long _private2[1];
    void *_reserved;
}

@property(copy,readonly) NSString * attribute;
@property(retain,readonly) id value;
@property(copy,readonly) NSArray * subgroups;
@property(readonly) unsigned long long resultCount;
@property(copy,readonly) NSArray * results;


- (id)value;
- (void)dealloc;
- (void)_zapResultArray;
- (id)subgroups;
- (id)attribute;
- (id)resultAtIndex:(unsigned long long)arg1;
- (void)_addResult:(unsigned long long)arg1;
- (id)_init:(id)arg1 attributes:(id)arg2 index:(unsigned long long)arg3 value:(id)arg4;
- (unsigned long long)resultCount;
- (id)results;

@end
