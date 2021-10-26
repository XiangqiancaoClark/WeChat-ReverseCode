//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSString;

@interface WCFinderTimelineTabFeedInfo : NSObject <WCTTableCoding>
{
    NSString *_tid;
    unsigned long long _tabType;
    unsigned long long _feedIndex;
    unsigned long long _feedType;
}

+ (void)__wcdb_index_6:(struct WCTBinding *)arg1;
+ (void)__wcdb_table_constraint_5:(struct WCTBinding *)arg1;
+ (void)__wcdb_table_constraint_4:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)__wcdb_synthesize_3:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)feedType;
+ (const struct WCTProperty *)__wcdb_synthesize_2:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)feedIndex;
+ (const struct WCTProperty *)__wcdb_synthesize_1:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)tabType;
+ (const struct WCTProperty *)__wcdb_synthesize_0:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)tid;
+ (id)__wcdbtyper;
+ (const SyntaxList_7f15fe8c *)allProperties;
+ (const struct WCTBinding *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long feedType; // @synthesize feedType=_feedType;
@property(nonatomic) unsigned long long feedIndex; // @synthesize feedIndex=_feedIndex;
@property(nonatomic) unsigned long long tabType; // @synthesize tabType=_tabType;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;
- (id)description;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end
