/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



@protocol VCCallSessionDelegate

- (void)didChangeLocalVariablesForSession:(id)arg1;

- (_Bool)didDetectBandwidth:(_Bool)arg1 upstreamBandwidth:(int)arg2 downstreamBandwidth:(int)arg3;

- (void)remoteAudioDidPause:(_Bool)arg1 callID:(unsigned int)arg2;

- (void)remoteVideoDidPause:(_Bool)arg1 callID:(unsigned int)arg2;

- (void)session:(id)arg1 cancelRelayRequest:(id)arg2;

- (void)session:(id)arg1 didChangeRemoteScreenAttributes:(id)arg2;

- (void)session:(id)arg1 didChangeVideoRule:(id)arg2;

- (void)session:(id)arg1 didReceiveARPLData:(id)arg2 fromCallID:(unsigned int)arg3;

- (void)session:(id)arg1 didSeeThermalChange:(double)arg2;

- (void)session:(id)arg1 didStart:(_Bool)arg2 connectionType:(unsigned int)arg3 localUseCell:(unsigned int)arg4 remoteUseCell:(unsigned int)arg5 error:(id)arg6;

- (void)session:(id)arg1 didStopWithDelay:(long long)arg2 error:(id)arg3;

- (void)session:(id)arg1 didStopWithError:(id)arg2;

- (void)session:(id)arg1 inititiateRelayRequest:(id)arg2;

- (void)session:(id)arg1 packMeters:(char *)arg2 withLength:(char *)arg3;

- (void)session:(id)arg1 receivedNoPacketsForSeconds:(double)arg2;

- (_Bool)session:(id)arg1 receivedRemoteFrame:(struct __CVBuffer *)arg2 atTime:(CDStruct_198678f7)arg3 withScreenAttributes:(id)arg4 videoAttributes:(id)arg5 isFirstFrame:(_Bool)arg6;

- (void)session:(id)arg1 remoteMediaStalled:(_Bool)arg2;

- (void)session:(id)arg1 sendIPChangeRequest:(id)arg2 withCallID:(unsigned int)arg3;

- (void)session:(id)arg1 sendRelayResponse:(id)arg2;

- (_Bool)session:(id)arg1 startVideoIO:(id *)arg2 captureRule:(id)arg3 isUnpausing:(_Bool)arg4;

- (void)session:(id)arg1 withCallID:(unsigned int)arg2 networkHint:(_Bool)arg3;

- (void)session:(id)arg1 withCallID:(unsigned int)arg2 videoIsDegraded:(_Bool)arg3 isRemote:(_Bool)arg4;

- (void)setBWEOptions:(_Bool)arg1 UseNewBWEMode:(_Bool)arg2 FakeLargeFrameMode:(_Bool)arg3 ProbingSenderLog:(_Bool)arg4;

- (_Bool)stopVideoIO:(_Bool)arg1 error:(id *)arg2;

@end

