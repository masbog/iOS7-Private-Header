/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"



@class ABSteadfastLineView, UIColor;



@interface ABDividerView : UIView

{

    _Bool _isVertical;

    UIColor *_defaultColor;

    UIColor *_shadowColor;

    ABSteadfastLineView *_line;

    ABSteadfastLineView *_shadowLine;

    _Bool _disappearsOnHighlight;

}



- (void)dealloc;

@property(retain, nonatomic) UIColor *defaultColor; // @synthesize defaultColor=_defaultColor;

@property(nonatomic) _Bool disappearsOnHighlight; // @synthesize disappearsOnHighlight=_disappearsOnHighlight;

- (id)initWithFrame:(struct CGRect)arg1;

@property(nonatomic, getter=isVertical) _Bool vertical; // @synthesize vertical=_isVertical;

- (void)layoutSubviews;

- (void)setHighlighted:(_Bool)arg1;

@property(retain, nonatomic) UIColor *shadowColor; // @synthesize shadowColor=_shadowColor;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;



@end


