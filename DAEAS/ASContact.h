/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "ASChangedCollectionLeaf.h"


#import "DADataElement.h"



@class NSArray, NSDate, NSString;



@interface ASContact : ASChangedCollectionLeaf <DADataElement>

{

    void *_abRecord;

    NSDate *_anniversary;

    NSString *_assistantName;

    NSString *_assistantTelephoneNumber;

    NSDate *_birthday;

    NSString *_body;

    int _bodySize;

    _Bool _bodyTruncated;

    NSString *_business2TelephoneNumber;

    NSString *_businessAddressCity;

    NSString *_businessAddressCountry;

    NSString *_businessAddressPostalCode;

    NSString *_businessAddressState;

    NSString *_businessAddressStreet;

    NSString *_businessFaxNumber;

    NSString *_businessTelephoneNumber;

    NSString *_carTelephoneNumber;

    NSArray *_categories;

    NSArray *_children;

    NSString *_companyName;

    NSString *_department;

    NSString *_email1Address;

    NSString *_email2Address;

    NSString *_email3Address;

    NSString *_fileAs;

    NSString *_firstName;

    NSString *_home2TelephoneNumber;

    NSString *_homeAddressCity;

    NSString *_homeAddressCountry;

    NSString *_homeAddressPostalCode;

    NSString *_homeAddressState;

    NSString *_homeAddressStreet;

    NSString *_homeFaxNumber;

    NSString *_homeTelephoneNumber;

    NSString *_jobTitle;

    NSString *_lastName;

    NSString *_middleName;

    NSString *_mobileTelephoneNumber;

    NSString *_officeLocation;

    NSString *_otherAddressCity;

    NSString *_otherAddressCountry;

    NSString *_otherAddressPostalCode;

    NSString *_otherAddressState;

    NSString *_otherAddressStreet;

    NSString *_pagerNumber;

    NSString *_picture;

    NSString *_radioTelephoneNumber;

    NSString *_spouse;

    NSString *_suffix;

    NSString *_title;

    NSString *_webpage;

    NSString *_yomiCompanyName;

    NSString *_yomiFirstName;

    NSString *_yomiLastName;

    NSString *_customerID;

    NSString *_governmentID;

    NSString *_im1Address;

    NSString *_im2Address;

    NSString *_im3Address;

    NSString *_managerName;

    NSString *_companyMainPhone;

    NSString *_accountName;

    NSString *_nickName;

    NSString *_mms;

    int _fileAsAutoConstruction;

}



+ (void)_setSystemTimeZoneForUnitTests:(id)arg1;

+ (_Bool)acceptsTopLevelLeaves;

+ (id)asParseRules;

+ (id)contactWithABRecord:(void *)arg1 serverID:(id)arg2;

+ (_Bool)frontingBasicTypes;

+ (_Bool)notifyOfUnknownTokens;

+ (_Bool)parsingLeafNode;

+ (_Bool)parsingWithSubItems;

- (void)_detectFileAsAutoConstruction;

- (void)_loadAttributesFromABRecord:(void *)arg1;

- (void)_reconstructFileAsField;

- (_Bool)_saveDatesToAddressBookWithExistingRecord:(void *)arg1 shouldMergeProperties:(_Bool)arg2;

- (_Bool)_saveEmailsToAddressBookWithExistingRecord:(void *)arg1 shouldMergeProperties:(_Bool)arg2;

- (_Bool)_saveExternalRepToAddressBookWithExistingRecord:(void *)arg1 shouldMergeProperties:(_Bool)arg2 storeExternalRep:(_Bool)arg3;

- (_Bool)_saveIMsToAddressBookWithExistingRecord:(void *)arg1 shouldMergeProperties:(_Bool)arg2;

- (_Bool)_savePhoneNumbersToAddressBookWithExistingRecord:(void *)arg1 shouldMergeProperties:(_Bool)arg2;

- (_Bool)_saveRelatedNamesToAddressBookWithExistingRecord:(void *)arg1 shouldMergeProperties:(_Bool)arg2;

- (_Bool)_saveStreetAddressesToAddressBookWithExistingRecord:(void *)arg1 shouldMergeProperties:(_Bool)arg2;

- (_Bool)_saveURLsToAddressBookWithExistingRecord:(void *)arg1 shouldMergeProperties:(_Bool)arg2;

- (_Bool)_setDatesWithExistingRecord:(void *)arg1;

- (_Bool)_setEmailsWithExistingRecord:(void *)arg1;

- (_Bool)_setExternalRepWithExistingRecord:(void *)arg1;

- (_Bool)_setIMsWithExistingRecord:(void *)arg1;

- (void)_setImageOnContactFromPerson:(void *)arg1;

- (_Bool)_setPhoneNumbersWithExistingRecord:(void *)arg1;

- (_Bool)_setRelatedNamesWithExistingRecord:(void *)arg1;

- (_Bool)_setStreetAddressesWithExistingRecord:(void *)arg1;

- (_Bool)_setURLsWithExistingRecord:(void *)arg1;

- (id)_transformedDateForABFramework:(id)arg1;

- (id)_transformedDateForActiveSync:(id)arg1;

@property(retain) NSString *accountName; // @synthesize accountName=_accountName;

@property(retain) NSDate *anniversary; // @synthesize anniversary=_anniversary;

- (void)appendActiveSyncDataForTask:(id)arg1 toWBXMLData:(id)arg2;

@property(retain) NSString *assistantName; // @synthesize assistantName=_assistantName;

@property(retain) NSString *assistantTelephoneNumber; // @synthesize assistantTelephoneNumber=_assistantTelephoneNumber;

@property(retain) NSDate *birthday; // @synthesize birthday=_birthday;

@property(retain, nonatomic) NSString *body; // @synthesize body=_body;

@property int bodySize; // @synthesize bodySize=_bodySize;

@property _Bool bodyTruncated; // @synthesize bodyTruncated=_bodyTruncated;

@property(retain) NSString *business2TelephoneNumber; // @synthesize business2TelephoneNumber=_business2TelephoneNumber;

@property(retain) NSString *businessAddressCity; // @synthesize businessAddressCity=_businessAddressCity;

@property(retain) NSString *businessAddressCountry; // @synthesize businessAddressCountry=_businessAddressCountry;

@property(retain) NSString *businessAddressPostalCode; // @synthesize businessAddressPostalCode=_businessAddressPostalCode;

@property(retain) NSString *businessAddressState; // @synthesize businessAddressState=_businessAddressState;

@property(retain) NSString *businessAddressStreet; // @synthesize businessAddressStreet=_businessAddressStreet;

@property(retain) NSString *businessFaxNumber; // @synthesize businessFaxNumber=_businessFaxNumber;

@property(retain) NSString *businessTelephoneNumber; // @synthesize businessTelephoneNumber=_businessTelephoneNumber;

@property(retain) NSString *carTelephoneNumber; // @synthesize carTelephoneNumber=_carTelephoneNumber;

@property(retain) NSArray *categories; // @synthesize categories=_categories;

@property(retain) NSArray *children; // @synthesize children=_children;

@property(retain) NSString *companyMainPhone; // @synthesize companyMainPhone=_companyMainPhone;

@property(retain) NSString *companyName; // @synthesize companyName=_companyName;

@property(retain) NSString *customerID; // @synthesize customerID=_customerID;

- (int)dataclass;

- (void)dealloc;

- (_Bool)deleteFromAddressBook;

- (_Bool)deleteFromContainer:(void *)arg1;

@property(retain) NSString *department; // @synthesize department=_department;

- (id)description;

@property(retain) NSString *email1Address; // @synthesize email1Address=_email1Address;

@property(retain) NSString *email2Address; // @synthesize email2Address=_email2Address;

@property(retain) NSString *email3Address; // @synthesize email3Address=_email3Address;

- (void)encodeWithCoder:(id)arg1;

@property(retain) NSString *fileAs; // @synthesize fileAs=_fileAs;

@property(retain) NSString *firstName; // @synthesize firstName=_firstName;

@property(retain) NSString *governmentID; // @synthesize governmentID=_governmentID;

@property(retain) NSString *home2TelephoneNumber; // @synthesize home2TelephoneNumber=_home2TelephoneNumber;

@property(retain) NSString *homeAddressCity; // @synthesize homeAddressCity=_homeAddressCity;

@property(retain) NSString *homeAddressCountry; // @synthesize homeAddressCountry=_homeAddressCountry;

@property(retain) NSString *homeAddressPostalCode; // @synthesize homeAddressPostalCode=_homeAddressPostalCode;

@property(retain) NSString *homeAddressState; // @synthesize homeAddressState=_homeAddressState;

@property(retain) NSString *homeAddressStreet; // @synthesize homeAddressStreet=_homeAddressStreet;

@property(retain) NSString *homeFaxNumber; // @synthesize homeFaxNumber=_homeFaxNumber;

@property(retain) NSString *homeTelephoneNumber; // @synthesize homeTelephoneNumber=_homeTelephoneNumber;

@property(retain) NSString *im1Address; // @synthesize im1Address=_im1Address;

@property(retain) NSString *im2Address; // @synthesize im2Address=_im2Address;

@property(retain) NSString *im3Address; // @synthesize im3Address=_im3Address;

- (id)initWithABRecord:(void *)arg1 serverID:(id)arg2;

- (id)initWithCoder:(id)arg1;

@property(retain) NSString *jobTitle; // @synthesize jobTitle=_jobTitle;

@property(retain) NSString *lastName; // @synthesize lastName=_lastName;

- (_Bool)loadABRecord;

- (void)loadClientIDs;

- (_Bool)loadLocalItemWithAccount:(id)arg1;

@property(retain) NSString *managerName; // @synthesize managerName=_managerName;

@property(retain) NSString *middleName; // @synthesize middleName=_middleName;

@property(retain) NSString *mms; // @synthesize mms=_mms;

@property(retain) NSString *mobileTelephoneNumber; // @synthesize mobileTelephoneNumber=_mobileTelephoneNumber;

@property(retain) NSString *nickName; // @synthesize nickName=_nickName;

@property(retain) NSString *officeLocation; // @synthesize officeLocation=_officeLocation;

@property(retain) NSString *otherAddressCity; // @synthesize otherAddressCity=_otherAddressCity;

@property(retain) NSString *otherAddressCountry; // @synthesize otherAddressCountry=_otherAddressCountry;

@property(retain) NSString *otherAddressPostalCode; // @synthesize otherAddressPostalCode=_otherAddressPostalCode;

@property(retain) NSString *otherAddressState; // @synthesize otherAddressState=_otherAddressState;

@property(retain) NSString *otherAddressStreet; // @synthesize otherAddressStreet=_otherAddressStreet;

@property(retain) NSString *pagerNumber; // @synthesize pagerNumber=_pagerNumber;

- (void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6;

@property(retain) NSString *picture; // @synthesize picture=_picture;

- (void)postProcessApplicationData;

@property(retain) NSString *radioTelephoneNumber; // @synthesize radioTelephoneNumber=_radioTelephoneNumber;

- (_Bool)saveServerIDToContact;

- (_Bool)saveServerIDToExistingItem;

- (_Bool)saveToAddressBookWithExistingRecord:(void *)arg1 inSource:(void *)arg2 shouldMergeProperties:(_Bool)arg3 outMergeDidChooseLocalProperties:(_Bool *)arg4 storeExternalRep:(_Bool)arg5;

- (_Bool)saveWithLocalObject:(void *)arg1 toContainer:(void *)arg2 shouldMergeProperties:(_Bool)arg3 outMergeDidChooseLocalProperties:(_Bool *)arg4 account:(id)arg5;

- (void)setABRecord:(void *)arg1;

- (void)setBodySizeNumber:(id)arg1;

- (void)setBodyTruncatedNumber:(id)arg1;

- (void)setEmailFromAppData:(int)arg1 setter:(SEL)arg2;

- (void)setLocalItem:(void *)arg1;

@property(retain) NSString *spouse; // @synthesize spouse=_spouse;

@property(retain) NSString *suffix; // @synthesize suffix=_suffix;

@property(retain) NSString *title; // @synthesize title=_title;

@property(retain) NSString *webpage; // @synthesize webpage=_webpage;

@property(retain) NSString *yomiCompanyName; // @synthesize yomiCompanyName=_yomiCompanyName;

@property(retain) NSString *yomiFirstName; // @synthesize yomiFirstName=_yomiFirstName;

@property(retain) NSString *yomiLastName; // @synthesize yomiLastName=_yomiLastName;



@end

