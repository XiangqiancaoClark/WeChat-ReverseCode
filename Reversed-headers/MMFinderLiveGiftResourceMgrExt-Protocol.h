//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, NSString, NSURL;

@protocol MMFinderLiveGiftResourceMgrExt <NSObject>

@optional
- (void)onLiveGiftResDownloadCompleted:(NSError *)arg1 retry:(unsigned long long)arg2 totalLength:(unsigned long long)arg3 resType:(long long)arg4 productId:(NSString *)arg5 downloadUrl:(NSURL *)arg6;
- (void)onLiveGiftResDownloadProgress:(float)arg1 totalLength:(unsigned long long)arg2 resType:(long long)arg3 productId:(NSString *)arg4 downloadUrl:(NSURL *)arg5;
@end

