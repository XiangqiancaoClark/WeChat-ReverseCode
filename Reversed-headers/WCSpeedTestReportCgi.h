//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCBaseCgi.h"

@class SpeedTestReportReq;

@interface WCSpeedTestReportCgi : WCBaseCgi
{
    SpeedTestReportReq *speedTestReportRequest;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SpeedTestReportReq *speedTestReportRequest; // @synthesize speedTestReportRequest;
- (void)didFailWithError:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)startRequest:(id)arg1 connectionTime:(unsigned int)arg2 connectionRetCode:(unsigned int)arg3 tranTime:(unsigned int)arg4 transRetCode:(unsigned int)arg5 clinetIp:(id)arg6 clientPort:(unsigned int)arg7 serverIp:(id)arg8 serverPort:(unsigned int)arg9 localStack:(unsigned int)arg10;
- (id)init;

@end
