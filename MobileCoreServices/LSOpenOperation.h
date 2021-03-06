/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSOperation.h"



@class NSDictionary, NSString, NSURL;



__attribute__((visibility("hidden")))

@interface LSOpenOperation : NSOperation

{

    _Bool _executing;

    _Bool _finished;

    _Bool _sourceIsManaged;

    NSURL *_resourceURL;

    NSString *_applicationIdentifier;

    NSString *_documentIdentifier;

    id _userInfoPlist;

    NSDictionary *_options;

    id _delegate;

    int _result;

}



- (void)completeOperation;

- (void)dealloc;

- (_Bool)didSucceed;

- (id)initForOpeningResource:(id)arg1 usingApplication:(id)arg2 uniqueDocumentIdentifier:(id)arg3 sourceIsManaged:(_Bool)arg4 userInfo:(id)arg5 options:(id)arg6 delegate:(id)arg7;

- (_Bool)isConcurrent;

- (_Bool)isExecuting;

- (_Bool)isFinished;

- (void)main;

- (void)start;



@end


