/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSMutableArray, _UIFlowLayoutSection;



__attribute__((visibility("hidden")))

@interface _UIFlowLayoutRow : NSObject

{

    NSMutableArray *_items;

    _UIFlowLayoutSection *_section;

    struct CGSize _rowSize;

    struct CGRect _rowFrame;

    long long _index;

    _Bool _isValid;

    _Bool _complete;

    int _verticalAlignement;

    int _horizontalAlignement;

    _Bool _fixedItemSize;

}



- (void)addItem:(id)arg1;

@property(nonatomic) _Bool complete; // @synthesize complete=_complete;

- (id)copyFromSection:(id)arg1;

- (void)dealloc;

@property(nonatomic) _Bool fixedItemSize; // @synthesize fixedItemSize=_fixedItemSize;

@property(nonatomic) long long index; // @synthesize index=_index;

- (id)init;

- (void)invalidate;

@property(readonly, nonatomic) NSMutableArray *items; // @synthesize items=_items;

- (void)layoutRow;

@property(nonatomic) struct CGRect rowFrame; // @synthesize rowFrame=_rowFrame;

@property(nonatomic) struct CGSize rowSize; // @synthesize rowSize=_rowSize;

@property(nonatomic) _UIFlowLayoutSection *section; // @synthesize section=_section;

- (id)snapshot;



@end


