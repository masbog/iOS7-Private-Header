/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class ASProtocolCapabilities;



@interface ASProtocol : NSObject

{

    ASProtocolCapabilities *_capabilities;

}



- (id)_initWithVersion:(id)arg1 capabilitiesVersion:(id)arg2;

- (id)_requestLinePrefixWithTask:(id)arg1;

- (void)_setCapabilitiesVersion:(id)arg1;

- (id)_usernameOnlyPortionOfUserString:(id)arg1;

- (id)addressBookConstraintsPath;

- (_Bool)allAttachmentsAreBase64ed;

- (_Bool)allowsReminderOnCompletedTasks;

- (id)calendarConstraintsPath;

- (_Bool)commandStringNeedsSaveInSent;

- (void)dealloc;

- (_Bool)fetchAttachmentsWithItemOperations;

- (_Bool)headerNeedsPolicyKey;

- (_Bool)headerNeedsProtocolVersion;

- (_Bool)headerNeedsUserAgent;

- (id)init;

- (id)initWithCachedVersion:(id)arg1;

- (id)initWithVersion:(id)arg1;

- (id)protocolVersion;

- (id)requestURLStringWithTask:(id)arg1;

- (_Bool)requiresExplicitlyFalseGetChanges;

- (_Bool)sendAttendeeRole;

- (_Bool)sendCalendarInfoInRecurrence;

- (_Bool)sendDeviceInfoOnProvision;

- (_Bool)sendEmailInWBXML;

- (_Bool)sendFirstDayOfWeekInRecurrence;

- (_Bool)sendUserAgentInDeviceInfo;

- (_Bool)serverCreatesEventChangesForInvitations;

- (_Bool)serverUpdatesAttendeeStatusOnEvents;

- (_Bool)shouldSendClassForFolderItemsSync;

- (_Bool)shouldSendFullContactInfo;

- (_Bool)shouldUseWBXMLProvisioning;

- (_Bool)supportsAttendeesInExceptions;

- (int)supportsEmailFlagging;

- (_Bool)supportsGALPhotos;

- (_Bool)supportsItemOperationsCommand;

- (int)supportsMailboxSearch;

- (_Bool)supportsNoteSyncing;

- (_Bool)supportsSettingsCommand;

- (_Bool)useBooleanFolderItemsSyncDeletesAsMoves;

- (_Bool)useEventIdsInMeetingResponse;

- (_Bool)useSmartMailTasks;

- (_Bool)usesAirSyncBaseNamespace;

- (_Bool)usesTopLevelStatusCodes;

- (_Bool)versionChangeRequiresAccountUpgrade:(id)arg1;



@end

