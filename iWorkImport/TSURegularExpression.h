/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCoding.h"

#import "NSCopying.h"



@class NSString;



__attribute__((visibility("hidden")))

@interface TSURegularExpression : NSObject <NSCopying, NSCoding>

{

    NSString *_expressionString;

    void *_reserved;

}



+ (void)initialize;

+ (id)regularExpressionWithString:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (void)encodeWithCoder:(id)arg1;

- (id)expressionString;

- (const char *)getBytesForString:(id)arg1 lossByte:(unsigned char)arg2;

- (unsigned long long)hash;

- (id)init;

- (id)initWithCoder:(id)arg1;

- (id)initWithExpressionString:(id)arg1;

- (id)initWithExpressionString:(id)arg1 options:(unsigned int)arg2;

- (_Bool)isEqual:(id)arg1;

- (struct _NSRange)matchedRangeForCString:(const char *)arg1 range:(struct _NSRange)arg2 subexpressionRanges:(struct _NSRange *)arg3 count:(unsigned int)arg4;

- (struct _NSRange)matchedRangeForString:(id)arg1 range:(struct _NSRange)arg2 subexpressionRanges:(struct _NSRange *)arg3 count:(unsigned int)arg4;

- (unsigned long long)numberOfSubexpressions;



@end


