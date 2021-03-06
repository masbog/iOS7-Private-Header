/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"



#import "SUCellConfigurationView.h"



@class NSMutableArray, SUCellConfiguration, UIBezierPath;



@interface SUTableCellContentView : UIView <SUCellConfigurationView>

{

    int _clipCorners;

    UIBezierPath *_clipPath;

    SUCellConfiguration *_configuration;

    unsigned int _drawAsDisabled:1;

    unsigned int _highlighted:1;

    unsigned int _highlightsOnlyContentView:1;

    UIView *_overlayView;

    NSMutableArray *_subviews;

    unsigned int _useSubviewLayout:1;

}



- (id)_clipPath;

- (id)_clippedImageForImage:(id)arg1;

- (void)_reloadSubviewAlphasAnimated:(_Bool)arg1;

- (void)_reloadSubviewsForConfiguration;

- (void)_removeSubviewsForConfiguration;

- (id)_scriptingInfo;

- (void)_startUsingSubviewLayout;

- (void)_stopUsingSubviewLayout;

- (void)_updateDisabledStyleForSubviews;

@property(nonatomic) int clipCorners; // @synthesize clipCorners=_clipCorners;

@property(retain, nonatomic) SUCellConfiguration *configuration; // @synthesize configuration=_configuration;

- (void)dealloc;

@property(nonatomic) _Bool drawAsDisabled;

- (void)drawRect:(struct CGRect)arg1;

@property(nonatomic) _Bool highlightsOnlyContentView;

@property(nonatomic, getter=isDeleteConfirmationVisible) _Bool deleteConfirmationVisisble;

@property(nonatomic, getter=isHighlighted) _Bool highlighted;

- (void)layoutSubviews;

- (void)reloadView;

- (void)setFrame:(struct CGRect)arg1;

@property(nonatomic) _Bool usesSubviews;

- (void)setUsesSubviews:(_Bool)arg1 animated:(_Bool)arg2;



@end


