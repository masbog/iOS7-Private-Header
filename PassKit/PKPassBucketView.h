/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"



@class NSArray, NSMutableArray, PKPass, PKPassBucketTemplate, PKPassColorProfile;



@interface PKPassBucketView : UIView

{

    NSMutableArray *_fieldViews;

    long long _background;

    PKPass *_pass;

    PKPassBucketTemplate *_bucketTemplate;

    PKPassColorProfile *_colorProfile;

    NSArray *_bucket;

}



- (long long)_backgroundForBucketTemplate:(id)arg1;

- (void)_measureAndFitEvenlySizedSubviews;

- (void)_measureAndFitVariablySizedSubviews;

- (void)_updateSubviews;

@property(retain, nonatomic) NSArray *bucket; // @synthesize bucket=_bucket;

@property(retain, nonatomic) PKPassBucketTemplate *bucketTemplate; // @synthesize bucketTemplate=_bucketTemplate;

@property(retain, nonatomic) PKPassColorProfile *colorProfile; // @synthesize colorProfile=_colorProfile;

- (void)dealloc;

- (void)layoutSubviews;

@property(retain, nonatomic) PKPass *pass; // @synthesize pass=_pass;

- (void)presentDiff:(id)arg1 inView:(id)arg2 completion:(id)arg3;



@end


