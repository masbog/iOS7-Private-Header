/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIButton.h"



@interface SKUILinkButton : UIButton

{

    long long _arrowStyle;

}



+ (id)buttonWithArrowStyle:(long long)arg1;

- (double)_linkImagePaddingLeft;

- (void)_reloadIcons;

@property(readonly, nonatomic) long long arrowStyle; // @synthesize arrowStyle=_arrowStyle;

- (id)initWithArrowStyle:(long long)arg1;

- (void)layoutSubviews;

- (void)setTitleColor:(id)arg1 forState:(unsigned long long)arg2;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

- (void)sizeToFit;

- (void)tintColorDidChange;



@end


