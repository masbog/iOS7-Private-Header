/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"



@class NSMutableArray, NSNumberFormatter, NSOperationQueue, NSTimer, SKUIClientContext, SKUICountdown, SKUICountdownViewTimerTarget, UIImage, UIImageView, UILabel;



@interface SKUICountdownView : UIView

{

    SKUIClientContext *_clientContext;

    SKUICountdown *_countdown;

    NSTimer *_timer;

    SKUICountdownViewTimerTarget *_timerTarget;

    UILabel *_dateDescriptionLabelDay;

    UILabel *_dateDescriptionLabelHour;

    UILabel *_dateDescriptionLabelMinute;

    UILabel *_dateDescriptionLabelSecond;

    UILabel *_dateLabelDay;

    UILabel *_dateLabelHour;

    UILabel *_dateLabelMinute;

    UILabel *_dateLabelSecond;

    NSMutableArray *_dateFlapLabels;

    NSMutableArray *_numberFlapLabels;

    NSMutableArray *_numberSeparatorLabels;

    UIImageView *_imageView;

    UILabel *_numberLabel;

    NSNumberFormatter *_numberFormatter;

    NSOperationQueue *_operationQueue;

    double _factor;

}



- (void).cxx_destruct;

- (void)_currentRemainingDays:(long long *)arg1 hours:(long long *)arg2 minutes:(long long *)arg3 seconds:(long long *)arg4;

- (long long)_currentValue;

- (id)_newDateDescriptionLabel;

- (id)_newDateLabel;

- (id)_newFlapLabelWithPosition:(long long)arg1;

- (id)_newNumberSeparatorLabel;

- (void)_reload;

- (void)_reloadDateDescriptions:(_Bool)arg1;

- (void)_reloadFontSizes;

- (void)_reloadNumber;

- (void)_reloadNumberFlapped;

- (void)_reloadTime;

- (void)_reloadTimeFlapped;

- (void)_setCountdownWithResponse:(id)arg1 error:(id)arg2;

@property(retain, nonatomic) UIImage *backgroundImage;

@property(readonly, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;

@property(readonly, nonatomic) SKUICountdown *countdown; // @synthesize countdown=_countdown;

- (void)dealloc;

- (id)initWithCountdown:(id)arg1 clientContext:(id)arg2;

- (void)layoutSubviews;

- (void)setFrame:(struct CGRect)arg1;

- (void)start;

- (void)stop;



@end


