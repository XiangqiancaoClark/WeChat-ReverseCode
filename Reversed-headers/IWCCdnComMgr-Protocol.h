//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol IWCCdnComMgr <NSObject>
+ (_Bool)StartSnsVideoStreamingDownload:(NSString *)arg1 httpUrl:(NSString *)arg2 fileType:(int)arg3 appType:(int)arg4 filePath:(NSString *)arg5 preloadPercent:(int)arg6 Timeout:(unsigned int)arg7 referer:(NSString *)arg8 blockSize:(unsigned int)arg9;
+ (_Bool)StartHttpVideoStreamingDownload:(NSString *)arg1 httpUrl:(NSString *)arg2 fileType:(int)arg3 filePath:(NSString *)arg4 preloadPercent:(int)arg5 Timeout:(unsigned int)arg6 referer:(NSString *)arg7 blockSize:(unsigned int)arg8;
+ (_Bool)RequestVideoDataByClientMediaID:(NSString *)arg1 offset:(unsigned long long)arg2 length:(unsigned long long)arg3 durationMs:(int)arg4;
+ (_Bool)IsVideoDataAvailableByClientMediaID:(NSString *)arg1 offset:(unsigned long long)arg2 length:(unsigned long long)arg3;
+ (_Bool)StopDownloadWithClientMediaID:(NSString *)arg1 downloadTaskInfo:(id *)arg2;
+ (unsigned long long)QueryContinousSizeWithClientId:(NSString *)arg1 offset:(unsigned long long)arg2;
+ (unsigned long long)QueryDownloadedSizesWithClientId:(NSString *)arg1;
+ (int)GetAverageSpeedWithClientId:(NSString *)arg1 recentSeconds:(int)arg2;
+ (int)GetAverageSpeedWithRecentSeconds:(int)arg1;
+ (int)GetRecentAverageSpeed;
@end

