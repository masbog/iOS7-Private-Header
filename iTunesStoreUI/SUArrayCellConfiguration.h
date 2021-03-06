/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SUCellConfiguration.h"


@interface SUArrayCellConfiguration : SUCellConfiguration

{

    unsigned long long _numberOfStrings;

    struct CGRect *_stringFrames;

    id *_strings;

    unsigned long long _numberOfImages;

    struct CGRect *_imageFrames;

    id *_images;

    id *_selectedImages;

}



- (id)_accessibilityStringsArrayPointer;

- (void)dealloc;

- (struct CGRect)frameForImageAtIndex:(unsigned long long)arg1;

- (struct CGRect)frameForLabelAtIndex:(unsigned long long)arg1;

- (id)imageAtIndex:(unsigned long long)arg1 withModifiers:(unsigned long long)arg2;

- (id)initWithStringCount:(unsigned long long)arg1 imageCount:(unsigned long long)arg2;

- (unsigned long long)numberOfImages;

- (unsigned long long)numberOfLabels;

- (void)reloadData;

- (void)reloadImages;

- (void)reloadLayoutInformation;

- (void)reloadStrings;

- (void)setLayoutSize:(struct CGSize)arg1;

- (id)stringForLabelAtIndex:(unsigned long long)arg1;



@end


