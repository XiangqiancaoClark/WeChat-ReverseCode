//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MainFrameFoldReporter : NSObject
{
}

+ (void)reportFoldStatusChange:(_Bool)arg1 topSessionCount:(long long)arg2;
+ (void)reportClickSession:(id)arg1 topSessionCount:(long long)arg2 status:(long long)arg3 index:(long long)arg4;
+ (void)checkReportSessionInfoWithOneScreenCount:(long long)arg1 foldRate:(double)arg2;

@end

