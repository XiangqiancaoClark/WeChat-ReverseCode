//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, WCPayBindCardInfo;

@interface WCPayFetchBalanceReport : NSObject
{
    NSString *_reportSessionId;
    WCPayBindCardInfo *_defaultCardBinInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayBindCardInfo *defaultCardBinInfo; // @synthesize defaultCardBinInfo=_defaultCardBinInfo;
@property(retain, nonatomic) NSString *reportSessionId; // @synthesize reportSessionId=_reportSessionId;
- (void)reportActionId:(unsigned int)arg1 cardBinInfo:(id)arg2;
- (id)init;

@end

