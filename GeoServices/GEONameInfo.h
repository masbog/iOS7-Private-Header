/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "PBCodable.h"



#import "NSCopying.h"



@class NSString;



@interface GEONameInfo : PBCodable <NSCopying>

{

    NSString *_name;

    NSString *_phoneticName;

    int _phoneticType;

    NSString *_shield;

    int _shieldType;

    int _signType;

    struct {

        unsigned int phoneticType:1;

        unsigned int shieldType:1;

        unsigned int signType:1;

    } _has;

}



- (void)copyTo:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (id)description;

- (id)dictionaryRepresentation;

@property(readonly, nonatomic) _Bool hasName;

@property(readonly, nonatomic) _Bool hasPhoneticName;

@property(nonatomic) _Bool hasPhoneticType;

@property(readonly, nonatomic) _Bool hasShield;

@property(nonatomic) _Bool hasShieldType;

@property(nonatomic) _Bool hasSignType;

- (unsigned long long)hash;

- (_Bool)isEqual:(id)arg1;

@property(retain, nonatomic) NSString *name; // @synthesize name=_name;

@property(retain, nonatomic) NSString *phoneticName; // @synthesize phoneticName=_phoneticName;

@property(nonatomic) int phoneticType; // @synthesize phoneticType=_phoneticType;

- (_Bool)readFrom:(id)arg1;

@property(retain, nonatomic) NSString *shield; // @synthesize shield=_shield;

@property(nonatomic) int shieldType; // @synthesize shieldType=_shieldType;

@property(nonatomic) int signType; // @synthesize signType=_signType;

- (void)writeTo:(id)arg1;



@end


