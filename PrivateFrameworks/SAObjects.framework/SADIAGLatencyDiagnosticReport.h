/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray, NSString;

@interface SADIAGLatencyDiagnosticReport : SABaseCommand <SAServerBoundCommand> {
}

@property(copy) NSArray * diagnosticReports;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(copy) NSString * aceId;
@property(copy) NSString * refId;

+ (id)latencyDiagnosticReportWithDictionary:(id)arg1 context:(id)arg2;
+ (id)latencyDiagnosticReport;

- (void)setDiagnosticReports:(id)arg1;
- (id)diagnosticReports;
- (id)encodedClassName;
- (id)groupIdentifier;

@end