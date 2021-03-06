/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSString.h"



@interface NSString (GKAdditions)

+ (id)_gkUUIDString;

+ (id)stringForParanthenticalPercentileRankingWithRank:(float)arg1 totalScores:(float)arg2;

+ (id)stringForPercentileRankingWithRank:(float)arg1 totalScores:(float)arg2;

+ (id)stringForPercentileWithRank:(float)arg1 totalScores:(float)arg2 asPercentile:(_Bool)arg3 isTop:(_Bool *)arg4;

+ (id)stringForRankAndPercentileWithRank:(float)arg1 totalScores:(float)arg2;

+ (id)stringForScoreAndPercentileWithRank:(float)arg1 totalScores:(float)arg2 formattedScore:(id)arg3;

- (_Bool)_gkIsMixedDirection;

- (_Bool)_gkIsNaturallyRTL;

- (id)_gkLocaleSensitiveUppercaseString;

- (id)_gkStringByAddingBidiEmbeddingMarkers;

- (id)_gkStringByEscapingHTMLEntities;

- (id)_gkStringByQuotingWithFormat:(id)arg1;

- (id)_gkStringByUnescapingFromURLQuery;

- (id)_gkTruncationSymbolWithFormat:(id)arg1;

- (void)processUTF16CharactersForBidi:(id)arg1;

- (id)stringByAddingPercentEscapesIncludingReservedCharacters;

@end


