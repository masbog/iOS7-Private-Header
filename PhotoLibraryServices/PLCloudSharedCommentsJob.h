/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "PLCloudSharingJob.h"


@class NSArray, NSDictionary, NSString;



@interface PLCloudSharedCommentsJob : PLCloudSharingJob

{

    long long _jobType;

    NSArray *_msASComments;

    NSString *_commentGUID;

    NSString *_assetGUID;

    NSString *_albumGUID;

    NSDictionary *_mstreamdInfoDictionary;

}



+ (void)deleteSharedCommentFromServer:(id)arg1;

+ (id)directoryPathForInFlightComments:(_Bool)arg1;

+ (void)locallyProcessAddedComments:(id)arg1 assetGUID:(id)arg2 albumGUID:(id)arg3 info:(id)arg4;

+ (void)locallyProcessDeletedComments:(id)arg1 info:(id)arg2;

+ (void)publishCommentToServer:(id)arg1;

@property(retain, nonatomic) NSString *albumGUID; // @synthesize albumGUID=_albumGUID;

@property(retain, nonatomic) NSString *assetGUID; // @synthesize assetGUID=_assetGUID;

@property(retain, nonatomic) NSString *commentGUID; // @synthesize commentGUID=_commentGUID;

- (long long)daemonOperation;

- (void)dealloc;

- (id)description;

- (void)encodeToXPCObject:(id)arg1;

- (void)executeDeleteCommentFromServer;

- (void)executeProcessServerNotificationOfCommentChanges;

- (void)executePublishCommentToServer;

- (id)initFromXPCObject:(id)arg1;

@property(nonatomic) long long jobType; // @synthesize jobType=_jobType;

@property(retain, nonatomic) NSArray *msASComments; // @synthesize msASComments=_msASComments;

@property(retain, nonatomic) NSDictionary *mstreamdInfoDictionary; // @synthesize mstreamdInfoDictionary=_mstreamdInfoDictionary;

- (void)run;

- (void)runDaemonSide;

- (_Bool)shouldArchiveXPCToDisk;



@end

