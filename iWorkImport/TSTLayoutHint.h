/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "TSDHint.h"



@class NSNumber, TSTLayout;



__attribute__((visibility("hidden")))

@interface TSTLayoutHint : NSObject <TSDHint>

{

    _Bool mIsValid;

    _Bool mHorizontal;

    CDStruct_5f1f7aa9 mCellRange;

    CDStruct_0441cfb5 mCacheHintID;

    NSNumber *mPartitioningPass;

    unsigned int mPartitionPosition;

    struct CGSize mMaximumSize;

    struct CGSize mEffectiveSize;

    TSTLayout *mLayout;

}



+ (Class)archivedHintClass;

- (id).cxx_construct;

@property(nonatomic) CDStruct_0441cfb5 cacheHintID; // @synthesize cacheHintID=mCacheHintID;

@property(nonatomic) CDStruct_5f1f7aa9 cellRange; // @synthesize cellRange=mCellRange;

- (void)dealloc;

- (id)description;

@property(nonatomic) struct CGSize effectiveSize; // @synthesize effectiveSize=mEffectiveSize;

- (id)firstChildHint;

@property(nonatomic) _Bool horizontal; // @synthesize horizontal=mHorizontal;

- (id)init;

- (id)initWithArchive:(const struct LayoutHintArchive *)arg1;

- (id)initWithRange:(CDStruct_5f1f7aa9)arg1 hintId:(CDStruct_0441cfb5)arg2 partitionPosition:(unsigned int)arg3 maximumSize:(struct CGSize)arg4 effectiveSize:(struct CGSize)arg5 layout:(id)arg6 validity:(_Bool)arg7 horizontal:(_Bool)arg8;

- (void)invalidate;

- (_Bool)isFirstHint;

@property(nonatomic) _Bool isValid; // @synthesize isValid=mIsValid;

- (id)lastChildHint;

@property(nonatomic) TSTLayout *layout; // @synthesize layout=mLayout;

@property(nonatomic) struct CGSize maximumSize; // @synthesize maximumSize=mMaximumSize;

- (void)offsetByDelta:(int)arg1;

- (_Bool)overlapsWithSelection:(id)arg1;

@property(nonatomic) unsigned int partitionPosition; // @synthesize partitionPosition=mPartitionPosition;

@property(retain, nonatomic) NSNumber *partitioningPass; // @synthesize partitioningPass=mPartitioningPass;

- (oneway void)release;

- (void)saveToArchive:(struct LayoutHintArchive *)arg1;



@end

