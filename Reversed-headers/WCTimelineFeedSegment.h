//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSString;

@interface WCTimelineFeedSegment : NSObject <WCTTableCoding>
{
    _Bool isAutoIncrement;
    unsigned int _groupId;
    unsigned int _feedsCount;
    NSString *_topFeedId;
    NSString *_bottomFeedId;
}

+ (void)__wcdb_column_constraint_102:(struct WCTBinding *)arg1;
+ (void)__wcdb_column_constraint_101:(struct WCTBinding *)arg1;
+ (void)__wcdb_index_100:(struct WCTBinding *)arg1;
+ (void)__wcdb_column_constraint_99:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)__wcdb_synthesize_98:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)bottomFeedId;
+ (const struct WCTProperty *)__wcdb_synthesize_97:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)topFeedId;
+ (const struct WCTProperty *)__wcdb_synthesize_96:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)feedsCount;
+ (const struct WCTProperty *)__wcdb_synthesize_95:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)groupId;
+ (id)__wcdbtyper;
+ (const SyntaxList_7f15fe8c *)allProperties;
+ (const struct WCTBinding *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *bottomFeedId; // @synthesize bottomFeedId=_bottomFeedId;
@property(retain, nonatomic) NSString *topFeedId; // @synthesize topFeedId=_topFeedId;
@property(nonatomic) unsigned int feedsCount; // @synthesize feedsCount=_feedsCount;
@property(nonatomic) unsigned int groupId; // @synthesize groupId=_groupId;
@property(nonatomic) _Bool isAutoIncrement; // @synthesize isAutoIncrement;
- (id)description;

// Remaining properties
@property(nonatomic) long long lastInsertedRowID;

@end

