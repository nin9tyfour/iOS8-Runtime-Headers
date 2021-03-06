/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class VKResourceManager, NSMapTable, NSString, NSCache;

@interface VKTrafficIncidentImageManager : NSObject <GEOResourceManifestTileGroupObserver> {
    NSCache *_imageCache;
    NSMapTable *_targetDisplayToProvider;
    VKResourceManager *_resourceManager;
    unsigned int _tileGroupIdentifier;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)sharedManager;

- (void)setIncidentIconProvider:(id)arg1 forTargetDisplay:(long long)arg2;
- (id)imageForIncidentType:(long long)arg1 contentScale:(double)arg2 targetDisplay:(long long)arg3;
- (id)initWithTileGroupIdentifier:(unsigned int)arg1 resourceManager:(id)arg2;
- (id)imageForIncidentType:(long long)arg1 contentScale:(double)arg2;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (void)dealloc;

@end
