/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSCH3DContext.h"


#import "TSCHUnretainedParent.h"



@class NSIndexSet, NSMutableDictionary, NSMutableIndexSet, NSMutableSet, NSSet, TSCH3DGLVersion;



__attribute__((visibility("hidden")))

@interface TSCH3DGLContext : TSCH3DContext <TSCHUnretainedParent>

{

    struct RenderState mState;

    NSMutableDictionary *mExtensionsNamesDict;

    NSMutableDictionary *mVirtualScreenToCapabilitiesMap;

    NSIndexSet *mEnabledArrays;

    struct BufferStates mBufferStates;

    struct GLSingleState mBufferArraysStates;

    struct TextureUnitStates mTextureUnitStates;

    box_0260e9b3 mViewport;

    NSMutableIndexSet *mChangeMask;

    _Bool mIsSharable;

    NSMutableSet *mChildrenContexts;

    TSCH3DGLContext *mSharedContext;

    TSCH3DGLVersion *mVersion;

}



- (id).cxx_construct;

- (void)activateTextureUnit:(unsigned long long)arg1;

- (void)addChangeFlag:(int)arg1;

- (void)addShaderChangeFlag;

- (void)bindTextureHandleValue:(unsigned int)arg1 is3DTexture:(_Bool)arg2;

- (struct GLSingleState *)bufferArraysStates;

- (struct BufferStates *)bufferStates;

- (id)capabilitiesForExtensions:(id)arg1;

@property(readonly, nonatomic) NSSet *childrenContexts;

- (void)clearParent;

- (void)dealloc;

- (id)description;

- (void)enableSharing;

- (void)enableVertexArrays:(id)arg1;

- (_Bool)hasChangeFlag:(int)arg1;

- (id)init;

- (id)initWithSharedContext:(id)arg1;

- (void)invalidateTextureHandleValue:(unsigned int)arg1;

@property(readonly, nonatomic) _Bool isSharable; // @synthesize isSharable=mIsSharable;

- (void)p_addChildContext:(id)arg1;

- (void)p_cacheCapabilitiesForKey:(id)arg1;

- (id)p_keyForScreen:(int)arg1;

- (void)p_removeChildContext:(id)arg1;

- (void)removeChangeFlag:(int)arg1;

- (void)setEnabledVertexArrays:(id)arg1;

- (void)setState:(const struct RenderState *)arg1;

- (id)sharedContext;

- (id)sharedID;

- (struct RenderState)state;

- (_Bool)supportsCapability:(id)arg1;

@property(readonly, nonatomic) TSCH3DGLVersion *version; // @synthesize version=mVersion;

- (void)viewport:(box_0260e9b3 *)arg1;



@end

