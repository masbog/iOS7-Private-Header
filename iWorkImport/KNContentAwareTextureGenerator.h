/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





__attribute__((visibility("hidden")))

@interface KNContentAwareTextureGenerator : NSObject

{

}



+ (void)addLayersWithTag:(id)arg1 plugin:(id)arg2 baseLayer:(id)arg3 backgroundLayer:(id)arg4 textures:(id)arg5;

+ (id)generateTexturesTagsAndAttributesForASV:(id)arg1 plugin:(id)arg2;

+ (void)p_addBlackBackgroundLayerWithTag:(id)arg1 asv:(id)arg2 plugin:(id)arg3 addToTextures:(id)arg4;

+ (void)p_addLayersForInfos:(id)arg1 tag:(id)arg2 isBackground:(_Bool)arg3 asv:(id)arg4 plugin:(id)arg5 addToTextures:(id)arg6 ignoreBuildVisibiility:(_Bool)arg7;

+ (void)p_generateLayersForTexture:(id)arg1 tag:(id)arg2 isBackground:(_Bool)arg3 isMagicMove:(_Bool)arg4 addToTextures:(id)arg5;

+ (void)p_preloadTexturesConcurrentlyWithInfos:(id)arg1 asv:(id)arg2 plugin:(id)arg3 ignoreBuildVisibiility:(_Bool)arg4;



@end

