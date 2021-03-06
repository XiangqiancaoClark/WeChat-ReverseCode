//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "WCTTableCoding-Protocol.h"

@class NSString;

@interface WCCardOfflineCodeConfigData : MMObject <WCTTableCoding>
{
    _Bool needInsertShowTimestamp;
    unsigned int lowerBound;
    unsigned int expireTimeInterval;
    unsigned int showExpireInterval;
    unsigned int localUpdateTime;
    NSString *cardId;
    NSString *showTimestampEncryptKey;
}

+ (void)__wcdb_column_constraint_7:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)__wcdb_synthesize_6:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)showTimestampEncryptKey;
+ (const struct WCTProperty *)__wcdb_synthesize_5:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)needInsertShowTimestamp;
+ (const struct WCTProperty *)__wcdb_synthesize_4:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)localUpdateTime;
+ (const struct WCTProperty *)__wcdb_synthesize_3:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)showExpireInterval;
+ (const struct WCTProperty *)__wcdb_synthesize_2:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)expireTimeInterval;
+ (const struct WCTProperty *)__wcdb_synthesize_1:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)lowerBound;
+ (const struct WCTProperty *)__wcdb_synthesize_0:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)cardId;
+ (id)__wcdbtyper;
+ (const SyntaxList_7f15fe8c *)allProperties;
+ (const struct WCTBinding *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *showTimestampEncryptKey; // @synthesize showTimestampEncryptKey;
@property(nonatomic) unsigned int localUpdateTime; // @synthesize localUpdateTime;
@property(nonatomic) _Bool needInsertShowTimestamp; // @synthesize needInsertShowTimestamp;
@property(nonatomic) unsigned int showExpireInterval; // @synthesize showExpireInterval;
@property(nonatomic) unsigned int expireTimeInterval; // @synthesize expireTimeInterval;
@property(nonatomic) unsigned int lowerBound; // @synthesize lowerBound;
@property(retain, nonatomic) NSString *cardId; // @synthesize cardId;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

