//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSString, WCFinderFeedLikeListInfoArray;

@interface WCFinderFeedLikeListObject : NSObject <WCTTableCoding>
{
    NSString *_tid;
    double _cacheTime;
    WCFinderFeedLikeListInfoArray *_likeInfoFirstPageArray;
}

+ (void)__wcdb_index_4:(struct WCTBinding *)arg1;
+ (void)__wcdb_column_constraint_3:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)__wcdb_synthesize_2:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)likeInfoFirstPageArray;
+ (const struct WCTProperty *)__wcdb_synthesize_1:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)cacheTime;
+ (const struct WCTProperty *)__wcdb_synthesize_0:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)tid;
+ (id)__wcdbtyper;
+ (const SyntaxList_7f15fe8c *)allProperties;
+ (const struct WCTBinding *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderFeedLikeListInfoArray *likeInfoFirstPageArray; // @synthesize likeInfoFirstPageArray=_likeInfoFirstPageArray;
@property(nonatomic) double cacheTime; // @synthesize cacheTime=_cacheTime;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

