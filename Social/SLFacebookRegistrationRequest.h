/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SLFacebookRequest.h"


@class SLFacebookRegistrationInfo;



@interface SLFacebookRegistrationRequest : SLFacebookRequest

{

    SLFacebookRegistrationInfo *_registrationInfo;

}



- (void).cxx_destruct;

- (void)_prepareRequestForValidation;

- (id)_sha1HashForString:(id)arg1;

- (id)_tokenSecret;

- (id)_urlEncodedString:(id)arg1;

- (id)initWithRegistrationInfo:(id)arg1;

- (void)performRequestWithHandler:(id)arg1;



@end

