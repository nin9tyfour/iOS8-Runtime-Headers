/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AddressBook.framework/AddressBook
 */

@class NSString;

@interface ABFavoritesEntry : NSObject  {
    int _abUid;
    int _abIdentifier;
    NSString *_value;
    int _property;
    int _type;
    unsigned int _dirty : 1;
    NSString *_label;
    NSString *_name;
    NSString *_abDatabaseUUID;
    void *_addressBook;
}

+ (void)_runLookup;

- (int)property;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (void)_postEntryChanged;
- (void)_lookupChanged:(id)arg1;
- (void)_lookupNotFound;
- (void)recheckAddressBook;
- (int)_abUid;
- (void*)ABPerson;
- (id)nonLocalizedLabel;
- (void)dictionaryRepresentation:(id*)arg1 isDirty:(bool*)arg2;
- (id)initWithPerson:(void*)arg1 property:(int)arg2 identifier:(int)arg3;
- (void)_queueLookup;
- (void)_unqueueLookup;
- (id)initWithDictionaryRepresentation:(id)arg1 addressBook:(void*)arg2;
- (id)initWithPerson:(void*)arg1 property:(int)arg2 identifier:(int)arg3 type:(int)arg4;
- (int)identifier;
- (id)value;
- (id)label;
- (bool)isEqual:(id)arg1;
- (int)type;
- (void)dealloc;
- (id)displayName;
- (id)dictionaryRepresentation;

@end
