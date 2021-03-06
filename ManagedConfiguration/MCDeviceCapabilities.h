/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@interface MCDeviceCapabilities : NSObject

{

    _Bool _supportsBlockLevelEncryption;

    _Bool _supportsFileLevelEncryption;

}



+ (id)currentDevice;

- (_Bool)_mediaDiskIsEncrypted;

- (id)init;

@property(readonly, nonatomic) _Bool supportsBlockLevelEncryption; // @synthesize supportsBlockLevelEncryption=_supportsBlockLevelEncryption;

@property(readonly, nonatomic) _Bool supportsFileLevelEncryption; // @synthesize supportsFileLevelEncryption=_supportsFileLevelEncryption;

- (_Bool)validateCapabilitiesRequiredByRestrictions:(id)arg1 localizedIncompatibilityMessage:(id)arg2 outError:(id *)arg3;



@end


