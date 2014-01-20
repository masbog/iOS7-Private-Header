/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class TSTCellStyle, TSWPParagraphStyle;



__attribute__((visibility("hidden")))

@interface TSTTableHeaderInfo : NSObject

{

    TSTCellStyle *mCellStyle;

    TSWPParagraphStyle *mTextStyle;

    double mSize;

    unsigned char mHidingState;

    unsigned short mNumberOfCells;

}



@property(retain, nonatomic) TSTCellStyle *cellStyle; // @synthesize cellStyle=mCellStyle;

- (void)dealloc;

- (id)description;

@property(nonatomic) unsigned char hidingState; // @synthesize hidingState=mHidingState;

@property(nonatomic) unsigned short numberOfCells; // @synthesize numberOfCells=mNumberOfCells;

@property(nonatomic) double size; // @synthesize size=mSize;

@property(retain, nonatomic) TSWPParagraphStyle *textStyle; // @synthesize textStyle=mTextStyle;



@end

