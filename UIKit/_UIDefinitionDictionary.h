/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class ASAsset, NSString;



__attribute__((visibility("hidden")))

@interface _UIDefinitionDictionary : NSObject

{

    struct __DCSDictionary *_dictionary;

    _Bool _activated;

    ASAsset *_rawAsset;

    NSString *_definitionLanguage;

}



- (id)_HTMLDefinitionForTerm:(id)arg1 type:(long long)arg2;

- (id)_attributedDefinitionForTerm:(id)arg1;

- (id)_definitionValueForTerm:(id)arg1;

- (id)_fullHTMLDefinitionForTerm:(id)arg1;

- (_Bool)_hasDefinitionForTerm:(id)arg1;

- (id)_shortHTMLDefinitionForTerm:(id)arg1;

@property _Bool activated; // @synthesize activated=_activated;

- (void)dealloc;

@property(readonly) NSString *definitionLanguage; // @synthesize definitionLanguage=_definitionLanguage;

- (id)description;

- (id)initWithAsset:(id)arg1;

@property(readonly) NSString *localizedDictionaryName;

@property(readonly) ASAsset *rawAsset; // @synthesize rawAsset=_rawAsset;



@end

