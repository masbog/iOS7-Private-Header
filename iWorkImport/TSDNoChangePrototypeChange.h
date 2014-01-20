/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "TSDPrototypeChange.h"



__attribute__((visibility("hidden")))

@interface TSDNoChangePrototypeChange : NSObject <TSDPrototypeChange>

{

    id mPrototype;

}



- (id)changedPropertySet;

- (void)dealloc;

- (id)description;

- (id)initNoChangePrototypeChangeForPrototype:(id)arg1;

@property(readonly) id <TSSPropertySource> propertiesAfterChange;

- (_Bool)propertiesAreChanging:(id)arg1;

@property(readonly) id <TSSPropertySource> propertiesBeforeChange;

- (_Bool)propertyIsChanging:(int)arg1;

@property(readonly) id prototype; // @synthesize prototype=mPrototype;

@property(readonly) _Bool prototypeIsBeingDeleted;

@property(readonly) _Bool prototypeIsBeingModified;

@property(readonly) _Bool prototypeIsBeingReplaced;

@property(readonly) id replacement;



@end

