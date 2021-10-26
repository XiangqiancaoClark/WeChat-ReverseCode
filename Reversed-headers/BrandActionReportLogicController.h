//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "BrandServiceEnterConversationLogicDelegate-Protocol.h"

@class BrandServiceContinueLocationReportLogic, BrandServiceEnterConversationLogic, CContact, NSString, SessionStat;
@protocol BrandActionReportLogicControllerDelegate;

@interface BrandActionReportLogicController : MMObject <BrandServiceEnterConversationLogicDelegate>
{
    CContact *m_contact;
    BrandServiceEnterConversationLogic *m_enterConversationLogic;
    BrandServiceContinueLocationReportLogic *m_continueLocationReporter;
    id <BrandActionReportLogicControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <BrandActionReportLogicControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) BrandServiceEnterConversationLogic *m_enterConversationLogic; // @synthesize m_enterConversationLogic;
@property(retain, nonatomic) BrandServiceContinueLocationReportLogic *m_continueLocationReporter; // @synthesize m_continueLocationReporter;
@property(retain, nonatomic) CContact *m_contact; // @synthesize m_contact;
- (id)getViewController;
@property(retain, nonatomic) SessionStat *sessionInfo; // @dynamic sessionInfo;
- (void)showAlertView;
- (void)resetContinueReportLogic;
- (void)updateContact:(id)arg1;
- (void)creatContinueReportLogic;
- (void)reportExitConversation;
- (void)reportEnterConversation;
- (void)createEnterReportLogic;
- (id)initWithContact:(id)arg1 delegate:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
