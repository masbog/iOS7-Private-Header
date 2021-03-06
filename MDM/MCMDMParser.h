/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "MCTunnelParser.h"



@class MCMDMServer, NSString;



@interface MCMDMParser : MCTunnelParser

{

    _Bool _isChaperoned;

    MCMDMServer *_server;

    NSString *_managingProfileIdentifier;

}



- (void).cxx_destruct;

- (id)_allCommands;

- (id)_allSettingsItems;

- (id)_appStoreDisabledError;

- (_Bool)_appStoreEnabled;

- (id)_applyRedemptionCode:(id)arg1;

- (id)_certificateList:(id)arg1;

- (id)_clearPasscode:(id)arg1;

- (id)_deviceInformationWithRequest:(id)arg1 accessRights:(int)arg2;

- (id)_deviceLock:(id)arg1;

- (id)_eraseDevice:(id)arg1;

- (void)_installApplication:(id)arg1 completionBlock:(id)arg2;

- (id)_installProfile:(id)arg1 accessRights:(int)arg2;

- (id)_installProvisioningProfile:(id)arg1;

- (id)_installedApplicationList:(id)arg1;

- (id)_invalidRequestTypeError:(id)arg1;

- (void)_inviteToProgramRequest:(id)arg1 completionBlock:(id)arg2;

- (_Bool)_isProfileIdentifierManaged:(id)arg1;

- (_Bool)_isProvisioningProfileUUIDManaged:(id)arg1;

- (id)_managedApplicationAttributes:(id)arg1;

- (id)_managedApplicationConfiguration:(id)arg1;

- (id)_managedApplicationFeedback:(id)arg1;

- (id)_managedApplicationList:(id)arg1;

- (id)_notAuthorizedError;

- (id)_notManagedErrorAppID:(id)arg1;

- (void)_performQuery:(id)arg1 withResultDictionary:(id)arg2;

- (id)_performSetAppAttributes:(id)arg1 outAdditionalResponseKeys:(id *)arg2;

- (id)_performSetAppConfig:(id)arg1 outAdditionalResponseKeys:(id *)arg2;

- (id)_performSetDataRoaming:(id)arg1;

- (id)_performSetMDMOptions:(id)arg1;

- (id)_performSetOrganizationInfo:(id)arg1;

- (id)_performSetPersonalHotspot:(id)arg1;

- (id)_performSetVoiceRoaming:(id)arg1;

- (id)_performSetWallpaper:(id)arg1;

- (id)_performSetting:(id)arg1 outAdditionalResponseKeys:(id *)arg2 outRestartAppleTVApp:(_Bool *)arg3;

- (void)_processRequest:(id)arg1 withAccessRights:(int)arg2 completionBlock:(id)arg3;

- (id)_profileList:(id)arg1;

- (id)_provisioningProfileList:(id)arg1;

- (id)_removeApplication:(id)arg1;

- (id)_removeProfile:(id)arg1;

- (id)_removeProvisioningProfile:(id)arg1;

- (void)_requestMirroringRequest:(id)arg1 completionBlock:(id)arg2;

- (id)_requestUnlockToken:(id)arg1;

- (id)_restrictions:(id)arg1;

- (id)_securityInfo:(id)arg1;

- (id)_settings:(id)arg1 accessRights:(int)arg2;

- (void)_stopMirroringRequest:(id)arg1 completionBlock:(id)arg2;

- (id)_unavailableCommandsWhileInAppWhitelistModes;

- (id)_unavailableCommandsWhileLocked;

- (_Bool)_validateSetting:(id)arg1 accessRights:(int)arg2 outError:(id *)arg3;

- (id)approvedAppAttributesFromAttributes:(id)arg1;

- (id)initWithManagingProfileIdentifier:(id)arg1;

@property(readonly, nonatomic) _Bool isChaperoned; // @synthesize isChaperoned=_isChaperoned;

- (id)malformedRequestErrorResult;

- (id)managedFeedbackDictionaryForBundleID:(id)arg1 delete:(_Bool)arg2;

@property(retain, nonatomic) NSString *managingProfileIdentifier; // @synthesize managingProfileIdentifier=_managingProfileIdentifier;

- (void)processRequest:(id)arg1 withAccessRights:(int)arg2 completionBlock:(id)arg3;

@property(nonatomic) __weak MCMDMServer *server; // @synthesize server=_server;



@end


