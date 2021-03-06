/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@class NSString, NSArray, NSURL, NSNumber;

@interface PKPaymentRegistrationResponse : PKPaymentWebServiceResponse  {
    NSString *_deviceIdentifier;
    NSArray *_certificates;
    NSNumber *_cardsOnFile;
    NSURL *_brokerURL;
    NSURL *_trustedServiceManagerURL;
    NSURL *_paymentServicesURL;
    NSNumber *_maxCards;
}

@property(retain) NSString * deviceIdentifier;
@property(retain) NSArray * certificates;
@property(retain) NSNumber * cardsOnFile;
@property(retain) NSURL * brokerURL;
@property(retain) NSURL * trustedServiceManagerURL;
@property(retain) NSURL * paymentServicesURL;
@property(retain) NSNumber * maxCards;


- (void)setTrustedServiceManagerURL:(id)arg1;
- (void)setCardsOnFile:(id)arg1;
- (void)setMaxCards:(id)arg1;
- (void)setBrokerURL:(id)arg1;
- (id)cardsOnFile;
- (id)maxCards;
- (id)paymentServicesURL;
- (id)trustedServiceManagerURL;
- (id)brokerURL;
- (void)setCertificates:(id)arg1;
- (void)setPaymentServicesURL:(id)arg1;
- (void)setDeviceIdentifier:(id)arg1;
- (id)deviceIdentifier;
- (id)initWithData:(id)arg1;
- (id)certificates;
- (void)dealloc;

@end
