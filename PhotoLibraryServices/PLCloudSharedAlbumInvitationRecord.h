/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "PLManagedObject.h"


@class NSArray, NSDate, NSNumber, NSString, PLCloudSharedAlbum;



@interface PLCloudSharedAlbumInvitationRecord : PLManagedObject

{

}



+ (id)cloudSharedAlbumInvitationRecordWithGUID:(id)arg1 inLibrary:(id)arg2;

+ (id)cloudSharedAlbumInvitationRecordsWithAlbumGUID:(id)arg1 inLibrary:(id)arg2;

+ (id)entityInManagedObjectContext:(id)arg1;

+ (id)entityName;

+ (id)insertNewInvitationRecordIntoAlbum:(id)arg1 withFirstName:(id)arg2 lastName:(id)arg3 fullName:(id)arg4 emails:(id)arg5 phones:(id)arg6 inLibrary:(id)arg7;

- (void)awakeFromInsert;

- (void)dealloc;

- (void)delete;

- (id)init;

- (id)invitationStateDescription;

- (id)inviteeDisplayNameIncludingEmail:(_Bool)arg1;

@property(readonly, nonatomic) NSArray *inviteeEmails;

@property(readonly, nonatomic) NSArray *inviteePhones;

- (void)prepareForDeletion;

- (void)setInviteeEmails:(id)arg1 phones:(id)arg2;

- (void)willSave;



// Remaining properties

@property(retain, nonatomic) PLCloudSharedAlbum *album; // @dynamic album;

@property(retain, nonatomic) NSString *albumGUID; // @dynamic albumGUID;

@property(retain, nonatomic) NSString *cloudGUID; // @dynamic cloudGUID;

@property(retain, nonatomic) NSNumber *invitationState; // @dynamic invitationState;

@property(retain, nonatomic) NSNumber *invitationStateLocal; // @dynamic invitationStateLocal;

@property(nonatomic) NSNumber *inviteeEmailKey; // @dynamic inviteeEmailKey;

@property(retain, nonatomic) NSString *inviteeFirstName; // @dynamic inviteeFirstName;

@property(retain, nonatomic) NSString *inviteeFullName; // @dynamic inviteeFullName;

@property(nonatomic) NSString *inviteeHashedPersonID; // @dynamic inviteeHashedPersonID;

@property(retain, nonatomic) NSString *inviteeLastName; // @dynamic inviteeLastName;

@property(retain, nonatomic) NSDate *inviteeSubscriptionDate; // @dynamic inviteeSubscriptionDate;

@property(nonatomic) _Bool isMine; // @dynamic isMine;



@end


