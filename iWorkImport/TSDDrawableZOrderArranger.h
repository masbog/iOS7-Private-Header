/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "TSDArrangeInspectorDelegate.h"



@class NSObject<TSDCanvasEditor>;



__attribute__((visibility("hidden")))

@interface TSDDrawableZOrderArranger : NSObject <TSDArrangeInspectorDelegate>

{

    NSObject<TSDCanvasEditor> *mCanvasEditor;

    _Bool mCanCoalesceZOrderCommand;

}



- (void)arrangeInspectorDidEndChangingZValue:(unsigned long long)arg1;

- (void)arrangeInspectorDidSetZValue:(unsigned long long)arg1;

- (void)arrangeInspectorWillBeginChangingZValue:(unsigned long long)arg1;

- (id)commandToSetZOrderOfInfos:(id)arg1 toIndexes:(id)arg2 coalesceable:(_Bool)arg3;

- (unsigned long long)currentZValueForArrangeInspector;

- (id)initWithCanvasEditor:(id)arg1;

- (unsigned long long)maxZValueForArrangeInspector;

- (unsigned long long)minZValueForArrangeInspector;

- (void)moveBackForArrangeInspector;

- (void)moveFrontForArrangeInspector;

- (void)moveToBackForArrangeInspector;

- (void)moveToFrontForArrangeInspector;

- (unsigned long long)p_maxIndex;

- (unsigned long long)p_minIndex;

- (unsigned long long)p_zOrderIndex;

- (id)p_zOrderSelection;

- (id)p_zOrderSiblings;

- (_Bool)shouldShowWrapOptionsForSelectedDrawables;



@end

