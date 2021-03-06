/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, NSArray, SALocalSearchBusiness2, SAUIImageResource;

@interface SAMovieV2ShowtimeSnippet : SAUISnippet  {
}

@property(retain) SAUIImageResource * attributionLogo;
@property(copy) NSString * movieName;
@property(copy) NSArray * showtimes;
@property(retain) SALocalSearchBusiness2 * theater;
@property(copy) NSString * theaterName;

+ (id)showtimeSnippetWithDictionary:(id)arg1 context:(id)arg2;
+ (id)showtimeSnippet;

- (void)setAttributionLogo:(id)arg1;
- (id)attributionLogo;
- (void)setTheaterName:(id)arg1;
- (id)theaterName;
- (void)setTheater:(id)arg1;
- (id)theater;
- (void)setShowtimes:(id)arg1;
- (id)showtimes;
- (void)setMovieName:(id)arg1;
- (id)movieName;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
