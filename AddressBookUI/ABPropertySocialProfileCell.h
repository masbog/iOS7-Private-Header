/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "ABPropertySimpleCell.h"


#import "ABPickerControllerDelegate.h"



@class CNSocialProfile, NSString;



@interface ABPropertySocialProfileCell : ABPropertySimpleCell <ABPickerControllerDelegate>

{

    NSString *_previousValue;

}



- (void)dealloc;

- (void)labelButtonClicked:(id)arg1;

- (void)picker:(id)arg1 didPickItem:(id)arg2;

- (void)pickerDidCancel:(id)arg1;

@property(readonly, nonatomic) CNSocialProfile *profile;

- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;

- (CDStruct_856ef1b3)suggestionsForString:(id)arg1 inputIndex:(unsigned int)arg2;



@end

