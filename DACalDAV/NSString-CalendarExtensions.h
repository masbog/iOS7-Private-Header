/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSString.h"



@interface NSString (CalendarExtensions)

+ (id)stringWithFileSystemRepresentation:(const char *)arg1;

- (_Bool)hasPrefixCaseInsensitive:(id)arg1;

- (id)quote;

- (id)safeFilename;

- (id)searchAndReplaceString:(id)arg1 withString:(id)arg2;

- (id)trimChar:(unsigned short)arg1;

- (id)trimCommas;

- (id)trimFinalChar:(unsigned short)arg1;

- (id)trimFinalComma;

- (id)trimFirstChar:(unsigned short)arg1;

- (id)trimFirstComma;

- (id)trimWhiteSpace;

- (id)unquote;

@end

