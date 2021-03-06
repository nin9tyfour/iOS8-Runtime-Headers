/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLAssetFormats : NSObject  {
}

+ (id)descriptionForFormat:(int)arg1;
+ (bool)isAlbumVideoPath:(id)arg1;
+ (bool)transformForImage:(struct CGImage { }*)arg1 captureOrientation:(int)arg2 format:(int)arg3 sizeInOut:(struct CGSize { double x1; double x2; }*)arg4 contextSizeOut:(struct CGSize { double x1; double x2; }*)arg5 transformOut:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }*)arg6;
+ (struct CGSize { double x1; double x2; })scaledSizeForSize:(struct CGSize { double x1; double x2; })arg1 format:(int)arg2 capLength:(bool)arg3;
+ (unsigned long long)maxLongSideForFullSizeFormat:(int)arg1;
+ (unsigned long long)desiredLongSideForFullSizeFormat:(int)arg1;
+ (unsigned long long)minShortSideForFullSizeFormat:(int)arg1;
+ (bool)formatIsBadgedForVideo:(int)arg1;
+ (bool)formatIsFullscreen:(int)arg1;
+ (bool)formatIsCropped:(int)arg1;
+ (bool)formatSizeIsShortSide:(int)arg1;
+ (struct CGSize { double x1; double x2; })sizeForFormat:(int)arg1;


@end
