/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "PINView.h"


@class PSPasscodeField;



@interface NumericPINView : PINView

{

    PSPasscodeField *_passcodeField;

}



- (void)appendString:(id)arg1;

- (void)deleteLastCharacter;

- (void)hidePasscodeField:(_Bool)arg1;

- (id)initWithFrame:(struct CGRect)arg1;

- (void)layoutSubviews;

- (void)setStringValue:(id)arg1;

- (id)stringValue;



@end


