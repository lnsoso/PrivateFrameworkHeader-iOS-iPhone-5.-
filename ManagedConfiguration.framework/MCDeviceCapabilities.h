/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCDeviceCapabilities : NSObject  {
    BOOL _supportsBlockLevelEncryption;
    BOOL _supportsFileLevelEncryption;
}

@property(readonly) BOOL supportsFileLevelEncryption;
@property(readonly) BOOL supportsBlockLevelEncryption;

+ (id)currentDevice;

- (BOOL)supportsFileLevelEncryption;
- (BOOL)supportsBlockLevelEncryption;
- (BOOL)_mediaDiskIsEncrypted;
- (BOOL)validateCapabilitiesRequiredByRestrictions:(id)arg1 localizedIncompatibilityMessage:(id)arg2 outError:(id*)arg3;
- (id)init;

@end
