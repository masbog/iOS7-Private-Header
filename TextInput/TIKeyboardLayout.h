/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSSecureCoding.h"



@interface TIKeyboardLayout : NSObject <NSSecureCoding>

{

    unsigned long long _count;

    struct _ShortRect *_frames;

    unsigned long long _framesCapacity;

    char *_strings;

    unsigned long long _stringsSize;

    unsigned long long _stringsCapacity;

}



+ (_Bool)supportsSecureCoding;

- (void)addKeyWithString:(id)arg1 frame:(struct CGRect)arg2;

- (void)dealloc;

- (void)encodeWithCoder:(id)arg1;

- (void)ensureFrameCapacity:(unsigned long long)arg1;

- (void)ensureStringCapacity:(unsigned long long)arg1;

- (void)enumerateKeysUsingBlock:(id)arg1;

- (id)initWithCapacity:(unsigned long long)arg1;

- (id)initWithCoder:(id)arg1;

- (_Bool)isEqual:(id)arg1;



@end


