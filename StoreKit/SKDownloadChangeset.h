/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"



@class NSError, NSNumber, NSURL;



@interface SKDownloadChangeset : NSObject <NSCopying>

{

    NSNumber *_contentLength;

    NSURL *_contentURL;

    NSNumber *_downloadID;

    NSNumber *_downloadState;

    NSError *_error;

    NSNumber *_progress;

    NSNumber *_timeRemaining;

}



+ (id)changesetWithDownloadID:(id)arg1 state:(long long)arg2;

@property(copy, nonatomic) NSNumber *contentLength; // @synthesize contentLength=_contentLength;

@property(copy, nonatomic) NSURL *contentURL; // @synthesize contentURL=_contentURL;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (id)copyXPCEncoding;

- (void)dealloc;

@property(copy, nonatomic) NSNumber *downloadID; // @synthesize downloadID=_downloadID;

@property(copy, nonatomic) NSNumber *downloadState; // @synthesize downloadState=_downloadState;

@property(copy, nonatomic) NSError *error; // @synthesize error=_error;

- (id)initWithXPCEncoding:(id)arg1;

@property(copy, nonatomic) NSNumber *progress; // @synthesize progress=_progress;

@property(copy, nonatomic) NSNumber *timeRemaining; // @synthesize timeRemaining=_timeRemaining;



@end


