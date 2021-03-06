/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"



@interface CUIColor : NSObject <NSCopying>

{

    struct CGColor *_cgColor;

}



+ (id)colorWithCGColor:(struct CGColor *)arg1;

+ (id)colorWithCIColor:(id)arg1;

@property(readonly, nonatomic) struct CGColor *CGColor; // @synthesize CGColor=_cgColor;

- (id)colorUsingCGColorSpace:(struct CGColorSpace *)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (id)description;

- (id)initWithCGColor:(struct CGColor *)arg1;

- (id)initWithCIColor:(id)arg1;



@end


