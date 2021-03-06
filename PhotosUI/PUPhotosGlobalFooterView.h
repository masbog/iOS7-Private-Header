/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UICollectionReusableView.h"



@class NSString, PLSyncProgressView, UILabel;



@interface PUPhotosGlobalFooterView : UICollectionReusableView

{

    unsigned long long _imageCount;

    unsigned long long _videoCount;

    unsigned long long _otherCount;

    unsigned long long _pendingCount;

    int _importOperation;

    UILabel *_titleLabel;

    UILabel *_subtitleLabel;

    PLSyncProgressView *_syncProgressView;

    long long _style;

    NSString *_subtitle;

}



- (void).cxx_destruct;

- (void)_updateSubviews;

- (void)layoutSubviews;

- (void)setImageCount:(unsigned long long)arg1 videoCount:(unsigned long long)arg2 otherCount:(unsigned long long)arg3;

- (void)setPendingCount:(unsigned long long)arg1 importOperation:(int)arg2;

@property(nonatomic) long long style; // @synthesize style=_style;

@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;



@end


