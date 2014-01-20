/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SBUIPasscodeEntryField.h"


@class NSMutableCharacterSet;



@interface SBUINumericPasscodeEntryFieldBase : SBUIPasscodeEntryField

{

    NSMutableCharacterSet *_numericTrimmingSet;

    unsigned long long _maxNumbersAllowed;

    _Bool _allowsNewlineAcceptance;

    _Bool _autoAcceptWhenMaxNumbersMet;

}



- (void)_appendString:(id)arg1;

- (void)_deleteLastCharacter;

- (_Bool)_hasMaxDigitsSpecified;

- (void)_reallyAppendString:(id)arg1;

@property(nonatomic) _Bool allowsNewlineAcceptance; // @synthesize allowsNewlineAcceptance=_allowsNewlineAcceptance;

@property(nonatomic) _Bool autoAcceptWhenMaxNumbersMet; // @synthesize autoAcceptWhenMaxNumbersMet=_autoAcceptWhenMaxNumbersMet;

- (void)dealloc;

- (id)initWithDefaultSize;

@property(nonatomic) unsigned long long maxNumbersAllowed; // @synthesize maxNumbersAllowed=_maxNumbersAllowed;

- (_Bool)resignFirstResponder;

- (_Bool)shouldInsertPasscodeText:(id)arg1;



@end

