//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSString;

@interface BTLNotifyBarReportItem : MMObject
{
    _Bool _isClick;
    unsigned int _exposeTimes;
    unsigned int _exposeTimestamp;
    unsigned int _msgType;
    NSString *_bizUserName;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isClick; // @synthesize isClick=_isClick;
@property(copy, nonatomic) NSString *bizUserName; // @synthesize bizUserName=_bizUserName;
@property(nonatomic) unsigned int msgType; // @synthesize msgType=_msgType;
@property(nonatomic) unsigned int exposeTimestamp; // @synthesize exposeTimestamp=_exposeTimestamp;
@property(nonatomic) unsigned int exposeTimes; // @synthesize exposeTimes=_exposeTimes;

@end

