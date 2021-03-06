/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSSStyle.h"


__attribute__((visibility("hidden")))

@interface TSTTableStyle : TSSStyle

{

}



+ (void)initDefaultPropertyMap:(id)arg1 presetIndex:(unsigned long long)arg2 colors:(id)arg3 alternate:(int)arg4;

+ (void)initDefaultStrokePresetListInPropertyMap:(id)arg1 presetIndex:(unsigned long long)arg2 colors:(id)arg3;

+ (id)nonEmphasisTableProperties;

+ (id)properties;

+ (id)propertiesAllowingNSNull;

+ (id)styleIDForPreset:(unsigned long long)arg1;

- (void)dealloc;

- (id)exteriorStrokeForStrokePreset:(unsigned long long)arg1;

- (id)horizontalStrokeForStrokePreset:(unsigned long long)arg1;

- (id)initFromUnarchiver:(id)arg1;

- (id)initWithContext:(id)arg1 name:(id)arg2 overridePropertyMap:(id)arg3 isVariation:(_Bool)arg4;

- (void)loadTableStylePropertiesIntoPropertyMap:(id)arg1 fromArchive:(const struct TableStylePropertiesArchive *)arg2 unarchiver:(id)arg3;

- (SEL)mapThemePropertyMapSelector;

- (unsigned int)maskForStrokePreset:(unsigned long long)arg1;

- (void)saveTableStylePropertiesToArchive:(struct TableStylePropertiesArchive *)arg1 archiver:(id)arg2;

- (void)saveToArchiver:(id)arg1;

- (id)strokeForStrokePreset:(unsigned long long)arg1;

- (void)validate;

- (id)verticalStrokeForStrokePreset:(unsigned long long)arg1;



@end


