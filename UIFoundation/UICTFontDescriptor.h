/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIFontDescriptor.h"


__attribute__((visibility("hidden")))

@interface UICTFontDescriptor : UIFontDescriptor

{

}



+ (id)fontDescriptorWithFontAttributes:(id)arg1;

+ (id)fontDescriptorWithName:(id)arg1 matrix:(struct CGAffineTransform)arg2;

+ (id)fontDescriptorWithName:(id)arg1 size:(double)arg2;

- (unsigned long long)_cfTypeID;

- (_Bool)allowsWeakReference;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)finalize;

- (id)fontAttributes;

- (id)fontDescriptorByAddingAttributes:(id)arg1;

- (unsigned long long)hash;

- (_Bool)isEqual:(id)arg1;

- (id)matchingFontDescriptorWithMandatoryKeys:(id)arg1;

- (id)matchingFontDescriptorsWithMandatoryKeys:(id)arg1;

- (id)objectForKey:(id)arg1;

- (oneway void)release;

- (id)retain;

- (unsigned long long)retainCount;

- (_Bool)retainWeakReference;



@end

