/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "OADDrawable.h"


@class ODDColorTransform, ODDNodePoint, ODDStyleDefinition;



__attribute__((visibility("hidden")))

@interface ODDDiagram : OADDrawable

{

    ODDNodePoint *mDocumentPoint;

    ODDColorTransform *mColorTransform;

    ODDStyleDefinition *mStyleDefinition;

}



- (id)colorTransform;

- (void)dealloc;

- (id)documentPoint;

- (id)init;

- (void)setDocumentPoint:(id)arg1;

- (void)setParentTextListStyle:(id)arg1;

- (id)styleDefinition;



@end


