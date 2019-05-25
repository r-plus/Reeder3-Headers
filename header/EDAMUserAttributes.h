//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSArray, NSString;

@interface EDAMUserAttributes : NSObject <NSCoding>
{
    NSString *__defaultLocationName;
    double __defaultLatitude;
    double __defaultLongitude;
    _Bool __preactivation;
    NSArray *__viewedPromotions;
    NSString *__incomingEmailAddress;
    NSArray *__recentMailedAddresses;
    NSString *__comments;
    long long __dateAgreedToTermsOfService;
    int __maxReferrals;
    int __referralCount;
    NSString *__refererCode;
    long long __sentEmailDate;
    int __sentEmailCount;
    int __dailyEmailLimit;
    long long __emailOptOutDate;
    long long __partnerEmailOptInDate;
    NSString *__preferredLanguage;
    NSString *__preferredCountry;
    _Bool __clipFullPage;
    NSString *__twitterUserName;
    NSString *__twitterId;
    NSString *__groupName;
    NSString *__recognitionLanguage;
    long long __customerProfileId;
    NSString *__referralProof;
    _Bool __educationalDiscount;
    NSString *__businessAddress;
    _Bool __hideSponsorBilling;
    _Bool __defaultLocationName_isset;
    _Bool __defaultLatitude_isset;
    _Bool __defaultLongitude_isset;
    _Bool __preactivation_isset;
    _Bool __viewedPromotions_isset;
    _Bool __incomingEmailAddress_isset;
    _Bool __recentMailedAddresses_isset;
    _Bool __comments_isset;
    _Bool __dateAgreedToTermsOfService_isset;
    _Bool __maxReferrals_isset;
    _Bool __referralCount_isset;
    _Bool __refererCode_isset;
    _Bool __sentEmailDate_isset;
    _Bool __sentEmailCount_isset;
    _Bool __dailyEmailLimit_isset;
    _Bool __emailOptOutDate_isset;
    _Bool __partnerEmailOptInDate_isset;
    _Bool __preferredLanguage_isset;
    _Bool __preferredCountry_isset;
    _Bool __clipFullPage_isset;
    _Bool __twitterUserName_isset;
    _Bool __twitterId_isset;
    _Bool __groupName_isset;
    _Bool __recognitionLanguage_isset;
    _Bool __customerProfileId_isset;
    _Bool __referralProof_isset;
    _Bool __educationalDiscount_isset;
    _Bool __businessAddress_isset;
    _Bool __hideSponsorBilling_isset;
}

- (id)description;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetHideSponsorBilling;
- (_Bool)hideSponsorBillingIsSet;
@property(nonatomic, getter=hideSponsorBilling, setter=setHideSponsorBilling:) _Bool hideSponsorBilling;
- (void)unsetBusinessAddress;
- (_Bool)businessAddressIsSet;
@property(retain, nonatomic, getter=businessAddress, setter=setBusinessAddress:) NSString *businessAddress;
- (void)unsetEducationalDiscount;
- (_Bool)educationalDiscountIsSet;
@property(nonatomic, getter=educationalDiscount, setter=setEducationalDiscount:) _Bool educationalDiscount;
- (void)unsetReferralProof;
- (_Bool)referralProofIsSet;
@property(retain, nonatomic, getter=referralProof, setter=setReferralProof:) NSString *referralProof;
- (void)unsetCustomerProfileId;
- (_Bool)customerProfileIdIsSet;
@property(nonatomic, getter=customerProfileId, setter=setCustomerProfileId:) long long customerProfileId;
- (void)unsetRecognitionLanguage;
- (_Bool)recognitionLanguageIsSet;
@property(retain, nonatomic, getter=recognitionLanguage, setter=setRecognitionLanguage:) NSString *recognitionLanguage;
- (void)unsetGroupName;
- (_Bool)groupNameIsSet;
@property(retain, nonatomic, getter=groupName, setter=setGroupName:) NSString *groupName;
- (void)unsetTwitterId;
- (_Bool)twitterIdIsSet;
@property(retain, nonatomic, getter=twitterId, setter=setTwitterId:) NSString *twitterId;
- (void)unsetTwitterUserName;
- (_Bool)twitterUserNameIsSet;
@property(retain, nonatomic, getter=twitterUserName, setter=setTwitterUserName:) NSString *twitterUserName;
- (void)unsetClipFullPage;
- (_Bool)clipFullPageIsSet;
@property(nonatomic, getter=clipFullPage, setter=setClipFullPage:) _Bool clipFullPage;
- (void)unsetPreferredCountry;
- (_Bool)preferredCountryIsSet;
@property(retain, nonatomic, getter=preferredCountry, setter=setPreferredCountry:) NSString *preferredCountry;
- (void)unsetPreferredLanguage;
- (_Bool)preferredLanguageIsSet;
@property(retain, nonatomic, getter=preferredLanguage, setter=setPreferredLanguage:) NSString *preferredLanguage;
- (void)unsetPartnerEmailOptInDate;
- (_Bool)partnerEmailOptInDateIsSet;
@property(nonatomic, getter=partnerEmailOptInDate, setter=setPartnerEmailOptInDate:) long long partnerEmailOptInDate;
- (void)unsetEmailOptOutDate;
- (_Bool)emailOptOutDateIsSet;
@property(nonatomic, getter=emailOptOutDate, setter=setEmailOptOutDate:) long long emailOptOutDate;
- (void)unsetDailyEmailLimit;
- (_Bool)dailyEmailLimitIsSet;
@property(nonatomic, getter=dailyEmailLimit, setter=setDailyEmailLimit:) int dailyEmailLimit;
- (void)unsetSentEmailCount;
- (_Bool)sentEmailCountIsSet;
@property(nonatomic, getter=sentEmailCount, setter=setSentEmailCount:) int sentEmailCount;
- (void)unsetSentEmailDate;
- (_Bool)sentEmailDateIsSet;
@property(nonatomic, getter=sentEmailDate, setter=setSentEmailDate:) long long sentEmailDate;
- (void)unsetRefererCode;
- (_Bool)refererCodeIsSet;
@property(retain, nonatomic, getter=refererCode, setter=setRefererCode:) NSString *refererCode;
- (void)unsetReferralCount;
- (_Bool)referralCountIsSet;
@property(nonatomic, getter=referralCount, setter=setReferralCount:) int referralCount;
- (void)unsetMaxReferrals;
- (_Bool)maxReferralsIsSet;
@property(nonatomic, getter=maxReferrals, setter=setMaxReferrals:) int maxReferrals;
- (void)unsetDateAgreedToTermsOfService;
- (_Bool)dateAgreedToTermsOfServiceIsSet;
@property(nonatomic, getter=dateAgreedToTermsOfService, setter=setDateAgreedToTermsOfService:) long long dateAgreedToTermsOfService;
- (void)unsetComments;
- (_Bool)commentsIsSet;
@property(retain, nonatomic, getter=comments, setter=setComments:) NSString *comments;
- (void)unsetRecentMailedAddresses;
- (_Bool)recentMailedAddressesIsSet;
@property(retain, nonatomic, getter=recentMailedAddresses, setter=setRecentMailedAddresses:) NSArray *recentMailedAddresses;
- (void)unsetIncomingEmailAddress;
- (_Bool)incomingEmailAddressIsSet;
@property(retain, nonatomic, getter=incomingEmailAddress, setter=setIncomingEmailAddress:) NSString *incomingEmailAddress;
- (void)unsetViewedPromotions;
- (_Bool)viewedPromotionsIsSet;
@property(retain, nonatomic, getter=viewedPromotions, setter=setViewedPromotions:) NSArray *viewedPromotions;
- (void)unsetPreactivation;
- (_Bool)preactivationIsSet;
@property(nonatomic, getter=preactivation, setter=setPreactivation:) _Bool preactivation;
- (void)unsetDefaultLongitude;
- (_Bool)defaultLongitudeIsSet;
@property(nonatomic, getter=defaultLongitude, setter=setDefaultLongitude:) double defaultLongitude;
- (void)unsetDefaultLatitude;
- (_Bool)defaultLatitudeIsSet;
@property(nonatomic, getter=defaultLatitude, setter=setDefaultLatitude:) double defaultLatitude;
- (void)unsetDefaultLocationName;
- (_Bool)defaultLocationNameIsSet;
@property(retain, nonatomic, getter=defaultLocationName, setter=setDefaultLocationName:) NSString *defaultLocationName;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDefaultLocationName:(id)arg1 defaultLatitude:(double)arg2 defaultLongitude:(double)arg3 preactivation:(_Bool)arg4 viewedPromotions:(id)arg5 incomingEmailAddress:(id)arg6 recentMailedAddresses:(id)arg7 comments:(id)arg8 dateAgreedToTermsOfService:(long long)arg9 maxReferrals:(int)arg10 referralCount:(int)arg11 refererCode:(id)arg12 sentEmailDate:(long long)arg13 sentEmailCount:(int)arg14 dailyEmailLimit:(int)arg15 emailOptOutDate:(long long)arg16 partnerEmailOptInDate:(long long)arg17 preferredLanguage:(id)arg18 preferredCountry:(id)arg19 clipFullPage:(_Bool)arg20 twitterUserName:(id)arg21 twitterId:(id)arg22 groupName:(id)arg23 recognitionLanguage:(id)arg24 customerProfileId:(long long)arg25 referralProof:(id)arg26 educationalDiscount:(_Bool)arg27 businessAddress:(id)arg28 hideSponsorBilling:(_Bool)arg29;

@end
