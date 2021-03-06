/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "STSStgObject.h"


__attribute__((visibility("hidden")))

@interface STStream : STSStgObject

{

    struct _Stream *m_pCStream;

}



@property(readonly, nonatomic) struct _Stream *cStream; // @synthesize cStream=m_pCStream;

- (void)close;

- (void)dealloc;

- (id)getInfo;

- (unsigned int)getPos;

- (id)initWithCStream:(struct _Stream *)arg1;

- (unsigned char)readBool8;

- (id)readBytes:(unsigned int)arg1;

- (unsigned short)readChar16;

- (BOOL)readChar8;

- (float)readFloat32;

- (double)readFloat64;

- (short)readSInt16;

- (int)readSInt32;

- (id)readString16:(unsigned int)arg1;

- (unsigned short)readUInt16;

- (unsigned int)readUInt32;

- (unsigned long long)readUInt64;

- (unsigned char)readUInt8;

- (void)releaseCStream;

- (void)seek:(int)arg1 fromOrigin:(int)arg2;

- (void)setClass:(CDStruct_214f2dba)arg1;

- (void)writeBool8:(unsigned char)arg1;

- (void)writeBytes:(id)arg1;

- (void)writeChar16:(unsigned short)arg1;

- (void)writeChar8:(BOOL)arg1;

- (void)writeFloat32:(float)arg1;

- (void)writeFloat64:(double)arg1;

- (void)writeSInt16:(short)arg1;

- (void)writeSInt32:(int)arg1;

- (void)writeString16:(id)arg1;

- (void)writeString16NoTerminator:(id)arg1;

- (void)writeUInt16:(unsigned short)arg1;

- (void)writeUInt32:(unsigned int)arg1;

- (void)writeUInt8:(unsigned char)arg1;



@end


