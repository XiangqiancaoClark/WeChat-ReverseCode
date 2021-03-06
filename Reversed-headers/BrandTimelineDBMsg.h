//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSData, NSString;

@interface BrandTimelineDBMsg : NSObject <WCTTableCoding>
{
    _Bool isAutoIncrement;
    _Bool _isExpan;
    _Bool _isStarContact;
    _Bool _isBrowsed;
    _Bool _bExposedInMainSession;
    _Bool _hasResorted;
    _Bool _isResortNewDigestBold;
    unsigned int _msgId;
    unsigned int _groupId;
    unsigned int _groupOrderId;
    unsigned int _msgPredict;
    unsigned int _msgLocalId;
    unsigned int _createTime;
    unsigned int _status;
    unsigned int _type;
    unsigned int _msgClusterType;
    unsigned int _bizMsgType;
    unsigned int _exposeCountInMainSession;
    unsigned int _exposeTotalTimeInMainSession;
    unsigned int _exposeMinPosInMainSession;
    unsigned int _canvasAdExpiredTimeSec;
    unsigned int _resortNewDigestExposeCountInMainSession;
    unsigned int _resortNewBoldDigestExposeCountInMainSession;
    long long lastInsertedRowID;
    unsigned long long _sequenceId;
    long long _msgServerId;
    NSString *_message;
    NSString *_msgIdentify;
    NSString *_userName;
    NSString *_msgSource;
    NSData *_byteBuffer;
    NSString *_rankSessionId;
    NSString *_recCardId;
    NSString *_canvasId;
    NSString *_resortNewDigestInfoJson;
    NSString *_resortNewDigestStrategyInfo;
}

+ (void)__wcdb_index_51:(struct WCTBinding *)arg1;
+ (void)__wcdb_index_50:(struct WCTBinding *)arg1;
+ (void)__wcdb_index_49:(struct WCTBinding *)arg1;
+ (void)__wcdb_index_48:(struct WCTBinding *)arg1;
+ (void)__wcdb_index_47:(struct WCTBinding *)arg1;
+ (void)__wcdb_index_46:(struct WCTBinding *)arg1;
+ (void)__wcdb_index_45:(struct WCTBinding *)arg1;
+ (void)__wcdb_index_44:(struct WCTBinding *)arg1;
+ (void)__wcdb_index_43:(struct WCTBinding *)arg1;
+ (void)__wcdb_index_42:(struct WCTBinding *)arg1;
+ (void)__wcdb_index_41:(struct WCTBinding *)arg1;
+ (void)__wcdb_index_40:(struct WCTBinding *)arg1;
+ (void)__wcdb_index_39:(struct WCTBinding *)arg1;
+ (void)__wcdb_index_38:(struct WCTBinding *)arg1;
+ (void)__wcdb_index_37:(struct WCTBinding *)arg1;
+ (void)__wcdb_index_36:(struct WCTBinding *)arg1;
+ (void)__wcdb_index_35:(struct WCTBinding *)arg1;
+ (void)__wcdb_column_constraint_34:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)__wcdb_synthesize_33:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)resortNewBoldDigestExposeCountInMainSession;
+ (const struct WCTProperty *)__wcdb_synthesize_32:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)resortNewDigestExposeCountInMainSession;
+ (const struct WCTProperty *)__wcdb_synthesize_31:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)resortNewDigestStrategyInfo;
+ (const struct WCTProperty *)__wcdb_synthesize_30:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)resortNewDigestInfoJson;
+ (const struct WCTProperty *)__wcdb_synthesize_29:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)isResortNewDigestBold;
+ (const struct WCTProperty *)__wcdb_synthesize_28:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)canvasId;
+ (const struct WCTProperty *)__wcdb_synthesize_27:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)canvasAdExpiredTimeSec;
+ (const struct WCTProperty *)__wcdb_synthesize_26:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)recCardId;
+ (const struct WCTProperty *)__wcdb_synthesize_25:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)exposeMinPosInMainSession;
+ (const struct WCTProperty *)__wcdb_synthesize_24:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)exposeTotalTimeInMainSession;
+ (const struct WCTProperty *)__wcdb_synthesize_23:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)exposeCountInMainSession;
+ (const struct WCTProperty *)__wcdb_synthesize_22:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)hasResorted;
+ (const struct WCTProperty *)__wcdb_synthesize_21:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)rankSessionId;
+ (const struct WCTProperty *)__wcdb_synthesize_20:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)bExposedInMainSession;
+ (const struct WCTProperty *)__wcdb_synthesize_19:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)bizMsgType;
+ (const struct WCTProperty *)__wcdb_synthesize_18:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)byteBuffer;
+ (const struct WCTProperty *)__wcdb_synthesize_17:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)isBrowsed;
+ (const struct WCTProperty *)__wcdb_synthesize_16:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)isStarContact;
+ (const struct WCTProperty *)__wcdb_synthesize_15:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)isExpan;
+ (const struct WCTProperty *)__wcdb_synthesize_14:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)msgSource;
+ (const struct WCTProperty *)__wcdb_synthesize_13:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)userName;
+ (const struct WCTProperty *)__wcdb_synthesize_12:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)msgIdentify;
+ (const struct WCTProperty *)__wcdb_synthesize_11:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)msgClusterType;
+ (const struct WCTProperty *)__wcdb_synthesize_10:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)type;
+ (const struct WCTProperty *)__wcdb_synthesize_9:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)status;
+ (const struct WCTProperty *)__wcdb_synthesize_8:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)message;
+ (const struct WCTProperty *)__wcdb_synthesize_7:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)createTime;
+ (const struct WCTProperty *)__wcdb_synthesize_6:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)msgServerId;
+ (const struct WCTProperty *)__wcdb_synthesize_5:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)msgLocalId;
+ (const struct WCTProperty *)__wcdb_synthesize_4:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)msgPredict;
+ (const struct WCTProperty *)__wcdb_synthesize_3:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)groupOrderId;
+ (const struct WCTProperty *)__wcdb_synthesize_2:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)groupId;
+ (const struct WCTProperty *)__wcdb_synthesize_1:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)sequenceId;
+ (const struct WCTProperty *)__wcdb_synthesize_0:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)msgId;
+ (id)__wcdbtyper;
+ (const SyntaxList_7f15fe8c *)allProperties;
+ (const struct WCTBinding *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) unsigned int resortNewBoldDigestExposeCountInMainSession; // @synthesize resortNewBoldDigestExposeCountInMainSession=_resortNewBoldDigestExposeCountInMainSession;
@property(nonatomic) unsigned int resortNewDigestExposeCountInMainSession; // @synthesize resortNewDigestExposeCountInMainSession=_resortNewDigestExposeCountInMainSession;
@property(retain, nonatomic) NSString *resortNewDigestStrategyInfo; // @synthesize resortNewDigestStrategyInfo=_resortNewDigestStrategyInfo;
@property(retain, nonatomic) NSString *resortNewDigestInfoJson; // @synthesize resortNewDigestInfoJson=_resortNewDigestInfoJson;
@property(nonatomic) _Bool isResortNewDigestBold; // @synthesize isResortNewDigestBold=_isResortNewDigestBold;
@property(retain, nonatomic) NSString *canvasId; // @synthesize canvasId=_canvasId;
@property(nonatomic) unsigned int canvasAdExpiredTimeSec; // @synthesize canvasAdExpiredTimeSec=_canvasAdExpiredTimeSec;
@property(retain, nonatomic) NSString *recCardId; // @synthesize recCardId=_recCardId;
@property(nonatomic) unsigned int exposeMinPosInMainSession; // @synthesize exposeMinPosInMainSession=_exposeMinPosInMainSession;
@property(nonatomic) unsigned int exposeTotalTimeInMainSession; // @synthesize exposeTotalTimeInMainSession=_exposeTotalTimeInMainSession;
@property(nonatomic) unsigned int exposeCountInMainSession; // @synthesize exposeCountInMainSession=_exposeCountInMainSession;
@property(nonatomic) _Bool hasResorted; // @synthesize hasResorted=_hasResorted;
@property(retain, nonatomic) NSString *rankSessionId; // @synthesize rankSessionId=_rankSessionId;
@property(nonatomic) _Bool bExposedInMainSession; // @synthesize bExposedInMainSession=_bExposedInMainSession;
@property(nonatomic) unsigned int bizMsgType; // @synthesize bizMsgType=_bizMsgType;
@property(retain, nonatomic) NSData *byteBuffer; // @synthesize byteBuffer=_byteBuffer;
@property(nonatomic) _Bool isBrowsed; // @synthesize isBrowsed=_isBrowsed;
@property(nonatomic) _Bool isStarContact; // @synthesize isStarContact=_isStarContact;
@property(nonatomic) _Bool isExpan; // @synthesize isExpan=_isExpan;
@property(retain, nonatomic) NSString *msgSource; // @synthesize msgSource=_msgSource;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) NSString *msgIdentify; // @synthesize msgIdentify=_msgIdentify;
@property(nonatomic) unsigned int msgClusterType; // @synthesize msgClusterType=_msgClusterType;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(nonatomic) unsigned int status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
@property(nonatomic) long long msgServerId; // @synthesize msgServerId=_msgServerId;
@property(nonatomic) unsigned int msgLocalId; // @synthesize msgLocalId=_msgLocalId;
@property(nonatomic) unsigned int msgPredict; // @synthesize msgPredict=_msgPredict;
@property(nonatomic) unsigned int groupOrderId; // @synthesize groupOrderId=_groupOrderId;
@property(nonatomic) unsigned int groupId; // @synthesize groupId=_groupId;
@property(nonatomic) unsigned long long sequenceId; // @synthesize sequenceId=_sequenceId;
@property(nonatomic) unsigned int msgId; // @synthesize msgId=_msgId;
@property(nonatomic) long long lastInsertedRowID; // @synthesize lastInsertedRowID;
@property(nonatomic) _Bool isAutoIncrement; // @synthesize isAutoIncrement;

@end

