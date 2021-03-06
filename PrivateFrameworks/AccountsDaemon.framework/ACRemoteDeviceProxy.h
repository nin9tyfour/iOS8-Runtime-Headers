/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@class NSMutableDictionary, ACRemoteCommandHandler, NSString, NSLock, IDSService;

@interface ACRemoteDeviceProxy : NSObject <IDSServiceDelegate> {
    IDSService *_messageSendingService;
    ACRemoteCommandHandler *_remoteCommandHandler;
    NSMutableDictionary *_completionHandlersByMessageID;
    NSLock *_completionHandlersLock;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 hasBeenDeliveredWithContext:(id)arg4;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(bool)arg4 error:(id)arg5;
- (void)_dequeueCompletionHandlersForMessageID:(id)arg1 withSuccess:(bool)arg2 error:(id)arg3;
- (void)_enqueueCompletionHandler:(id)arg1 forMessageID:(id)arg2;
- (bool)_isValidCommandForOutgoingMessage:(id)arg1;
- (void)sendCommand:(id)arg1 withAccount:(id)arg2;
- (void)sendCommand:(id)arg1 withAccount:(id)arg2 completion:(id)arg3;
- (id)init;
- (void).cxx_destruct;

@end
