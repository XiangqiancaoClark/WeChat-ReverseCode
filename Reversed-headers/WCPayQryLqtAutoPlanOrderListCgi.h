//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseCgi.h"

@class QryAutoPlanOrderListReq;
@protocol WCPayQryLqtAutoPlanOrderListCgiDelegate;

@interface WCPayQryLqtAutoPlanOrderListCgi : WCPayBaseCgi
{
    id <WCPayQryLqtAutoPlanOrderListCgiDelegate> _m_delegate;
    QryAutoPlanOrderListReq *_planDetailReq;
}

- (void).cxx_destruct;
@property(retain) QryAutoPlanOrderListReq *planDetailReq; // @synthesize planDetailReq=_planDetailReq;
@property __weak id <WCPayQryLqtAutoPlanOrderListCgiDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)didFailWithError:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)startRequest:(id)arg1 delegate:(id)arg2;
- (id)init;
- (unsigned long long)reqLimit;
- (void)clearDelegate;

@end

