//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCAdvertiseOperationLogicBase.h"

#import "WCAdFinderLiveNoticeHalfScreenViewDelegate-Protocol.h"

@class NSString, WCAdFinderLiveNoticeHalfScreenView, WCAdFinderLiveNoticeInfo, WCAdvertiseInfo;
@protocol WCAdFinderLiveNoticeLogicDelegate;

@interface WCAdFinderLiveNoticeLogic : WCAdvertiseOperationLogicBase <WCAdFinderLiveNoticeHalfScreenViewDelegate>
{
    id <WCAdFinderLiveNoticeLogicDelegate> _delegate;
    WCAdFinderLiveNoticeInfo *_adFinderLiveNoticeInfo;
    WCAdvertiseInfo *_adData;
    NSString *_snsId;
    WCAdFinderLiveNoticeHalfScreenView *_halfScreenView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCAdFinderLiveNoticeHalfScreenView *halfScreenView; // @synthesize halfScreenView=_halfScreenView;
@property(retain, nonatomic) NSString *snsId; // @synthesize snsId=_snsId;
@property(retain, nonatomic) WCAdvertiseInfo *adData; // @synthesize adData=_adData;
@property(retain, nonatomic) WCAdFinderLiveNoticeInfo *adFinderLiveNoticeInfo; // @synthesize adFinderLiveNoticeInfo=_adFinderLiveNoticeInfo;
@property(nonatomic) __weak id <WCAdFinderLiveNoticeLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onConfirmButtonClickWithFinderUsername:(id)arg1 andFinderLiveNoticeId:(id)arg2;
- (void)start;
- (id)initWithFinderLiveNoticeInfo:(id)arg1 adAdData:(id)arg2 andSnsId:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

