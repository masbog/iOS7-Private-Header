/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSMutableArray, NSMutableIndexSet, TSKAccessController, TSKChangeGroup, TSKCommand, TSKCommandGroup, TSKCommandHistory, TSKCommandSelectionBehavior, TSKCommandSelectionBehaviorHistory, TSKDocumentRoot;



__attribute__((visibility("hidden")))

@interface TSKCommandController : NSObject

{

    TSKDocumentRoot *_documentRoot;

    NSMutableArray *_commandQueue;

    TSKCommandGroup *_currentGroup;

    unsigned long long _currentGroupOpenCount;

    _Bool _isAutomaticGroupOpen;

    _Bool _automaticGroupNeedsClose;

    _Bool _isClosingAutomaticGroup;

    NSMutableArray *_automaticGroupCloseHandlers;

    unsigned long long _indexOfGroupThatSetCurrentSelectionBehavior;

    TSKCommandSelectionBehavior *_currentSelectionBehavior;

    NSMutableIndexSet *_progressiveEnqueuingEnabledIndexes;

    TSKChangeGroup *_changeGroup;

    TSKCommand *_executingCommand;

    TSKCommandGroup *_committedLastChanceCommands;

    _Bool _isInLastChanceWrite;

    _Bool _isUndoing;

    _Bool _isRedoing;

    TSKCommandHistory *_historyOverride;

    NSMutableArray *_historyOverrides;

    TSKCommandSelectionBehaviorHistory *_selectionBehaviorHistoryOverride;

    _Bool _processingChanges;

    unsigned long long _enableUndoRedoCount;

}



+ (_Bool)executingInCommandCommitPhase;

- (void)acceptMark;

@property(readonly) TSKAccessController *accessController;

- (void)beginFieldEditing;

- (_Bool)canCoalesce;

- (_Bool)canRedo;

- (_Bool)canUndo;

- (void)closeGroup;

- (void)closeGroupWithSelectionBehavior:(id)arg1;

@property(readonly) TSKCommandGroup *currentGroup; // @synthesize currentGroup=_currentGroup;

- (void)dealloc;

- (void)disableUndoRedo;

@property(readonly) TSKDocumentRoot *documentRoot;

- (void)enableAutomaticGroupingUntilNextEventWithCloseHandler:(id)arg1;

- (void)enableProgressiveEnqueuingInCurrentGroup;

- (void)enableUndoRedo;

- (void)endFieldEditing;

- (void)enqueueCommand:(id)arg1;

- (void)enqueueCommand:(id)arg1 withSelectionBehavior:(id)arg2;

- (id)executingCommand;

- (void)forceCloseAutomaticGroup;

@property(readonly) long long groupingLevel;

- (id)initWithDocumentRoot:(id)arg1;

@property(readonly, nonatomic, getter=isAutomaticGroupingEnabled) _Bool automaticGroupingEnabled; // @synthesize automaticGroupingEnabled=_isAutomaticGroupOpen;

- (_Bool)isInsideModalEditingSession;

@property(readonly, nonatomic, getter=isProgressiveEnqueuingInCurrentGroupEnabled) _Bool progressiveEnqueuingInCurrentGroupEnabled;

- (_Bool)isRedoing;

- (_Bool)isUndoing;

- (void)mark;

- (void)openGroup;

- (void)openGroupWithSelectionBehavior:(id)arg1;

- (void)p_addSelectionBehavior:(id)arg1;

- (void)p_closeAutomaticGroupIfAppropriate;

- (void)p_commitCommandQueueItem:(id)arg1;

- (void)p_commitRemainingCommandsInGroup:(id)arg1;

- (void)p_completeCommitForCommandQueueItem:(id)arg1 shouldAddToHistory:(id)arg2;

- (void)p_completeCommitForRemainingCommandsInGroup:(id)arg1;

- (void)p_completePostingCollectedChanges;

- (void)p_completeUndoPendingPreflightCommand;

- (void)p_completeUndoRedoForCommandQueueItem:(id)arg1;

- (void)p_enableProgressiveEnqueuingInGroupAtIndex:(unsigned long long)arg1;

- (void)p_enqueueCommand:(id)arg1 phase:(int)arg2 withSelectionBehavior:(id)arg3;

@property(readonly, nonatomic) TSKCommandHistory *p_history;

- (void)p_openGroupAtIndex:(unsigned long long)arg1;

- (void)p_performCommitForCommandQueueItem:(id)arg1;

- (void)p_performCommitForRemainingCommandsInCurrentGroup;

- (void)p_performRedoForCommandQueueItem:(id)arg1;

- (void)p_performUndoForCommandQueueItem:(id)arg1;

- (void)p_postAsyncPhaseChanges:(id)arg1;

- (void)p_postChanges:(id)arg1 forSyncPhase:(_Bool)arg2;

- (void)p_postHistoryChangedNotificationDueToFieldEditing:(_Bool)arg1;

- (void)p_postSyncPhaseChanges:(id)arg1;

- (_Bool)p_processCommandQueueItem:(id)arg1;

- (void)p_redoCommandQueueItem:(id)arg1;

- (unsigned long long)p_redoCount;

- (void)p_restoreUndoRedoState:(id)arg1;

@property(readonly, nonatomic) TSKCommandSelectionBehaviorHistory *p_selectionBehaviorHistory;

- (void)p_serviceCommandQueue;

- (void)p_undoCommandQueueItem:(id)arg1;

- (unsigned long long)p_undoCount;

- (void)p_undoPendingPreflightCommand;

- (_Bool)p_willCommitRemainingCommandsInGroup:(id)arg1;

- (void)p_writeWhileCollectingChangesForCommandPhase:(int)arg1 usingBlock:(id)arg2;

- (_Bool)processingChanges;

- (void)protected_commitLastChanceCommand:(id)arg1;

- (void)protected_lastChanceWrite;

- (void)protected_performIndirectCommand:(id)arg1 fromCommand:(id)arg2;

- (void)protected_willCommitCommands:(id)arg1;

- (void)redo;

- (id)redoActionString;

- (void)rejectMark;

- (void)rejectPendingPreflightCommand;

- (void)undo;

- (id)undoActionString;

- (void)undoNestedGroup;



@end


