/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "KNContentAwareMagicMoveSuperset.h"


#import "KNContentAwareTransitionAnimator.h"



__attribute__((visibility("hidden")))

@interface KNContentAwareImpliedMotionPath : KNContentAwareMagicMoveSuperset <KNContentAwareTransitionAnimator>

{

}



+ (int)animationCategory;

+ (id)animationFilter;

+ (id)animationName;

+ (id)defaultAttributes;

+ (unsigned long long)directionType;

+ (void)fillLocalizedDirectionMenu:(id)arg1 forType:(int)arg2;

+ (_Bool)isCharacterAwareEffect;

+ (id)localizedMenuString:(int)arg1;

+ (_Bool)requiresBullets;

+ (_Bool)requiresMagicMoveTextures;

+ (_Bool)requiresPerspectiveTransform;

+ (_Bool)requiresSingleTexture;

+ (id)supportedTypes;

+ (id)thumbnailImageNameForType:(int)arg1;

- (id)animationsWithContext:(id)arg1;

- (void)dealloc;



@end


