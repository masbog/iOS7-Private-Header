/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "MFComposeHeaderView.h"


@class UISegmentedControl;



@interface MFComposeImageSizeView : MFComposeHeaderView

{

    UISegmentedControl *_segmentedControl;

}



- (unsigned long long)_segmentIndexForScale:(unsigned long long)arg1;

- (void)dealloc;

- (id)initWithFrame:(struct CGRect)arg1;

- (void)layoutSubviews;

- (void)segmentedControlChanged;

- (void)setScale:(unsigned long long)arg1;

- (void)setSizeDescription:(id)arg1 forScale:(unsigned long long)arg2;



@end


