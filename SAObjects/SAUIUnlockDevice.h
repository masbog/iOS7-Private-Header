/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SABaseClientBoundCommand.h"


@class NSArray;



@interface SAUIUnlockDevice : SABaseClientBoundCommand

{

}



+ (id)unlockDevice;

+ (id)unlockDeviceWithDictionary:(id)arg1 context:(id)arg2;

@property(copy, nonatomic) NSArray *cancellationCommands;

- (id)encodedClassName;

@property(copy, nonatomic) NSArray *failureCommands;

- (id)groupIdentifier;

- (_Bool)requiresResponse;

@property(copy, nonatomic) NSArray *successCommands;



@end


