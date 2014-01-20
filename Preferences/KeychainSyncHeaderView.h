/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"



#import "PSHeaderFooterView.h"



@class UILabel;



@interface KeychainSyncHeaderView : UIView <PSHeaderFooterView>

{

    UILabel *_titleLabel;

    UILabel *_detailLabel;

    _Bool _usesCompactLayout;

}



- (void)dealloc;

- (id)initWithSpecifier:(id)arg1;

- (void)layoutSubviews;

- (double)preferredHeightForWidth:(double)arg1 inTableView:(id)arg2;

- (void)setDetailText:(id)arg1;

- (void)setTitleText:(id)arg1;

@property(nonatomic) _Bool usesCompactLayout; // @synthesize usesCompactLayout=_usesCompactLayout;



@end

