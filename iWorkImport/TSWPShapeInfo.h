/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSDShapeInfo.h"


#import "TSDContainerInfo.h"

#import "TSDMixing.h"

#import "TSDSelectionStatisticsContributor.h"

#import "TSWPStorageParent.h"



@class NSObject<TSDContainerInfo>, NSString, TSDInfoGeometry, TSPObject<TSDOwningAttachment>, TSWPColumns, TSWPPadding, TSWPShapeStyle, TSWPStorage;



__attribute__((visibility("hidden")))

@interface TSWPShapeInfo : TSDShapeInfo <TSDMixing, TSDContainerInfo, TSWPStorageParent, TSDSelectionStatisticsContributor>

{

    TSWPStorage *_containedStorage;

}



+ (void)setDefaultInstructionalText:(id)arg1;

- (void)acceptVisitor:(id)arg1;

- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;

- (_Bool)autoListRecognition;

- (_Bool)autoListTermination;

- (struct CGPoint)autosizePositionOffset;

- (struct CGPoint)autosizePositionOffsetForGeometry:(id)arg1 size:(struct CGSize)arg2;

- (struct CGAffineTransform)autosizedTransformForInfoGeometry:(id)arg1 size:(struct CGSize)arg2;

- (id)buildImageTitle;

- (id)childEnumerator;

- (id)childInfos;

- (unsigned long long)chunkCountForTextureDeliveryStyle:(unsigned long long)arg1 byGlyphStyle:(int)arg2 animationFilter:(id)arg3;

@property(retain, nonatomic) TSWPColumns *columns;

- (id)commandForPasteStyleWithContext:(id)arg1 pasteboardStyles:(id)arg2;

- (id)commandForTransformingByTransform:(struct CGAffineTransform)arg1 context:(id)arg2 transformedObjects:(id)arg3 inBounds:(struct CGRect)arg4;

@property(retain, nonatomic) TSWPStorage *containedStorage; // @synthesize containedStorage=_containedStorage;

- (id)containedText;

- (id)containedTextForRange:(struct _NSRange)arg1;

@property(nonatomic) long long contentWritingDirection;

- (id)copyWithContext:(id)arg1;

- (void)dealloc;

@property(readonly, nonatomic) _Bool displaysInstructionalText;

- (Class)editorClass;

- (void)fixPositionOfImportedAutosizedShape;

- (id)initFromUnarchiver:(id)arg1;

- (id)initWithContext:(id)arg1 geometry:(id)arg2;

- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 pathSource:(id)arg4;

- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 pathSource:(id)arg4 wpStorage:(id)arg5;

- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 wpStorage:(id)arg4;

@property(readonly, nonatomic) NSString *instructionalText;

@property(readonly, nonatomic) _Bool isBulleted;

- (Class)layoutClass;

- (void)loadFromArchive:(const struct ShapeInfoArchive *)arg1 unarchiver:(id)arg2;

- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;

- (long long)mixingTypeWithObject:(id)arg1;

- (double)pOffsetForParagraphAlignment:(struct CGSize)arg1;

- (double)pOffsetForVerticalAlignment:(struct CGSize)arg1;

- (unsigned long long)p_chunkCountForByBullet;

- (unsigned long long)p_chunkCountForByBulletGroup;

- (id)p_containedTextForDeliveryStyle:(unsigned long long)arg1 chunkIndex:(unsigned long long)arg2;

- (id)p_defaultBuildChunkTitle;

- (_Bool)p_hasContentForRange:(struct _NSRange)arg1;

- (_Bool)p_hasListLabelOrContentForParagraphIndex:(unsigned long long)arg1;

@property(retain, nonatomic) TSWPPadding *padding;

- (id)presetKind;

- (void)processSelectedStoragesWithStatisticsController:(id)arg1;

- (id)propertyMapForNewPreset;

- (Class)repClass;

- (void)saveToArchive:(struct ShapeInfoArchive *)arg1 archiver:(id)arg2;

- (void)saveToArchiver:(id)arg1;

@property(nonatomic) _Bool shrinkTextToFit;

@property(nonatomic) _Bool textIsVertical;

@property(nonatomic) int verticalAlignment;

- (_Bool)shouldHideEmptyBullets;

- (Class)styleClass;

- (id)styleIdentifierTemplateForNewPreset;

- (id)stylesForCopyStyle;

- (_Bool)supportsShrinkTextToFit;

- (_Bool)supportsTextInset;

- (id)textureDeliveryStylesLocalized:(_Bool)arg1 animationFilter:(id)arg2;

- (id)titleForBuildChunk:(id)arg1;

- (struct CGPoint)transformableObjectAnchorPoint;

@property(readonly, nonatomic) TSWPShapeStyle *tswpShapeStyle;

- (void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2;

- (void)wasRemovedFromDocumentRoot:(id)arg1;

- (void)willBeAddedToDocumentRoot:(id)arg1 context:(id)arg2;

- (void)willBeRemovedFromDocumentRoot:(id)arg1;



// Remaining properties

@property(readonly, nonatomic, getter=isAnchoredToText) _Bool anchoredToText; // @dynamic anchoredToText;

@property(readonly, nonatomic, getter=isAttachedToBodyText) _Bool attachedToBodyText;

@property(readonly, nonatomic, getter=isFloatingAboveText) _Bool floatingAboveText; // @dynamic floatingAboveText;

@property(copy, nonatomic) TSDInfoGeometry *geometry; // @dynamic geometry;

@property(readonly, nonatomic, getter=isInlineWithText) _Bool inlineWithText; // @dynamic inlineWithText;

@property(nonatomic) _Bool matchesObjectPlaceholderGeometry;

@property(nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment; // @dynamic owningAttachment;

@property(readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse; // @dynamic owningAttachmentNoRecurse;

@property(nonatomic) NSObject<TSDContainerInfo> *parentInfo; // @dynamic parentInfo;



@end


