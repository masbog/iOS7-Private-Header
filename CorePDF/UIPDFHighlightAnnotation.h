/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIPDFMarkupAnnotation.h"


@interface UIPDFHighlightAnnotation : UIPDFMarkupAnnotation

{

    struct CGColor *_highLightColor;

}



- (int)annotationType;

- (void)drawInContext:(struct CGContext *)arg1;

- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;

- (void)drawLayerRotated:(id)arg1 inContext:(struct CGContext *)arg2 selection:(id)arg3 rectangles:(unsigned long long)arg4;

- (void)drawLayerUpright:(id)arg1 inContext:(struct CGContext *)arg2 selection:(id)arg3 rectangles:(unsigned long long)arg4;

- (_Bool)recognizeGestures;

- (Class)viewClass;



@end


