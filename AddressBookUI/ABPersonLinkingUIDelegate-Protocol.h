/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



@protocol ABPersonLinkingUIDelegate

- (_Bool)canUnlinkCardAtRow:(long long)arg1;

- (_Bool)manuallyLinkPerson:(id)arg1;

- (_Bool)manuallyUnlinkCardAtRow:(long long)arg1;

- (id)newPeoplePickerForLinking;

- (id)newPersonViewControllerForLinkedCardAtRow:(long long)arg1;

- (long long)numberOfLinkedCardRows;

- (id)personNameForCardAtRow:(long long)arg1;

- (_Bool)shouldAllowLinkingAnotherContact;

- (_Bool)shouldAllowLinkingPersonWithRecordID:(int)arg1;

- (id)sourceNameForCardAtRow:(long long)arg1;

@end

