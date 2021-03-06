/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "AceObject.h"


#import "SAGKStructuredAnswer.h"



@class NSArray, NSString, NSURL;



@interface SAGKSummaryStructuredAnswer : AceObject <SAGKStructuredAnswer>

{

}



+ (id)summaryStructuredAnswer;

+ (id)summaryStructuredAnswerWithDictionary:(id)arg1 context:(id)arg2;

@property(copy, nonatomic) NSArray *answerPropertyGroups;

@property(copy, nonatomic) NSString *category; // @dynamic category;

- (id)encodedClassName;

- (id)groupIdentifier;

@property(copy, nonatomic) NSURL *image;

@property(copy, nonatomic) NSString *imageCaption;

@property(copy, nonatomic) NSString *text;

@property(copy, nonatomic) NSString *title;

@property(copy, nonatomic) NSString *titleAnnotation;



@end


