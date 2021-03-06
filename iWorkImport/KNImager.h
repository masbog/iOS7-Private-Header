/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSDImager.h"


#import "TSDConnectedInfoReplacing.h"



@class KNAbstractSlide;



__attribute__((visibility("hidden")))

@interface KNImager : TSDImager <TSDConnectedInfoReplacing>

{

    unsigned long long mSlideNumber;

    KNAbstractSlide *mSlide;

    _Bool mShouldShowInstructionalText;

}



- (id)infoToConnectToForConnectionLineConnectedToInfo:(id)arg1;

- (id)initWithDocumentRoot:(id)arg1;

@property(nonatomic) _Bool shouldShowInstructionalText; // @synthesize shouldShowInstructionalText=mShouldShowInstructionalText;

@property(nonatomic) KNAbstractSlide *slide; // @synthesize slide=mSlide;

@property(nonatomic) unsigned long long slideNumber; // @synthesize slideNumber=mSlideNumber;



@end


