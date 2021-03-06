/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "MFLibraryStore.h"



@class MFPOP3Connection;



@interface MFLibraryPOPStore : MFLibraryStore

{

    MFPOP3Connection *_connection;

}



- (id)_fetchBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id *)arg2 downloadIfNecessary:(_Bool)arg3 partial:(_Bool *)arg4;

- (id)_fetchHeaderDataForMessage:(id)arg1 downloadIfNecessary:(_Bool)arg2;

- (void)_handleFlagsChangedForMessages:(id)arg1 flags:(id)arg2 oldFlagsByMessage:(id)arg3;

- (id)bodyDataForMessage:(id)arg1 isComplete:(_Bool *)arg2 isPartial:(_Bool *)arg3 downloadIfNecessary:(_Bool)arg4;

- (id)dataForMimePart:(id)arg1 inRange:(struct _NSRange)arg2 isComplete:(_Bool *)arg3 downloadIfNecessary:(_Bool)arg4 didDownload:(_Bool *)arg5;

- (void)dealloc;

- (long long)fetchNumMessages:(unsigned long long)arg1 preservingUID:(id)arg2 options:(unsigned long long)arg3;

- (id)fullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id *)arg2 isComplete:(_Bool *)arg3 downloadIfNecessary:(_Bool)arg4 usePartDatas:(_Bool)arg5;

- (id)initWithMailboxUid:(id)arg1 readOnly:(_Bool)arg2;

- (id)messageForRemoteID:(id)arg1;

- (void)messagesWereDeleted:(id)arg1;

- (void)openSynchronouslyUpdatingMetadata:(_Bool)arg1;

- (void)purgeMessages:(id)arg1;

- (unsigned long long)serverMessageCount;

- (unsigned long long)serverUnreadOnlyOnServerCount;

- (void)setServerMessageCount:(unsigned long long)arg1;

- (void)setServerUnreadOnlyOnServerCount:(unsigned long long)arg1;



@end


