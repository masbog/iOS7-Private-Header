/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class UIResponder;



__attribute__((visibility("hidden")))

@interface _UITouchForwardingRecipient : NSObject

{

    UIResponder *fromResponder;

    UIResponder *responder;

    long long recordedPhase;

    long long autocompletedPhase;

}



@property(nonatomic) long long autocompletedPhase; // @synthesize autocompletedPhase;

- (id)description;

@property(nonatomic) UIResponder *fromResponder; // @synthesize fromResponder;

- (id)initWithResponder:(id)arg1 fromResponder:(id)arg2;

@property(nonatomic) long long recordedPhase; // @synthesize recordedPhase;

@property(nonatomic) UIResponder *responder; // @synthesize responder;



@end

