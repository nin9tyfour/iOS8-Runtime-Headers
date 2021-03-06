/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@class NSArray, CKDatabaseOperation;

@interface BRCBatch : NSObject  {
    NSArray *_operations;
    CKDatabaseOperation *_batchOperation;
}

@property(retain) NSArray * operations;
@property(retain) CKDatabaseOperation * batchOperation;
@property(readonly) unsigned long long size;
@property(readonly) unsigned long long transferredSize;


- (void)setBatchOperation:(id)arg1;
- (unsigned long long)transferredSize;
- (void)cancelIfNeeded;
- (id)batchOperation;
- (id)operations;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)size;
- (void)setOperations:(id)arg1;

@end
