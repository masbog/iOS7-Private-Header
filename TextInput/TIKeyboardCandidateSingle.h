/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TIKeyboardCandidate.h"


@class NSString;



@interface TIKeyboardCandidateSingle : TIKeyboardCandidate

{

    NSString *_candidate;

    NSString *_input;

}



+ (id)candidateWithCandidate:(id)arg1 forInput:(id)arg2;

+ (id)candidateWithUnchangedInput:(id)arg1;

+ (_Bool)supportsSecureCoding;

+ (int)type;

@property(copy, nonatomic) NSString *candidate; // @synthesize candidate=_candidate;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (void)encodeWithCandidateResultSetCoder:(id)arg1;

- (void)encodeWithCoder:(id)arg1;

- (id)initWithCandidate:(id)arg1;

- (id)initWithCandidate:(id)arg1 forInput:(id)arg2;

- (id)initWithCandidateResultSetCoder:(id)arg1;

- (id)initWithCoder:(id)arg1;

- (id)initWithUnchangedInput:(id)arg1;

@property(copy, nonatomic) NSString *input; // @synthesize input=_input;



@end

