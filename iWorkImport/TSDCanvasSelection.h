/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSKSelection.h"


#import "NSCopying.h"

#import "TSDCanvasSelection.h"



@class NSSet, TSDDrawableInfo<TSDContainerInfo>;



__attribute__((visibility("hidden")))

@interface TSDCanvasSelection : TSKSelection <TSDCanvasSelection, NSCopying>

{

    NSSet *mInfos;

    TSDDrawableInfo<TSDContainerInfo> *mContainer;

}



+ (Class)archivedSelectionClass;

+ (id)emptySelection;

@property(readonly, nonatomic) TSDDrawableInfo<TSDContainerInfo> *container; // @synthesize container=mContainer;

- (_Bool)containsKindOfClass:(Class)arg1;

- (_Bool)containsUnlockedKindOfClass:(Class)arg1;

- (id)copyExcludingInfo:(id)arg1;

- (id)copyIncludingInfo:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

@property(readonly, nonatomic) unsigned long long infoCount;

@property(readonly, nonatomic) NSSet *infos;

- (id)infosOfClass:(Class)arg1;

- (id)initWithArchive:(const struct CanvasSelectionArchive *)arg1 unarchiver:(id)arg2;

- (id)initWithInfos:(id)arg1;

- (id)initWithInfos:(id)arg1 andContainer:(id)arg2;

@property(readonly, nonatomic) _Bool isEmpty;

- (_Bool)isEqual:(id)arg1;

- (void)saveToArchive:(struct CanvasSelectionArchive *)arg1 archiver:(id)arg2;

@property(readonly, nonatomic) unsigned long long unlockedInfoCount;

@property(readonly, nonatomic) NSSet *unlockedInfos;



@end

