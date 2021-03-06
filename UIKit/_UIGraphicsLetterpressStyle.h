/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"



@class UIColor;



@interface _UIGraphicsLetterpressStyle : NSObject <NSCopying>

{

    int innerShadowBlendMode;

    int outerShadowBlendMode;

    UIColor *embossHighlightColor;

    UIColor *embossShadowColor;

    double embossSize;

    UIColor *innerShadowColor;

    double innerShadowBlur;

    UIColor *outerShadowColor;

    double outerShadowBlur;

    UIColor *topGradientColor;

    UIColor *bottomGradientColor;

    double innerOpacity;

    struct CGPoint innerShadowOffset;

    struct CGPoint outerShadowOffset;

}



+ (id)defaultLetterpressStyle;

+ (id)old2xLetterpressStyle;

@property(retain, nonatomic) UIColor *bottomGradientColor; // @synthesize bottomGradientColor;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

@property(readonly, nonatomic) struct UIEdgeInsets edgeInsets;

@property(retain, nonatomic) UIColor *embossHighlightColor; // @synthesize embossHighlightColor;

@property(retain, nonatomic) UIColor *embossShadowColor; // @synthesize embossShadowColor;

@property(nonatomic) double embossSize; // @synthesize embossSize;

@property(nonatomic) double innerOpacity; // @synthesize innerOpacity;

@property(nonatomic) int innerShadowBlendMode; // @synthesize innerShadowBlendMode;

@property(nonatomic) double innerShadowBlur; // @synthesize innerShadowBlur;

@property(retain, nonatomic) UIColor *innerShadowColor; // @synthesize innerShadowColor;

@property(nonatomic) struct CGPoint innerShadowOffset; // @synthesize innerShadowOffset;

- (_Bool)isEqual:(id)arg1;

@property(nonatomic) int outerShadowBlendMode; // @synthesize outerShadowBlendMode;

@property(nonatomic) double outerShadowBlur; // @synthesize outerShadowBlur;

@property(retain, nonatomic) UIColor *outerShadowColor; // @synthesize outerShadowColor;

@property(nonatomic) struct CGPoint outerShadowOffset; // @synthesize outerShadowOffset;

@property(retain, nonatomic) UIColor *topGradientColor; // @synthesize topGradientColor;



@end


