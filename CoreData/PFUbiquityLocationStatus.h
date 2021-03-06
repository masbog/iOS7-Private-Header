/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSError, PFUbiquityLocation;



__attribute__((visibility("hidden")))

@interface PFUbiquityLocationStatus : NSObject

{

    _Bool _isLive;

    _Bool _isDeleted;

    _Bool _isDownloaded;

    _Bool _isDownloading;

    _Bool _isUploaded;

    _Bool _isUploading;

    _Bool _isImported;

    _Bool _isScheduled;

    _Bool _isExported;

    _Bool _isFailed;

    PFUbiquityLocation *_location;

    NSError *_error;

    unsigned long long _hash;

    long long _numNotifications;

}



- (void)checkFileURLState;

- (void)dealloc;

- (id)description;

- (void)encounteredError:(id)arg1;

@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;

- (_Bool)getBoolResourceFromURL:(id)arg1 forKey:(id)arg2;

- (unsigned long long)hash;

- (id)init;

- (id)initWithLocation:(id)arg1;

@property(readonly, nonatomic) _Bool isDeleted; // @synthesize isDeleted=_isDeleted;

@property(readonly, nonatomic) _Bool isDownloaded; // @synthesize isDownloaded=_isDownloaded;

@property(nonatomic) _Bool isDownloading; // @synthesize isDownloading=_isDownloading;

@property(readonly, nonatomic) _Bool isExported; // @synthesize isExported=_isExported;

@property(readonly, nonatomic) _Bool isFailed; // @synthesize isFailed=_isFailed;

@property(readonly, nonatomic) _Bool isImported; // @synthesize isImported=_isImported;

@property(readonly, nonatomic) _Bool isLive; // @synthesize isLive=_isLive;

@property(readonly, nonatomic) _Bool isScheduled; // @synthesize isScheduled=_isScheduled;

@property(readonly, nonatomic) _Bool isUploaded; // @synthesize isUploaded=_isUploaded;

@property(readonly, nonatomic) _Bool isUploading; // @synthesize isUploading=_isUploading;

@property(readonly, nonatomic) PFUbiquityLocation *location; // @synthesize location=_location;

- (void)logImportWasCancelled;

- (void)logWasExported;

- (void)logWasImported;

- (void)logWasScheduled;

@property(readonly, nonatomic) long long numNotifications; // @synthesize numNotifications=_numNotifications;

- (void)recoveredFromError;

- (void)statusDidChange;



@end


