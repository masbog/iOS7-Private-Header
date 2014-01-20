/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "OCDReader.h"


@class OCCDecryptor;



__attribute__((visibility("hidden")))

@interface OCDEncryptedReader : OCDReader

{

    OCCDecryptor *mDecryptor;

}



- (void)dealloc;

@property(readonly, nonatomic) OCCDecryptor *decryptor; // @synthesize decryptor=mDecryptor;

- (void)restartReaderToUseDecryptedDocument;

- (_Bool)retainDecryptorWithErrorCode:(int *)arg1;

- (void)useUnencryptedDocument;



@end

