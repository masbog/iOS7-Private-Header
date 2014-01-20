/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class AXDialectMap, NSArray, NSString;



@interface AXLangMap : NSObject

{

    _Bool _western;

    _Bool _ambiguous;

    AXDialectMap *userLocaleDialect;

    NSArray *_dialects;

    NSString *_generalLanguageID;

    AXDialectMap *_userPreferredDialect;

    NSArray *_alternateLanguageIDs;

    NSArray *_associatedAmbiguousLanguages;

}



@property(retain, nonatomic) NSArray *alternateLanguageIDs; // @synthesize alternateLanguageIDs=_alternateLanguageIDs;

@property(retain, nonatomic) NSArray *associatedAmbiguousLanguages; // @synthesize associatedAmbiguousLanguages=_associatedAmbiguousLanguages;

- (id)basicDescription;

- (void)dealloc;

- (id)debugDescription;

@property(readonly, nonatomic) AXDialectMap *defaultDialect;

- (id)description;

- (id)dialectWithLocaleIdentifier:(id)arg1;

@property(retain, nonatomic) NSArray *dialects; // @synthesize dialects=_dialects;

@property(copy, nonatomic) NSString *generalLanguageID; // @synthesize generalLanguageID=_generalLanguageID;

- (id)initWithLanguageID:(id)arg1 isWestern:(_Bool)arg2 isAmbiguous:(_Bool)arg3 dialects:(id)arg4 alternateLanguageIDs:(id)arg5 associatedAmbiguousLanguages:(id)arg6;

@property(nonatomic, getter=isAmbiguous) _Bool ambiguous; // @synthesize ambiguous=_ambiguous;

@property(nonatomic, getter=isWestern) _Bool western; // @synthesize western=_western;

@property(nonatomic) AXDialectMap *userPreferredDialect; // @synthesize userPreferredDialect=_userPreferredDialect;

@property(readonly, nonatomic) AXDialectMap *userLocaleDialect; // @synthesize userLocaleDialect;



@end

