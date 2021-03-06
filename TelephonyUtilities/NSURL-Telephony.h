/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSURL.h"



@class NSString;



@interface NSURL (Telephony)

+ (id)URLWithTelephoneNumber:(id)arg1;

+ (id)URLWithTelephoneNumber:(id)arg1 addressBookUID:(int)arg2;

+ (id)URLWithTelephoneNumber:(id)arg1 addressBookUID:(int)arg2 forceAssist:(_Bool)arg3 suppressAssist:(_Bool)arg4 wasAssisted:(_Bool)arg5;

+ (id)URLWithTelephoneNumber:(id)arg1 promptUser:(_Bool)arg2;

- (id)_mobilePhonePathParameters;

- (id)_mobilePhoneQueryParameters;

- (id)_phoneNumberConvertNumbersToLatin:(_Bool)arg1;

@property(readonly) int addressBookUID;

@property(readonly) int callService;

@property(readonly) _Bool forceAssist;

- (id)formattedPhoneNumber;

- (_Bool)hasTelephonyScheme;

- (_Bool)isWebSafeTelephoneURL;

- (id)numberQualifiedForAddressBook;

@property(readonly) NSString *phoneNumber;

@property(readonly) _Bool suppressAssist;

- (id)telephonyParameterDictionary;

@property(readonly) _Bool wasAlreadyAssisted;

- (id)webSafeTelephoneURL;

@end


