//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAReportBaseItem.h"

@class NSString;

@interface WAReportSplitPluginCodeStatisItem : WAReportBaseItem
{
    NSString *_provider;
    long long _version;
    long long _stage;
}

- (void).cxx_destruct;
@property(nonatomic) long long stage; // @synthesize stage=_stage;
@property(nonatomic) long long version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *provider; // @synthesize provider=_provider;
- (id)reportString;
- (void)makeSafeString;
- (int)reportID;

// Remaining properties
@property(copy, nonatomic) NSString *instanceId;

@end

