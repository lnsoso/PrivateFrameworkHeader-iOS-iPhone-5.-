/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class Account, AuthScheme, Connection;

@interface MFSASLAuthenticator : NSObject  {
    Connection *_connection;
    AuthScheme *_authScheme;
    Account *_account;
    int _authenticationState;
}


- (id)authScheme;
- (BOOL)supportsInitialClientResponse;
- (id)securityLayer;
- (BOOL)isUsingSSL;
- (BOOL)couldRetry;
- (void)setMissingPasswordError;
- (id)initWithAuthScheme:(id)arg1 account:(id)arg2 connection:(id)arg3;
- (id)saslName;
- (BOOL)base64EncodeResponseData;
- (void)setAuthenticationState:(int)arg1;
- (id)responseForServerData:(id)arg1;
- (BOOL)justSentPlainTextPassword;
- (int)authenticationState;
- (id)account;
- (void)dealloc;

@end
