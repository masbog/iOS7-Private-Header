/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "OADDash.h"


__attribute__((visibility("hidden")))

@interface OADPresetDash : OADDash

{

    unsigned char mType;

    unsigned int mIsTypeOverridden:1;

}



+ (id)defaultProperties;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (id)equivalentCustomDash;

- (unsigned long long)hash;

- (id)initWithDefaults;

- (_Bool)isEqual:(id)arg1;

- (_Bool)isTypeOverridden;

- (void)setType:(int)arg1;

- (int)type;



@end


