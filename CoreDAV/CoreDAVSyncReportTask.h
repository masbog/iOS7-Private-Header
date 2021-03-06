/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "CoreDAVPropertyFindBaseTask.h"


@class NSString;



@interface CoreDAVSyncReportTask : CoreDAVPropertyFindBaseTask

{

    NSString *_previousSyncToken;

    NSString *_nextSyncToken;

    _Bool _moreToSync;

    _Bool _wasInvalidSyncToken;

}



- (id)copyDefaultParserForContentType:(id)arg1;

- (void)dealloc;

- (id)description;

- (void)finishCoreDAVTaskWithError:(id)arg1;

- (id)httpMethod;

- (id)initWithPropertiesToFind:(id)arg1 atURL:(id)arg2 withDepth:(int)arg3 previousSyncToken:(id)arg4;

@property(readonly) _Bool moreToSync; // @synthesize moreToSync=_moreToSync;

@property(readonly) NSString *nextSyncToken; // @synthesize nextSyncToken=_nextSyncToken;

- (id)notFoundHREFs;

- (id)requestBody;

@property(readonly) _Bool wasInvalidSyncToken; // @synthesize wasInvalidSyncToken=_wasInvalidSyncToken;



@end


