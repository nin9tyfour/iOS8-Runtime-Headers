/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@class CKContainerID, NSObject<NSSecureCoding><NSCopying>;

@interface CKSharedItemID : NSObject <NSSecureCoding, NSCopying> {
    long long _itemType;
    long long _scope;
    CKContainerID *_containerID;
    NSObject<NSSecureCoding><NSCopying> *_itemIdentifier;
}

@property long long itemType;
@property long long scope;
@property(copy) CKContainerID * containerID;
@property(copy) NSObject<NSSecureCoding><NSCopying> * itemIdentifier;

+ (bool)supportsSecureCoding;

- (id)_itemTypeDescription;
- (id)commentIdentifier;
- (void)setItemType:(long long)arg1;
- (id)UIDocumentIdentifier;
- (id)initWithItemType:(long long)arg1 itemIdentifier:(id)arg2;
- (long long)itemType;
- (id)initWithItemType:(long long)arg1 itemIdentifier:(id)arg2 containerID:(id)arg3;
- (void)CKAssignToContainerWithID:(id)arg1;
- (id)containerID;
- (id)shareID;
- (id)zoneID;
- (id)ckShortDescription;
- (id)CKPropertiesDescription;
- (void)setContainerID:(id)arg1;
- (void)setItemIdentifier:(id)arg1;
- (id)itemIdentifier;
- (long long)scope;
- (id)recordID;
- (id)init;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setScope:(long long)arg1;

@end
