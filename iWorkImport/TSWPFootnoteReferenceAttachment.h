/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSWPTextualAttachment.h"


@class NSString, TSWPStorage;



__attribute__((visibility("hidden")))

@interface TSWPFootnoteReferenceAttachment : TSWPTextualAttachment

{

    TSWPStorage *_containedStorage;

    NSString *_customMarkString;

}



- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;

- (void)applyMark;

- (void)checkDebug;

@property(retain, nonatomic) TSWPStorage *containedStorage; // @synthesize containedStorage=_containedStorage;

- (id)copyWithContext:(id)arg1;

@property(retain, nonatomic) NSString *customMarkString; // @synthesize customMarkString=_customMarkString;

- (void)dealloc;

- (int)elementKind;

- (unsigned long long)findCharIndex;

- (id)initFromUnarchiver:(id)arg1;

- (id)initWithContext:(id)arg1;

- (id)initWithContext:(id)arg1 wpStorage:(id)arg2;

- (_Bool)isEqual:(id)arg1;

- (_Bool)isSearchable;

- (void)saveToArchiver:(id)arg1;

- (void)setContainedStorageParentInfoToStorage:(id)arg1;

- (void)setParentStorage:(id)arg1;

- (_Bool)shouldArchiveStringEquivalent;

- (id)stringEquivalent;

- (const struct TextualAttachmentArchive *)textualAttachmentArchiveFromUnarchiver:(id)arg1;

- (void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2;

- (void)wasRemovedFromDocumentRoot:(id)arg1;

- (void)willBeAddedToDocumentRoot:(id)arg1 context:(id)arg2;

- (void)willBeRemovedFromDocumentRoot:(id)arg1;



@end


