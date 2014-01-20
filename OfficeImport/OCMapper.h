/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class OCCancel, TSUTemporaryDirectory;



__attribute__((visibility("hidden")))

@interface OCMapper : NSObject

{

    OCCancel *mCancel;

    TSUTemporaryDirectory *mTemporaryDirectoryObject;

}



+ (id)mapperForCurrentThread;

- (void)cancel;

- (void)dealloc;

- (id)init;

- (_Bool)isCancelled;

- (void)quit;

- (void)setup;

- (void)teardown;

- (id)temporaryDirectoryPath;



@end

