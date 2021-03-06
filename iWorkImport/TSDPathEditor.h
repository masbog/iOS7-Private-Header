/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSDStyledDrawableEditor.h"


#import "TSDDecorator.h"



@class CAShapeLayer, TSDDrawableInfo, TSDPathKnob, TSDRep<TSDPathEditableRep>;



__attribute__((visibility("hidden")))

@interface TSDPathEditor : TSDStyledDrawableEditor <TSDDecorator>

{

    CAShapeLayer *mGhostPathLayer;

    struct CGPoint mLastGhostPosition;

    _Bool mIsInCommandGroup;

    TSDPathKnob *mHoveringKnob;

    id mPathCreateBlock;

    TSDDrawableInfo *mCreatingInfo;

    _Bool mIsCreatingPath;

    _Bool mIsCreatingReversed;

    _Bool mShouldCreateNewPath;

    _Bool mWillBecomeCurrentEditorAgain;

}



+ (void)initialize;

- (void)addKnobsForRep:(id)arg1 toArray:(id)arg2;

- (void)alignDrawablesByBottomEdge:(id)arg1;

- (void)alignDrawablesByHorizontalCenter:(id)arg1;

- (void)alignDrawablesByLeftEdge:(id)arg1;

- (void)alignDrawablesByRightEdge:(id)arg1;

- (void)alignDrawablesByTopEdge:(id)arg1;

- (void)alignDrawablesByVerticalCenter:(id)arg1;

- (void)alignNodesByEdge:(int)arg1;

- (_Bool)canBeginEditingRepOnDoubleTap:(id)arg1;

- (_Bool)canClosePathToKnob:(id)arg1;

- (_Bool)canContinuePathFromKnob:(id)arg1 reversed:(_Bool *)arg2;

- (_Bool)canEndPathCreationWithKnob:(id)arg1;

- (int)canPerformEditorAction:(SEL)arg1 withSender:(id)arg2;

- (void)cancelOperation:(id)arg1;

- (void)close:(id)arg1;

- (void)closeLastSubpath;

- (struct CGPoint)constrainedUnscaledPointForPathCreation:(struct CGPoint)arg1;

@property(retain, nonatomic) TSDRep<TSDPathEditableRep> *creatingRep;

- (void)dealloc;

- (id)decoratorOverlayLayers;

- (void)delete:(id)arg1;

- (void)deleteBackward:(id)arg1;

- (void)deleteForward:(id)arg1;

- (void)deleteToBeginningOfLine:(id)arg1;

- (void)deleteToBeginningOfParagraph:(id)arg1;

- (void)deleteToEndOfLine:(id)arg1;

- (void)deleteToEndOfParagraph:(id)arg1;

- (void)deleteWordBackward:(id)arg1;

- (void)deleteWordForward:(id)arg1;

- (void)didBecomeCurrentEditor;

- (void)didResignTextInputEditor;

- (void)distributeDrawablesHorizontally:(id)arg1;

- (void)distributeDrawablesVertically:(id)arg1;

- (void)distributeNodesByEdge:(int)arg1;

- (void)endMovingKnob;

- (void)endPathEditing;

- (id)ghostLayer;

- (_Bool)ignoreSetSelection:(id)arg1 onInfo:(id)arg2;

- (void)insertNewline:(id)arg1;

- (void)invalidateKnobs;

@property(nonatomic) _Bool isCreatingPath; // @synthesize isCreatingPath=mIsCreatingPath;

@property(nonatomic) _Bool isCreatingReversed; // @synthesize isCreatingReversed=mIsCreatingReversed;

- (void)join:(id)arg1;

- (void)makeBezier:(id)arg1;

- (void)makeShapePathsEditable;

- (void)makeSharp:(id)arg1;

- (void)makeSmooth:(id)arg1;

- (void)moveDown:(id)arg1;

- (void)moveDownAndModifySelection:(id)arg1;

- (void)moveLeft:(id)arg1;

- (void)moveLeftAndModifySelection:(id)arg1;

- (void)moveRight:(id)arg1;

- (void)moveRightAndModifySelection:(id)arg1;

- (void)moveUp:(id)arg1;

- (void)moveUpAndModifySelection:(id)arg1;

- (id)newTrackerForKnob:(id)arg1 forRep:(id)arg2;

- (void)nudgeByDelta:(struct CGPoint)arg1;

@property(copy, nonatomic) id pathCreateBlock; // @synthesize pathCreateBlock=mPathCreateBlock;

- (_Bool)pathHasSelectedNodes:(unsigned long long)arg1;

- (_Bool)pathReturnsTrueForSelector:(SEL)arg1;

- (void)performBlockOnPathEditableRepsWhileEditingPaths:(id)arg1 filterWithBlock:(void)arg2;

- (void)selectAll:(id)arg1;

- (void)setGhostStrokeColor;

@property(nonatomic) _Bool shouldCreateNewPath; // @synthesize shouldCreateNewPath=mShouldCreateNewPath;

- (void)split:(id)arg1;

- (void)toggleSelectedNodeToType:(int)arg1;

- (void)updateGhost;

- (void)updateGhostForNodeCreationAtPoint:(struct CGPoint)arg1;

- (void)updatePositionsOfKnobs:(id)arg1 forRep:(id)arg2;



@end


