/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "AVAssetInspector.h"


@class NSArray, NSURL;



@interface AVFigAssetInspector : AVAssetInspector

{

    struct OpaqueFigAsset *_figAsset;

    struct OpaqueFigFormatReader *_formatReader;

    long long _formatReaderOnce;

    _Bool didCheckForSaveRestriction;

    _Bool hasSaveRestriction;

}



- (id)SHA1Digest;

@property(readonly, nonatomic) NSURL *URL;

@property(readonly, nonatomic, getter=_figAsset) struct OpaqueFigAsset *figAsset;

@property(readonly, nonatomic, getter=_formatReader) struct OpaqueFigFormatReader *formatReader;

- (_Bool)_hasQTSaveRestriction;

@property(readonly, nonatomic, getter=_isStreaming) _Bool streaming;

- (void *)_valueAsCFTypeForProperty:(struct __CFString *)arg1;

- (id)alternateTrackGroups;

- (id)availableMetadataFormats;

@property(readonly, nonatomic) NSArray *chapterGroupInfo;

- (id)commonMetadata;

- (id)creationDate;

- (void)dealloc;

@property(readonly, nonatomic) unsigned long long downloadToken;

- (CDStruct_1b6d18a9)duration;

- (void)finalize;

@property(readonly, nonatomic) _Bool hasProtectedContent;

- (unsigned long long)hash;

- (id)initWithFigAsset:(struct OpaqueFigAsset *)arg1;

- (_Bool)isComposable;

- (_Bool)isEqual:(id)arg1;

- (_Bool)isExportable;

- (_Bool)isReadable;

- (id)lyrics;

- (id)mediaSelectionGroups;

- (id)metadataForFormat:(id)arg1;

- (struct CGSize)naturalSize;

- (int)naturalTimeScale;

- (float)preferredRate;

- (float)preferredSoundCheckVolumeNormalization;

- (struct CGAffineTransform)preferredTransform;

- (float)preferredVolume;

- (_Bool)providesPreciseDurationAndTiming;

@property(readonly, nonatomic) NSURL *resolvedURL;

- (long long)trackCount;

- (id)trackReferences;



@end


