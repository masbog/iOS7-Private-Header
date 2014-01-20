/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "OISFUDataRepresentation.h"


#import "SFUZipArchiveDataRepresentation.h"



@class SFUFileDataRepresentation;



__attribute__((visibility("hidden")))

@interface OISFUZipArchiveFileDataRepresentation : OISFUDataRepresentation <SFUZipArchiveDataRepresentation>

{

    SFUFileDataRepresentation *mFileRepresentation;

    int mFd;

}



- (id)bufferedInputStreamWithOffset:(long long)arg1 length:(long long)arg2;

- (long long)dataLength;

- (void)dealloc;

- (_Bool)hasSameLocationAs:(id)arg1;

- (id)initWithPath:(id)arg1;

- (id)inputStream;

- (id)inputStreamWithOffset:(long long)arg1 length:(long long)arg2;

- (_Bool)isEncrypted;

- (_Bool)isReadable;

- (id)path;



@end

