/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSKeyValueProperty.h"


@class NSArray;



__attribute__((visibility("hidden")))

@interface NSKeyValueUnnestedProperty : NSKeyValueProperty

{

    NSArray *_affectingProperties;

    _Bool _cachedIsaForAutonotifyingIsValid;

    Class _cachedIsaForAutonotifying;

}



- (void)_addDependentValueKey:(id)arg1;

- (void)_givenPropertiesBeingInitialized:(struct __CFSet *)arg1 getAffectingProperties:(id)arg2;

- (id)_initWithContainerClass:(id)arg1 key:(id)arg2 propertiesBeingInitialized:(struct __CFSet *)arg3;

- (Class)_isaForAutonotifying;

- (id)_keyPathIfAffectedByValueForKey:(id)arg1 exactMatch:(_Bool *)arg2;

- (id)_keyPathIfAffectedByValueForMemberOfKeys:(id)arg1;

- (void)dealloc;

- (id)description;

- (Class)isaForAutonotifying;

- (id)keyPathIfAffectedByValueForKey:(id)arg1 exactMatch:(_Bool *)arg2;

- (id)keyPathIfAffectedByValueForMemberOfKeys:(id)arg1;

- (_Bool)matchesWithoutOperatorComponentsKeyPath:(id)arg1;

- (void)object:(id)arg1 didAddObservance:(id)arg2 recurse:(_Bool)arg3;

- (void)object:(id)arg1 didRemoveObservance:(id)arg2 recurse:(_Bool)arg3;

- (void)object:(id)arg1 withObservance:(id)arg2 didChangeValueForKeyOrKeys:(id)arg3 recurse:(_Bool)arg4 forwardingValues:(CDStruct_a70f6672)arg5;

- (_Bool)object:(id)arg1 withObservance:(id)arg2 willChangeValueForKeyOrKeys:(id)arg3 recurse:(_Bool)arg4 forwardingValues:(CDStruct_a70f6672 *)arg5;



@end


