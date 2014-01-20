/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "UIGestureRecognizerDelegate.h"



@class NSHashTable, NSMutableArray, NSMutableSet, UIFieldEditor, UIGestureRecognizer, UILongPressGestureRecognizer, UIResponder<UITextInput>, UITapGestureRecognizer, UITextChecker, UITextSelectionView, UIView;



@interface UITextInteractionAssistant : NSObject <UIGestureRecognizerDelegate>

{

    UIResponder<UITextInput> *_view;

    UITextSelectionView *_selectionView;

    NSMutableArray *_recognizers;

    NSMutableSet *_linkGestures;

    UILongPressGestureRecognizer *_loupeGesture;

    UITapGestureRecognizer *_singleTapGesture;

    UIGestureRecognizer *_doubleTapGesture;

    int _autoscrollRamp;

    double _autoscrollFactor;

    struct CGPoint _autoscrollBasePoint;

    struct CGPoint _autoscrollUntransformedExtentPoint;

    struct CGPoint _loupeGestureEndPoint;

    UITextChecker *_textChecker;

    _Bool _inGesture;

    _Bool _autoscrolled;

    _Bool _isTryingToHighlightLink;

    _Bool _externalTextInput;

    NSHashTable *_gestureRecognizerViews;

}



- (id)_asText;

- (id)_scrollable;

- (id)_selectionView;

- (void)activateSelection;

- (id)addDragRecognizer;

- (void)addGestureRecognizersToView:(id)arg1;

- (id)addHighlightLinkRecognizerToView:(id)arg1;

- (id)addLoupeGestureRecognizer:(_Bool)arg1 toView:(id)arg2;

- (id)addOneFingerDoubleTapRecognizer:(SEL)arg1 toView:(id)arg2;

- (id)addOneFingerDoubleTapRecognizerToView:(id)arg1;

- (id)addOneFingerTapRecognizer:(SEL)arg1 toView:(id)arg2;

- (id)addOneFingerTapRecognizerToView:(id)arg1;

- (id)addOneFingerTripleTapRecognizerToView:(id)arg1;

- (id)addPhraseBoundaryGestureRecognizerToView:(id)arg1;

- (id)addSelectionTapRecognizer:(SEL)arg1 toView:(id)arg2;

- (id)addSelectionTapRecognizerToView:(id)arg1;

- (id)addTapAndAHalfRecognizerToView:(id)arg1;

- (id)addTapAndHoldOnLinkRecognizerToView:(id)arg1;

- (id)addTwoFingerRangedSelectRecognizerToView:(id)arg1;

- (id)addTwoFingerSingleTapRecognizerToView:(id)arg1;

- (void)attach;

@property(nonatomic) struct CGPoint autoscrollUntransformedExtentPoint;

- (void)autoscrollWillNotStart;

@property(nonatomic) _Bool autoscrolled;

- (void)canBeginDragCursor:(id)arg1;

- (void)cancelAutoscroll;

- (void)cancelInteractionWithLink;

- (void)clearGestureRecognizers;

- (void)clearGestureRecognizers:(_Bool)arg1;

- (void)clearSelection;

- (void)confirmMarkedText:(id)arg1;

- (struct CGPoint)constrainedPoint:(struct CGPoint)arg1;

- (_Bool)containerAllowsSelection;

- (_Bool)containerAllowsSelectionTintOnly;

- (_Bool)containerChangesSelectionOnOneFingerTap;

- (_Bool)containerIsAtom;

- (_Bool)containerIsBrowserView;

- (_Bool)containerIsPlainStyleAtom;

- (_Bool)containerIsTextField;

- (void)deactivateSelection;

- (void)dealloc;

- (void)detach;

- (void)detach:(_Bool)arg1;

- (void)didEndScrollingOverflow;

- (void)disableClearsOnInsertion;

- (double)distanceBetweenPoint:(struct CGPoint)arg1 andRange:(id)arg2;

@property(retain, nonatomic) UIGestureRecognizer *doubleTapGesture;

- (void)doubleTapInUneditable:(id)arg1;

@property(readonly, nonatomic) _Bool externalTextInput;

@property(readonly, nonatomic) UIFieldEditor *fieldEditor; // @dynamic fieldEditor;

- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;

- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;

- (_Bool)gestureRecognizerShouldBegin:(id)arg1;

@property(nonatomic) _Bool inGesture;

- (id)initWithResponder:(id)arg1;

- (id)initWithView:(id)arg1;

- (_Bool)isChineseInputEnabled;

- (_Bool)isInteractingWithLink;

- (void)layoutChangedByScrolling:(_Bool)arg1;

- (id)linkInteractionView;

- (void)longDelayRecognizer:(id)arg1;

@property(retain, nonatomic) UILongPressGestureRecognizer *loupeGesture;

- (void)loupeGesture:(id)arg1;

@property(nonatomic) struct CGPoint loupeGestureEndPoint;

- (id)loupeGestureRecognizer:(_Bool)arg1;

- (_Bool)noCalloutBarAndTouchInSelection:(struct CGPoint)arg1;

- (void)notifyKeyboardSelectionChanged;

- (void)oneFingerDoubleTap:(id)arg1;

- (id)oneFingerDoubleTapRecognizer:(SEL)arg1;

- (void)oneFingerTap:(id)arg1;

- (void)oneFingerTapInUneditable:(id)arg1;

- (id)oneFingerTapRecognizer:(SEL)arg1;

- (void)oneFingerTapSelectsAll:(id)arg1;

- (void)oneFingerTripleTap:(id)arg1;

- (id)oneFingerTripleTapRecognizer;

- (id)phraseBoundaryGestureRecognizer;

- (id)rangeForTextReplacement:(id)arg1;

- (void)rangeSelectionEnded:(struct CGPoint)arg1;

- (void)rangeSelectionMoved:(struct CGPoint)arg1 withTouchPoint:(struct CGPoint)arg2;

- (void)rangeSelectionStarted:(struct CGPoint)arg1;

- (id)rangeWithTextAlternatives:(id *)arg1 atPosition:(id)arg2;

- (void)removeGestureRecognizersFromView:(id)arg1;

- (void)resignedFirstResponder;

- (void)scheduleDictationReplacementsForAlternatives:(id)arg1 range:(id)arg2;

- (void)scheduleReplacementsForRange:(id)arg1 withOptions:(unsigned long long)arg2;

- (void)scheduleReplacementsWithOptions:(unsigned long long)arg1;

- (void)scrollSelectionToVisible;

@property(readonly, nonatomic) UIView *scrollView;

- (void)selectAll:(id)arg1;

- (void)selectWord;

- (void)selectWordWithoutShowingCommands;

- (void)selectionAnimationDidStop:(id)arg1 finished:(id)arg2;

- (void)selectionChanged;

- (id)selectionTapRecognizer:(SEL)arg1;

@property(readonly, nonatomic) UITextSelectionView *selectionView;

- (void)setFirstResponderIfNecessary;

- (void)setGestureRecognizers;

- (void)setSelectionWithPoint:(struct CGPoint)arg1;

@property(retain, nonatomic) UITapGestureRecognizer *singleTapGesture; // @dynamic singleTapGesture;

- (_Bool)shouldHandleFormGestureAtLocation:(struct CGPoint)arg1;

- (_Bool)shouldHandleOneFingerTapInUneditable:(id)arg1;

- (_Bool)shouldIgnoreLinkGestures;

- (void)smallDelayRecognizer:(id)arg1;

- (void)startAutoscroll:(struct CGPoint)arg1;

- (_Bool)swallowsDoubleTapWithScale:(double)arg1 atPoint:(struct CGPoint)arg2;

- (void)tapAndAHalf:(id)arg1;

- (id)tapAndAHalfRecognizer;

- (_Bool)tapOnLinkWithGesture:(id)arg1;

@property(readonly, nonatomic) UIResponder<UITextInput> *textDocument;

- (id)textSelectionView;

- (void)turnOffDrawsAsAtomIfPlainStyleAtom;

- (void)twoFingerRangedSelectGesture:(id)arg1;

- (id)twoFingerRangedSelectRecognizer;

- (void)twoFingerSingleTap:(id)arg1;

- (id)twoFingerSingleTapRecognizer;

- (void)updateAutoscroll:(id)arg1;

- (void)updateSelectionWithPoint:(struct CGPoint)arg1;

- (void)updateWithMagnifierTerminalPoint:(_Bool)arg1;

- (_Bool)useGesturesForEditableContent;

@property(readonly, nonatomic) UIResponder<UITextInput> *view;

- (_Bool)viewCouldBecomeEditable:(id)arg1;

- (void)willStartScrollingOverflow;



@end

