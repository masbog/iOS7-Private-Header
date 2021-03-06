/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIColor.h"


__attribute__((visibility("hidden")))

@interface UICGColor : UIColor

{

    struct CGColor *cachedColor;

}



- (struct CGColor *)CGColor;

- (_Bool)_getRed:(double *)arg1 green:(double *)arg2 blue:(double *)arg3 alpha:(double *)arg4;

- (_Bool)_getWhite:(double *)arg1 alpha:(double *)arg2;

- (double)alphaComponent;

- (id)colorSpaceName;

- (id)colorWithAlphaComponent:(double)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (id)description;

- (unsigned long long)hash;

- (id)initWithCGColor:(struct CGColor *)arg1;

- (_Bool)isEqual:(id)arg1;

- (_Bool)isPatternColor;

- (void)set;

- (void)setFill;

- (void)setStroke;



@end


