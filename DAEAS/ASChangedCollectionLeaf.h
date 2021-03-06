/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "ASItem.h"


#import "NSCoding.h"



@class NSDictionary, NSNumber, NSString;



@interface ASChangedCollectionLeaf : ASItem <NSCoding>

{

    int _changeType;

    NSString *_serverID;

    NSString *_clientID;

    NSNumber *_status;

    _Bool _isResponse;

    _Bool _validateOpeningTokens;

    NSDictionary *_applicationData;

}



+ (_Bool)acceptsTopLevelLeaves;

+ (id)asParseRules;

+ (_Bool)frontingBasicTypes;

+ (_Bool)notifyOfUnknownTokens;

+ (_Bool)parsingLeafNode;

+ (_Bool)parsingWithSubItems;

- (void)appendActiveSyncDataForTask:(id)arg1 toWBXMLData:(id)arg2;

@property(retain) NSDictionary *applicationData; // @synthesize applicationData=_applicationData;

@property int changeType; // @synthesize changeType=_changeType;

@property(copy) NSString *clientID; // @synthesize clientID=_clientID;

- (int)dataclass;

- (void)dealloc;

- (void)encodeWithCoder:(id)arg1;

- (id)init;

- (id)initWithCoder:(id)arg1;

- (_Bool)isResponse;

- (void)loadClientIDs;

- (void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6;

@property(retain) NSString *serverID; // @synthesize serverID=_serverID;

@property(copy) NSNumber *status; // @synthesize status=_status;

- (void)setValidateOpeningTokens:(_Bool)arg1;



@end


