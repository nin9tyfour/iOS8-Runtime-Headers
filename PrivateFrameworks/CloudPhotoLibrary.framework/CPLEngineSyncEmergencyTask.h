/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@class NSString, <CPLEngineSyncEmergencyTaskDelegate>, CPLEngineLibrary;

@interface CPLEngineSyncEmergencyTask : CPLEngineSyncTask <NSCoding> {
    CPLEngineLibrary *_readwriteEngineLibrary;
    NSString *_taskIdentifier;
}

@property(retain) CPLEngineLibrary * engineLibrary;
@property(readonly) unsigned long long priority;
@property(retain) <CPLEngineSyncEmergencyTaskDelegate> * delegate;

+ (id)taskWithEngineLibrary:(id)arg1;
+ (bool)shouldCoalesceTasks;
+ (id)taskIdentifier;

- (bool)shouldStopSyncSession;
- (bool)shouldDiscardOnError;
- (void)setEngineLibrary:(id)arg1;
- (id)engineLibrary;
- (id)init;
- (unsigned long long)priority;
- (id)taskIdentifier;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void).cxx_destruct;

@end
