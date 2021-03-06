//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"
#import "WCTTableCoding-Protocol.h"

@class NSString, WCFinderMegaVideoBulletCommentMutableArray;

@interface WCFinderMegaVideoBulletComment : NSObject <WCTTableCoding, PBCoding>
{
    NSString *videoId;
    unsigned long long cacheTime;
    WCFinderMegaVideoBulletCommentMutableArray *comments;
}

+ (void)__wcdb_index_4:(struct WCTBinding *)arg1;
+ (void)__wcdb_column_constraint_3:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)__wcdb_synthesize_2:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)comments;
+ (const struct WCTProperty *)__wcdb_synthesize_1:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)cacheTime;
+ (const struct WCTProperty *)__wcdb_synthesize_0:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)videoId;
+ (id)__wcdbtyper;
+ (const SyntaxList_7f15fe8c *)allProperties;
+ (const struct WCTBinding *)objectRelationalMapping;
+ (void)initialize;
+ (void)PBArrayAdd_comments;
+ (void)PBArrayAdd_cacheTime;
+ (void)PBArrayAdd_videoId;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderMegaVideoBulletCommentMutableArray *comments; // @synthesize comments;
@property(nonatomic) unsigned long long cacheTime; // @synthesize cacheTime;
@property(copy, nonatomic) NSString *videoId; // @synthesize videoId;
@property(readonly, copy) NSString *description;
- (id)initWithVideoId:(id)arg1 commentList:(id)arg2;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;
@property(readonly) Class superclass;

@end

