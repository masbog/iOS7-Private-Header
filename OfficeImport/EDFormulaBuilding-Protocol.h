/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@protocol EDFormulaBuilding <NSObject>

- (_Bool)addArrayWithCol:(int)arg1 andRow:(int)arg2;

- (char *)addToken:(int)arg1 extendedDataLength:(unsigned int)arg2;

- (char *)addToken:(int)arg1 extendedDataLength:(unsigned int)arg2 numArgs:(int)arg3;

- (_Bool)convertLastRefsToArea;

- (_Bool)convertRefs:(unsigned int)arg1 toTypes:(int *)arg2;

- (_Bool)convertToIntersect:(unsigned int)arg1;

- (_Bool)convertToList:(unsigned int)arg1;

- (_Bool)convertToList:(unsigned int)arg1 withFinalParen:(_Bool)arg2;

- (_Bool)insertExternalName:(unsigned long long)arg1 withLink:(unsigned long long)arg2 atIndex:(unsigned int)arg3;

- (_Bool)isSupportedFormula;

- (id)lastTokenRefOrArea3dLinkRefIsValid:(_Bool *)arg1 withEDLinks:(id)arg2;

- (void)markLastTokenAsDuration;

- (void)markLastTokenAsSpanningRefVertically:(_Bool)arg1 withMin:(unsigned short)arg2 andMax:(unsigned short)arg3;

- (char *)setExtendedDataForLastTokenAtIndex:(unsigned int)arg1 length:(unsigned int)arg2;

- (void)setWarning:(int)arg1;

- (_Bool)shrinkSpanningRefAtArgIndex:(unsigned int)arg1;

- (int)warningType;

@end


