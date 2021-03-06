//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "NSCopying-Protocol.h"
#import "WCTTableCoding-Protocol.h"

@class NSString;

@interface MMGroupLiveInfoItem : MMObject <WCTTableCoding, NSCopying>
{
    _Bool enableComment;
    _Bool enableApplyLiveMic;
    _Bool enableLiveReplay;
    _Bool useDefaultLiveName;
    unsigned int createTime;
    unsigned int endTime;
    unsigned int status;
    unsigned int onlineCnt;
    unsigned int messageCnt;
    unsigned int likeCnt;
    unsigned int _barStatus;
    long long liveId;
    NSString *liveName;
    NSString *roomId;
    NSString *replayUrl;
    NSString *anchor;
    long long timeId;
    NSString *sdkUserId;
    NSString *createSdkUserId;
    unsigned long long chatroomliveExtInfoFlag;
}

+ (id)createItemWithShareLiveMsg:(id)arg1;
+ (id)createItemWithLiveInfo:(id)arg1 roomId:(id)arg2;
+ (void)__wcdb_index_25:(struct WCTBinding *)arg1;
+ (void)__wcdb_index_24:(struct WCTBinding *)arg1;
+ (void)__wcdb_index_23:(struct WCTBinding *)arg1;
+ (void)__wcdb_index_22:(struct WCTBinding *)arg1;
+ (void)__wcdb_index_21:(struct WCTBinding *)arg1;
+ (void)__wcdb_column_constraint_20:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)__wcdb_synthesize_19:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)chatroomliveExtInfoFlag;
+ (const struct WCTProperty *)__wcdb_synthesize_18:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)useDefaultLiveName;
+ (const struct WCTProperty *)__wcdb_synthesize_17:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)barStatus;
+ (const struct WCTProperty *)__wcdb_synthesize_16:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)createSdkUserId;
+ (const struct WCTProperty *)__wcdb_synthesize_15:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)sdkUserId;
+ (const struct WCTProperty *)__wcdb_synthesize_14:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)timeId;
+ (const struct WCTProperty *)__wcdb_synthesize_13:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)anchor;
+ (const struct WCTProperty *)__wcdb_synthesize_12:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)enableLiveReplay;
+ (const struct WCTProperty *)__wcdb_synthesize_11:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)enableApplyLiveMic;
+ (const struct WCTProperty *)__wcdb_synthesize_10:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)enableComment;
+ (const struct WCTProperty *)__wcdb_synthesize_9:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)replayUrl;
+ (const struct WCTProperty *)__wcdb_synthesize_8:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)likeCnt;
+ (const struct WCTProperty *)__wcdb_synthesize_7:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)messageCnt;
+ (const struct WCTProperty *)__wcdb_synthesize_6:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)onlineCnt;
+ (const struct WCTProperty *)__wcdb_synthesize_5:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)status;
+ (const struct WCTProperty *)__wcdb_synthesize_4:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)endTime;
+ (const struct WCTProperty *)__wcdb_synthesize_3:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)createTime;
+ (const struct WCTProperty *)__wcdb_synthesize_2:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)roomId;
+ (const struct WCTProperty *)__wcdb_synthesize_1:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)liveName;
+ (const struct WCTProperty *)__wcdb_synthesize_0:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)liveId;
+ (id)__wcdbtyper;
+ (const SyntaxList_7f15fe8c *)allProperties;
+ (const struct WCTBinding *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) unsigned int barStatus; // @synthesize barStatus=_barStatus;
@property(nonatomic) unsigned long long chatroomliveExtInfoFlag; // @synthesize chatroomliveExtInfoFlag;
@property(nonatomic) _Bool useDefaultLiveName; // @synthesize useDefaultLiveName;
@property(retain, nonatomic) NSString *createSdkUserId; // @synthesize createSdkUserId;
@property(retain, nonatomic) NSString *sdkUserId; // @synthesize sdkUserId;
@property(nonatomic) long long timeId; // @synthesize timeId;
@property(retain, nonatomic) NSString *anchor; // @synthesize anchor;
@property(nonatomic) _Bool enableLiveReplay; // @synthesize enableLiveReplay;
@property(nonatomic) _Bool enableApplyLiveMic; // @synthesize enableApplyLiveMic;
@property(nonatomic) _Bool enableComment; // @synthesize enableComment;
@property(retain, nonatomic) NSString *replayUrl; // @synthesize replayUrl;
@property(nonatomic) unsigned int likeCnt; // @synthesize likeCnt;
@property(nonatomic) unsigned int messageCnt; // @synthesize messageCnt;
@property(nonatomic) unsigned int onlineCnt; // @synthesize onlineCnt;
@property(nonatomic) unsigned int status; // @synthesize status;
@property(nonatomic) unsigned int endTime; // @synthesize endTime;
@property(nonatomic) unsigned int createTime; // @synthesize createTime;
@property(retain, nonatomic) NSString *roomId; // @synthesize roomId;
@property(retain, nonatomic) NSString *liveName; // @synthesize liveName;
@property(nonatomic) long long liveId; // @synthesize liveId;
- (id)description;
- (id)toLiveInfo;
- (void)copyFromLiveInfo:(id)arg1 roomId:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

