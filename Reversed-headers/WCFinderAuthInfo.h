//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"
#import "WCTColumnCoding-Protocol.h"

@class NSString, WCFinderContact;

@interface WCFinderAuthInfo : NSObject <PBCoding, WCTColumnCoding>
{
    NSString *realName;
    unsigned long long authIconType;
    NSString *authProfession;
    WCFinderContact *authGuarantor;
    NSString *authIconUrl;
    unsigned long long authVerifyIdentity;
    unsigned long long verifyStatus;
    NSString *_detailLink;
    NSString *_appName;
}

+ (id)finderAuthInfo:(id)arg1;
+ (unsigned long long)columnType;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_verifyStatus;
+ (void)PBArrayAdd_authVerifyIdentity;
+ (void)PBArrayAdd_authIconUrl;
+ (void)PBArrayAdd_authGuarantor;
+ (void)PBArrayAdd_authProfession;
+ (void)PBArrayAdd_authIconType;
+ (void)PBArrayAdd_realName;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(copy, nonatomic) NSString *detailLink; // @synthesize detailLink=_detailLink;
@property(nonatomic) unsigned long long verifyStatus; // @synthesize verifyStatus;
@property(nonatomic) unsigned long long authVerifyIdentity; // @synthesize authVerifyIdentity;
@property(copy, nonatomic) NSString *authIconUrl; // @synthesize authIconUrl;
@property(retain, nonatomic) WCFinderContact *authGuarantor; // @synthesize authGuarantor;
@property(retain, nonatomic) NSString *authProfession; // @synthesize authProfession;
@property(nonatomic) unsigned long long authIconType; // @synthesize authIconType;
@property(retain, nonatomic) NSString *realName; // @synthesize realName;
@property(readonly, copy) NSString *description;
- (_Bool)hasAuthIconUrl;
- (unsigned long long)authVerifyIdentityType;
- (id)genAuthIconUrl;
- (_Bool)hasGuarantor;
- (_Bool)hadCertified;
- (id)genFinderAuthInfo;
- (id)archivedWCTValue;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
