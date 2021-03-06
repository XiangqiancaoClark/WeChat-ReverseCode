//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderVideoPreDownloadInfo : NSObject
{
    _Bool _isComplete;
    _Bool _isMinBytesComplete;
    NSString *_tid;
    unsigned long long _videoIndex;
    NSString *_videoFlag;
    unsigned long long _preloadSize;
    unsigned long long _videoTotalSize;
}

+ (void)__wcdb_index_9:(struct WCTBinding *)arg1;
+ (void)__wcdb_table_constraint_8:(struct WCTBinding *)arg1;
+ (void)__wcdb_table_constraint_7:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)__wcdb_synthesize_6:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)isMinBytesComplete;
+ (const struct WCTProperty *)__wcdb_synthesize_5:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)isComplete;
+ (const struct WCTProperty *)__wcdb_synthesize_4:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)videoTotalSize;
+ (const struct WCTProperty *)__wcdb_synthesize_3:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)preloadSize;
+ (const struct WCTProperty *)__wcdb_synthesize_2:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)videoFlag;
+ (const struct WCTProperty *)__wcdb_synthesize_1:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)videoIndex;
+ (const struct WCTProperty *)__wcdb_synthesize_0:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)tid;
+ (id)__wcdbtyper;
+ (const SyntaxList_7f15fe8c *)allProperties;
+ (const struct WCTBinding *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) _Bool isMinBytesComplete; // @synthesize isMinBytesComplete=_isMinBytesComplete;
@property(nonatomic) _Bool isComplete; // @synthesize isComplete=_isComplete;
@property(nonatomic) unsigned long long videoTotalSize; // @synthesize videoTotalSize=_videoTotalSize;
@property(nonatomic) unsigned long long preloadSize; // @synthesize preloadSize=_preloadSize;
@property(retain, nonatomic) NSString *videoFlag; // @synthesize videoFlag=_videoFlag;
@property(nonatomic) unsigned long long videoIndex; // @synthesize videoIndex=_videoIndex;
@property(retain, nonatomic) NSString *tid; // @synthesize tid=_tid;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isPreloadComplete;

@end

