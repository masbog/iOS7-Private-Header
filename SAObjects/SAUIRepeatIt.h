/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SABaseClientBoundCommand.h"


@class NSString;



@interface SAUIRepeatIt : SABaseClientBoundCommand

{

}



+ (id)repeatIt;

+ (id)repeatItWithDictionary:(id)arg1 context:(id)arg2;

@property(copy, nonatomic) NSString *contingency;

- (id)encodedClassName;

- (id)groupIdentifier;

- (_Bool)requiresResponse;



@end

