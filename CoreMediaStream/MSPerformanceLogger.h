/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "MSASModelBase.h"


@interface MSPerformanceLogger : MSASModelBase

{

}



+ (void)nukeCompletionBlock:(id)arg1;

+ (id)sharedLogger;

- (void)_logSqliteErrorLine:(int)arg1;

- (void)dbQueueDiscardOperation:(id)arg1 itemGUID:(id)arg2;

- (_Bool)dbQueueUpgradeFromDatabaseVersion:(int)arg1 currentVersion:(int)arg2;

- (void)discardOperation:(id)arg1 itemGUID:(id)arg2;

- (id)init;

- (void)startOperation:(id)arg1 itemGUID:(id)arg2;

- (void)stopOperation:(id)arg1 itemGUID:(id)arg2;

- (void)summarizeOperation:(id)arg1 itemGUID:(id)arg2 formatBlock:(id)arg3;



@end


