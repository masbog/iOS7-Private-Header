/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSString.h"



@interface NSString (OCBStringAdditions)

+ (id)stringWithCsString:(const struct CsString *)arg1;

+ (id)stringWithOcText:(const struct OcText *)arg1;

- (void)copyToCsString:(struct CsString *)arg1;

- (void)copyToOcText:(struct OcText *)arg1;

- (void)copyToOcText:(struct OcText *)arg1 encoding:(int)arg2;

- (id)dataUsingWordEncoding:(int)arg1;

- (id)initWithCsString:(const struct CsString *)arg1;

- (id)initWithOcText:(const struct OcText *)arg1;

- (int)languageTypeAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;

@end

