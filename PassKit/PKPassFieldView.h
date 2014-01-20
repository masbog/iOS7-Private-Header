/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"



@class PKDiffView, PKPassColorProfile, PKPassField, PKPassFieldTemplate, UILabel;



@interface PKPassFieldView : UIView

{

    _Bool _needsRecalculation;

    struct CGSize _cachedSize;

    long long _background;

    PKPassField *_field;

    PKPassFieldTemplate *_fieldTemplate;

    PKPassColorProfile *_colorProfile;

    PKDiffView *_diffView;

    UILabel *_labelLabel;

    UILabel *_valueLabel;

}



+ (id)newViewForField:(id)arg1 fieldTemplate:(id)arg2;

- (id)_labelAttributedStringForColorProfile:(id)arg1 background:(long long)arg2;

- (struct CGSize)_resizeMultiLineValueFontForAvailableSize:(struct CGSize)arg1;

- (_Bool)_shouldDisplayLabel;

- (id)_textAttributesWithTextColor:(id)arg1 alignment:(long long)arg2 lineBreakMode:(long long)arg3;

- (id)_valueAttributedStringForColorProfile:(id)arg1 background:(long long)arg2;

@property(retain, nonatomic) PKPassColorProfile *colorProfile; // @synthesize colorProfile=_colorProfile;

- (void)dealloc;

@property(retain, nonatomic) PKDiffView *diffView; // @synthesize diffView=_diffView;

@property(retain, nonatomic) PKPassField *field; // @synthesize field=_field;

@property(retain, nonatomic) PKPassFieldTemplate *fieldTemplate; // @synthesize fieldTemplate=_fieldTemplate;

- (_Bool)fitsInSize:(struct CGSize)arg1;

- (id)initWithField:(id)arg1 fieldTemplate:(id)arg2;

@property(readonly, nonatomic) UILabel *labelLabel; // @synthesize labelLabel=_labelLabel;

- (void)layoutSubviews;

- (void)presentDiff:(id)arg1 inView:(id)arg2 completion:(id)arg3;

- (void)setColorProfile:(id)arg1 background:(long long)arg2;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@property(readonly, nonatomic) UILabel *valueLabel; // @synthesize valueLabel=_valueLabel;



@end

