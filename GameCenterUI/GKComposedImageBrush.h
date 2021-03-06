/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "GKImageBrush.h"


@class UIImage;



@interface GKComposedImageBrush : GKImageBrush

{

    UIImage *_maskImage;

    UIImage *_backgroundImage;

    UIImage *_overlayImage;

    struct UIEdgeInsets _maskInsets;

}



@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (void)drawInRect:(struct CGRect)arg1 withContext:(struct CGContext *)arg2 input:(id)arg3;

@property(retain, nonatomic) UIImage *maskImage; // @synthesize maskImage=_maskImage;

@property(nonatomic) struct UIEdgeInsets maskInsets; // @synthesize maskInsets=_maskInsets;

@property(retain, nonatomic) UIImage *overlayImage; // @synthesize overlayImage=_overlayImage;

- (double)scaleForInput:(id)arg1;

- (struct CGSize)sizeForInput:(id)arg1;



@end


