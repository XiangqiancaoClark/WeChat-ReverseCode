//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSString;

@interface BTLiveMsgReportItem : MMObject
{
    _Bool _isClick;
    unsigned int _exposeTimestamp;
    unsigned int _sessionID;
    unsigned int _liveScene;
    NSString *_bizUserName;
    unsigned long long _brandMsgId;
    NSString *_liveExportID;
}

+ (id)reportKeyWithMsg:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned int liveScene; // @synthesize liveScene=_liveScene;
@property(nonatomic) _Bool isClick; // @synthesize isClick=_isClick;
@property(copy, nonatomic) NSString *liveExportID; // @synthesize liveExportID=_liveExportID;
@property(nonatomic) unsigned int sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) unsigned int exposeTimestamp; // @synthesize exposeTimestamp=_exposeTimestamp;
@property(nonatomic) unsigned long long brandMsgId; // @synthesize brandMsgId=_brandMsgId;
@property(copy, nonatomic) NSString *bizUserName; // @synthesize bizUserName=_bizUserName;
- (id)toReportString;

@end
