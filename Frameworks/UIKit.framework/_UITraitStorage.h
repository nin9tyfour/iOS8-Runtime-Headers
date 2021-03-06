/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, NSMutableArray;

@interface _UITraitStorage : NSObject <NSCoding> {
    NSMutableArray *_records;
    id _object;
    NSString *_keyPath;
}

@property(readonly) NSString * keyPath;
@property(readonly) id object;


- (id)object;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)keyPath;
- (void)addRecord:(id)arg1;
- (id)records;
- (id)initWithObject:(id)arg1 keyPath:(id)arg2;
- (void)applyRecordsMatchingTraitCollection:(id)arg1;

@end
