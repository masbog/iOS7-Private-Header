/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@protocol ACDAccountStoreProtocol <NSObject>

- (void)accessKeysForAccountType:(id)arg1 handler:(id)arg2;

- (void)accountExistsWithDescription:(id)arg1 completion:(id)arg2;

- (void)accountIdentifiersEnabledForDataclass:(id)arg1 handler:(id)arg2;

- (void)accountIdentifiersEnabledForDataclasses:(id)arg1 withAccountTypeIdentifiers:(id)arg2 completion:(id)arg3;

- (void)accountIdentifiersEnabledToSyncDataclass:(id)arg1 handler:(id)arg2;

- (void)accountTypeWithIdentifier:(id)arg1 handler:(id)arg2;

- (void)accountTypesWithHandler:(id)arg1;

- (void)accountWithIdentifier:(id)arg1 handler:(id)arg2;

- (void)accountsWithAccountType:(id)arg1 handler:(id)arg2;

- (void)accountsWithHandler:(id)arg1;

- (void)addClientToken:(id)arg1 forAccountIdentifier:(id)arg2 completion:(id)arg3;

- (void)appPermissionsForAccountType:(id)arg1 withHandler:(id)arg2;

- (void)canSaveAccount:(id)arg1 completion:(id)arg2;

- (void)childAccountsForAccountWithIdentifier:(id)arg1 handler:(id)arg2;

- (void)childAccountsWithAccountTypeIdentifier:(id)arg1 parentAccountIdentifier:(id)arg2 handler:(id)arg3;

- (void)clearAllPermissionsGrantedForAccountType:(id)arg1 withHandler:(id)arg2;

- (void)clearGrantedPermissionsForAccountType:(id)arg1 withHandler:(id)arg2;

- (void)clientTokenForAccountIdentifier:(id)arg1 completion:(id)arg2;

- (void)credentialForAccountWithIdentifier:(id)arg1 bundleID:(id)arg2 handler:(id)arg3;

- (void)credentialForAccountWithIdentifier:(id)arg1 handler:(id)arg2;

- (void)dataclassActionsForAccountDeletion:(id)arg1 completion:(id)arg2;

- (void)dataclassActionsForAccountSave:(id)arg1 completion:(id)arg2;

- (void)dataclassesWithHandler:(id)arg1;

- (void)displayAccountTypeForAccountWithIdentifier:(id)arg1 handler:(id)arg2;

- (void)enabledDataclassesForAccountWithIdentifier:(id)arg1 handler:(id)arg2;

- (void)grantedPermissionsForAccountType:(id)arg1 withHandler:(id)arg2;

- (void)handleURL:(id)arg1;

- (void)insertAccountType:(id)arg1 withHandler:(id)arg2;

- (void)isPerformingDataclassActionsForAccount:(id)arg1 completion:(id)arg2;

- (void)isPushSupportedForAccount:(id)arg1 completion:(id)arg2;

- (void)isTetheredSyncingEnabledForDataclass:(id)arg1 completion:(id)arg2;

- (void)kerberosAccountsForDomainFromURL:(id)arg1 completion:(id)arg2;

- (void)openAuthenticationURL:(id)arg1 forAccount:(id)arg2 shouldConfirm:(_Bool)arg3 completion:(id)arg4;

- (void)parentAccountForAccountWithIdentifier:(id)arg1 handler:(id)arg2;

- (void)permissionForAccountType:(id)arg1 withHandler:(id)arg2;

- (void)provisionedDataclassesForAccountWithIdentifier:(id)arg1 handler:(id)arg2;

- (void)removeAccount:(id)arg1 withDataclassActions:(id)arg2 completion:(id)arg3;

- (void)removeAccountType:(id)arg1 withHandler:(id)arg2;

- (void)renewCredentialsForAccount:(id)arg1 options:(id)arg2 completion:(id)arg3;

- (void)requestAccessForAccountTypeWithIdentifier:(id)arg1 options:(id)arg2 withHandler:(id)arg3;

- (void)saveAccount:(id)arg1 verify:(_Bool)arg2 dataclassActions:(id)arg3 completion:(id)arg4;

- (void)saveAccount:(id)arg1 withHandler:(id)arg2;

- (void)setClientBundleID:(id)arg1 withHandler:(id)arg2;

- (void)setNotificationsEnabledNum:(_Bool)arg1;

- (void)setPermissionGranted:(id)arg1 forBundleID:(id)arg2 onAccountType:(id)arg3 withHandler:(id)arg4;

- (void)supportedDataclassesForAccountType:(id)arg1 handler:(id)arg2;

- (void)syncableDataclassesForAccountType:(id)arg1 handler:(id)arg2;

- (void)tetheredSyncSourceTypeForDataclass:(id)arg1 completion:(id)arg2;

- (void)typeIdentifierForDomain:(id)arg1 withHandler:(id)arg2;

- (void)updateExistenceCacheOfAccountWithTypeIdentifier:(id)arg1 withHandler:(id)arg2;

- (void)verifyCredentialsForAccount:(id)arg1 saveWhenAuthorized:(_Bool)arg2 withHandler:(id)arg3;

@end


