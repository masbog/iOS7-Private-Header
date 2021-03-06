/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSString, OADTableBackground, OADTablePartStyle;



__attribute__((visibility("hidden")))

@interface OADTableStyle : NSObject

{

    NSString *mName;

    NSString *mId;

    OADTableBackground *mBackground;

    OADTablePartStyle *mWholeTableStyle;

    OADTablePartStyle *mBand1HorzStyle;

    OADTablePartStyle *mBand2HorzStyle;

    OADTablePartStyle *mBand1VertStyle;

    OADTablePartStyle *mBand2VertStyle;

    OADTablePartStyle *mFirstRowStyle;

    OADTablePartStyle *mFirstColumnStyle;

    OADTablePartStyle *mLastRowStyle;

    OADTablePartStyle *mLastColumnStyle;

    OADTablePartStyle *mNorthEastStyle;

    OADTablePartStyle *mNorthWestStyle;

    OADTablePartStyle *mSouthEastStyle;

    OADTablePartStyle *mSouthWestStyle;

}



- (id)background;

- (id)band1HorzStyle;

- (id)band1VertStyle;

- (id)band2HorzStyle;

- (id)band2VertStyle;

- (void)dealloc;

- (id)firstColumnStyle;

- (id)firstRowStyle;

- (id)id;

- (id)lastColumnStyle;

- (id)lastRowStyle;

- (id)name;

- (id)northEastStyle;

- (id)northWestStyle;

- (id)partStyle:(int)arg1;

- (void)setBackground:(id)arg1;

- (void)setBand1HorzStyle:(id)arg1;

- (void)setBand1VertStyle:(id)arg1;

- (void)setBand2HorzStyle:(id)arg1;

- (void)setBand2VertStyle:(id)arg1;

- (void)setFirstColumnStyle:(id)arg1;

- (void)setFirstRowStyle:(id)arg1;

- (void)setId:(id)arg1;

- (void)setLastColumnStyle:(id)arg1;

- (void)setLastRowStyle:(id)arg1;

- (void)setName:(id)arg1;

- (void)setNorthEastStyle:(id)arg1;

- (void)setNorthWestStyle:(id)arg1;

- (void)setSouthEastStyle:(id)arg1;

- (void)setSouthWestStyle:(id)arg1;

- (void)setWholeTableStyle:(id)arg1;

- (id)southEastStyle;

- (id)southWestStyle;

- (id)wholeTableStyle;



@end


