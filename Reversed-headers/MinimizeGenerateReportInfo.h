//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MinimizeGenerateReportInfo : NSObject
{
    unsigned int _generateScene;
    int _state;
    unsigned long long _clickTimeStamp;
    unsigned long long _generateType;
    NSString *_miniSessionId;
    NSString *_aggreSessionId;
    long long _taskOrder;
    unsigned long long _normalTaskCnt;
    unsigned long long _passiveTaskCnt;
    unsigned long long _taskType;
    unsigned long long _bizScene;
    NSString *_bizId;
    NSString *_bizSubId;
    NSString *_bizName;
    unsigned long long _overloadedType;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long overloadedType; // @synthesize overloadedType=_overloadedType;
@property(nonatomic) int state; // @synthesize state=_state;
@property(retain, nonatomic) NSString *bizName; // @synthesize bizName=_bizName;
@property(retain, nonatomic) NSString *bizSubId; // @synthesize bizSubId=_bizSubId;
@property(retain, nonatomic) NSString *bizId; // @synthesize bizId=_bizId;
@property(nonatomic) unsigned long long bizScene; // @synthesize bizScene=_bizScene;
@property(nonatomic) unsigned long long taskType; // @synthesize taskType=_taskType;
@property(nonatomic) unsigned long long passiveTaskCnt; // @synthesize passiveTaskCnt=_passiveTaskCnt;
@property(nonatomic) unsigned long long normalTaskCnt; // @synthesize normalTaskCnt=_normalTaskCnt;
@property(nonatomic) long long taskOrder; // @synthesize taskOrder=_taskOrder;
@property(retain, nonatomic) NSString *aggreSessionId; // @synthesize aggreSessionId=_aggreSessionId;
@property(retain, nonatomic) NSString *miniSessionId; // @synthesize miniSessionId=_miniSessionId;
@property(nonatomic) unsigned int generateScene; // @synthesize generateScene=_generateScene;
@property(nonatomic) unsigned long long generateType; // @synthesize generateType=_generateType;
@property(nonatomic) unsigned long long clickTimeStamp; // @synthesize clickTimeStamp=_clickTimeStamp;

@end

