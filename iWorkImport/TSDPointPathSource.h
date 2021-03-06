/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSDPathSource.h"


#import "TSDMixing.h"

#import "TSDSmartPathSource.h"



__attribute__((visibility("hidden")))

@interface TSDPointPathSource : TSDPathSource <TSDMixing, TSDSmartPathSource>

{

    int mType;

    struct CGPoint mPoint;

    struct CGSize mNaturalSize;

}



+ (id)doubleArrowWithPoint:(struct CGPoint)arg1 naturalSize:(struct CGSize)arg2;

+ (id)leftSingleArrowWithPoint:(struct CGPoint)arg1 naturalSize:(struct CGSize)arg2;

+ (id)pathSourceWithType:(int)arg1 point:(struct CGPoint)arg2 naturalSize:(struct CGSize)arg3;

+ (id)plusWithPoint:(struct CGPoint)arg1 naturalSize:(struct CGSize)arg2;

+ (id)rightSingleArrowWithPoint:(struct CGPoint)arg1 naturalSize:(struct CGSize)arg2;

+ (id)starWithPoint:(struct CGPoint)arg1 naturalSize:(struct CGSize)arg2;

- (id)bezierPathWithoutFlips;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (id)description;

- (struct CGPoint)getControlKnobPosition:(unsigned long long)arg1;

- (id)getFeedbackStringForKnob:(unsigned long long)arg1;

- (unsigned long long)hash;

- (id)init;

- (id)initWithArchive:(const struct PathSourceArchive *)arg1;

- (id)initWithType:(int)arg1 point:(struct CGPoint)arg2 naturalSize:(struct CGSize)arg3;

- (_Bool)isCircular;

- (_Bool)isEqual:(id)arg1;

- (_Bool)isRectangular;

- (struct CGPoint)maxPointValue;

- (struct CGPoint)minPointValue;

- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;

- (long long)mixingTypeWithObject:(id)arg1;

@property struct CGSize naturalSize; // @synthesize naturalSize=mNaturalSize;

- (struct CGPath *)newFeedbackPathForKnob:(unsigned long long)arg1;

@property(readonly) unsigned long long numberOfControlKnobs;

- (struct CGPoint)p_getControlKnobPointForArrow;

- (struct CGPoint)p_getControlKnobPointForPlus;

- (struct CGPoint)p_getControlKnobPointForStarInnerRadius;

- (struct CGPoint)p_getControlKnobPointForStarPoints;

- (_Bool)p_isFlippedDoubleArrow;

- (_Bool)p_isRightFacingArrow;

- (struct CGPath *)p_newArrowPath;

- (struct CGPath *)p_newPlusPath;

- (struct CGPath *)p_newStarPath;

- (void)p_setControlKnobPointForArrow:(struct CGPoint)arg1;

- (void)p_setControlKnobPointForPlus:(struct CGPoint)arg1;

- (void)p_setControlKnobPointForStarInnerRadius:(struct CGPoint)arg1;

- (void)p_setControlKnobPointForStarPoints:(struct CGPoint)arg1;

@property struct CGPoint point; // @synthesize point=mPoint;

- (void)saveToArchive:(struct PathSourceArchive *)arg1;

- (struct CGSize)scaleFactorForInscribedRectangle;

- (void)scaleToNaturalSize:(struct CGSize)arg1;

- (void)setControlKnobPosition:(unsigned long long)arg1 toPoint:(struct CGPoint)arg2;

- (void)setPointValue:(id)arg1;

@property int type; // @synthesize type=mType;

- (id)valueForSetSelector:(SEL)arg1;



@end


