//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol MMKReportService <NSObject>
- (NSString *)getLastSessionInfo;
- (void)setLastSessionInfo:(NSString *)arg1;
- (long long)svrTimeMs;
- (void)kvStat:(int)arg1 val:(NSString *)arg2;
- (void)idkeyStat:(long long)arg1 key:(long long)arg2 val:(long long)arg3 isImportant:(_Bool)arg4;
@end
