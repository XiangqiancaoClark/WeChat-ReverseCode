//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMCommonCgiUploadTask, ParallelUploadResponse;

@protocol MMCommonCgiUploadTaskDelegate <NSObject>
- (void)onTaskFailure:(MMCommonCgiUploadTask *)arg1 canRetry:(_Bool)arg2 retCode:(long long)arg3;
- (void)onTaskSuccess:(MMCommonCgiUploadTask *)arg1 response:(ParallelUploadResponse *)arg2;
@end

