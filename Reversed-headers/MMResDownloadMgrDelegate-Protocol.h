//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMResourceDownloadTask, NSData;

@protocol MMResDownloadMgrDelegate <NSObject>
- (void)onDownloadTaskEnd:(long long)arg1 downloadData:(NSData *)arg2 task:(MMResourceDownloadTask *)arg3;
- (void)onDownloadTaskStart:(MMResourceDownloadTask *)arg1;
@end

