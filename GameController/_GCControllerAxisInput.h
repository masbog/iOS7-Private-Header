/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "GCControllerAxisInput.h"


@class GCControllerButtonInput, GCControllerElement;



__attribute__((visibility("hidden")))

@interface _GCControllerAxisInput : GCControllerAxisInput

{

    float _value;

    id _valueChangedHandler;

    GCControllerButtonInput *_positive;

    GCControllerButtonInput *_negative;

    _Bool _flipped;

    _Bool _digital;

    GCControllerElement *_collection;

}



- (void).cxx_destruct;

- (_Bool)_setValue:(float)arg1;

- (id)collection;

- (id)initWithCollection:(id)arg1 flipped:(_Bool)arg2 digital:(_Bool)arg3;

- (_Bool)isAnalog;

- (_Bool)isDigital;

- (_Bool)isFlipped;

- (id)negative;

- (id)positive;

- (_Bool)setHIDValue:(struct __IOHIDValue *)arg1;

- (void)setValueChangedHandler:(id)arg1;

- (float)value;

- (id)valueChangedHandler;



@end

