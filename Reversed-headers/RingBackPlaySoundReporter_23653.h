//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KvReportBaseItem.h"

@class NSString;

@interface RingBackPlaySoundReporter_23653 : KvReportBaseItem
{
    unsigned int _roomid;
    unsigned int _playDuration;
    unsigned int _startPlayTimeStamp;
    unsigned long long _entryType;
    unsigned long long _roomkey;
    NSString *_feedID;
    unsigned long long _feedType;
    unsigned long long _usageRange;
    NSString *_toUserName;
    unsigned long long _logButtonState;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int startPlayTimeStamp; // @synthesize startPlayTimeStamp=_startPlayTimeStamp;
@property(nonatomic) unsigned int playDuration; // @synthesize playDuration=_playDuration;
@property(nonatomic) unsigned long long logButtonState; // @synthesize logButtonState=_logButtonState;
@property(copy, nonatomic) NSString *toUserName; // @synthesize toUserName=_toUserName;
@property(nonatomic) unsigned long long usageRange; // @synthesize usageRange=_usageRange;
@property(nonatomic) unsigned long long feedType; // @synthesize feedType=_feedType;
@property(copy, nonatomic) NSString *feedID; // @synthesize feedID=_feedID;
@property(nonatomic) unsigned long long roomkey; // @synthesize roomkey=_roomkey;
@property(nonatomic) unsigned int roomid; // @synthesize roomid=_roomid;
@property(nonatomic) unsigned long long entryType; // @synthesize entryType=_entryType;
- (void)doReport;
- (void)recordStartPlayRing;
- (void)configueWithRing:(id)arg1;
- (id)reportOrderedFieldNameArr;
- (unsigned int)reportNSStringPreprocessType;
- (unsigned int)reportKvId;

@end

