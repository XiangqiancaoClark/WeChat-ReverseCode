//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FinderUserPrepareResponse, NSURL, WCFinderContact;

@interface WCFinderPersonalCenterViewModel : NSObject
{
    _Bool _isCreateLivePrepareChecked;
    _Bool _logoutCacheFlag;
    FinderUserPrepareResponse *_userPrepareResponse;
    WCFinderContact *_contact;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool logoutCacheFlag; // @synthesize logoutCacheFlag=_logoutCacheFlag;
@property(readonly, nonatomic) _Bool isCreateLivePrepareChecked; // @synthesize isCreateLivePrepareChecked=_isCreateLivePrepareChecked;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) FinderUserPrepareResponse *userPrepareResponse; // @synthesize userPrepareResponse=_userPrepareResponse;
@property(readonly, nonatomic) NSURL *accountLogoutUrl;
@property(readonly, nonatomic) _Bool accountLogout;
- (void)clearCameraRedPoint;
- (unsigned long long)getFinderUnreadMentionCount;
- (unsigned long long)getWechatUnreadMentionCount;
- (_Bool)forbidenForeignerFinder;
- (_Bool)isForeignerContact;
- (_Bool)isContactSilent;
- (_Bool)isContactBlocked;
- (_Bool)haveFinderContact;
- (_Bool)canPost;

@end

