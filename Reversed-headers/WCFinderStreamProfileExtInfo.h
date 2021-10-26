//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class FinderEventInfo, FinderLiveNoticeInfo, FinderUserPagePoi, FinderWxAppInfo, NSString, WCFinderBGCover, WCFinderBrandInfoArray, WCFinderMiniAppInfoArray, WCFinderStreamProfileExtInfoTagArray, WCFinderTopicInfoArray;

@interface WCFinderStreamProfileExtInfo : NSObject <WCTTableCoding>
{
    _Bool _logoutLock;
    _Bool _logoutDone;
    _Bool _hasMusicMVFeeds;
    _Bool _showMentionedTab;
    _Bool _showProductTab;
    _Bool _showMusicTab;
    _Bool _showStricker;
    NSString *_finderUsername;
    WCFinderStreamProfileExtInfoTagArray *_userTags;
    unsigned long long _fansCount;
    unsigned long long _friendFollowCount;
    double _cacheTime;
    FinderWxAppInfo *_storeAppInfo;
    FinderLiveNoticeInfo *_liveNoticeInfo;
    WCFinderTopicInfoArray *_topics;
    WCFinderMiniAppInfoArray *_miniAppInfos;
    WCFinderBrandInfoArray *_brandInfos;
    FinderUserPagePoi *_poiInfo;
    FinderEventInfo *_eventInfo;
    NSString *_logoutUrl;
    WCFinderBGCover *_cover;
}

+ (void)__wcdb_index_22:(struct WCTBinding *)arg1;
+ (void)__wcdb_column_constraint_21:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)__wcdb_synthesize_20:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)cover;
+ (const struct WCTProperty *)__wcdb_synthesize_19:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)showStricker;
+ (const struct WCTProperty *)__wcdb_synthesize_18:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)poiInfo;
+ (const struct WCTProperty *)__wcdb_synthesize_17:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)showMusicTab;
+ (const struct WCTProperty *)__wcdb_synthesize_16:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)showProductTab;
+ (const struct WCTProperty *)__wcdb_synthesize_15:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)showMentionedTab;
+ (const struct WCTProperty *)__wcdb_synthesize_14:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)hasMusicMVFeeds;
+ (const struct WCTProperty *)__wcdb_synthesize_13:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)logoutUrl;
+ (const struct WCTProperty *)__wcdb_synthesize_12:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)logoutDone;
+ (const struct WCTProperty *)__wcdb_synthesize_11:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)logoutLock;
+ (const struct WCTProperty *)__wcdb_synthesize_10:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)miniAppInfos;
+ (const struct WCTProperty *)__wcdb_synthesize_9:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)eventInfo;
+ (const struct WCTProperty *)__wcdb_synthesize_8:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)brandInfos;
+ (const struct WCTProperty *)__wcdb_synthesize_7:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)topics;
+ (const struct WCTProperty *)__wcdb_synthesize_6:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)liveNoticeInfo;
+ (const struct WCTProperty *)__wcdb_synthesize_5:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)storeAppInfo;
+ (const struct WCTProperty *)__wcdb_synthesize_4:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)cacheTime;
+ (const struct WCTProperty *)__wcdb_synthesize_3:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)userTags;
+ (const struct WCTProperty *)__wcdb_synthesize_2:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)friendFollowCount;
+ (const struct WCTProperty *)__wcdb_synthesize_1:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)fansCount;
+ (const struct WCTProperty *)__wcdb_synthesize_0:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)finderUsername;
+ (id)__wcdbtyper;
+ (const SyntaxList_7f15fe8c *)allProperties;
+ (const struct WCTBinding *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderBGCover *cover; // @synthesize cover=_cover;
@property(nonatomic) _Bool showStricker; // @synthesize showStricker=_showStricker;
@property(nonatomic) _Bool showMusicTab; // @synthesize showMusicTab=_showMusicTab;
@property(nonatomic) _Bool showProductTab; // @synthesize showProductTab=_showProductTab;
@property(nonatomic) _Bool showMentionedTab; // @synthesize showMentionedTab=_showMentionedTab;
@property(nonatomic) _Bool hasMusicMVFeeds; // @synthesize hasMusicMVFeeds=_hasMusicMVFeeds;
@property(retain, nonatomic) NSString *logoutUrl; // @synthesize logoutUrl=_logoutUrl;
@property(nonatomic) _Bool logoutDone; // @synthesize logoutDone=_logoutDone;
@property(nonatomic) _Bool logoutLock; // @synthesize logoutLock=_logoutLock;
@property(retain, nonatomic) FinderEventInfo *eventInfo; // @synthesize eventInfo=_eventInfo;
@property(retain, nonatomic) FinderUserPagePoi *poiInfo; // @synthesize poiInfo=_poiInfo;
@property(retain, nonatomic) WCFinderBrandInfoArray *brandInfos; // @synthesize brandInfos=_brandInfos;
@property(retain, nonatomic) WCFinderMiniAppInfoArray *miniAppInfos; // @synthesize miniAppInfos=_miniAppInfos;
@property(retain, nonatomic) WCFinderTopicInfoArray *topics; // @synthesize topics=_topics;
@property(retain, nonatomic) FinderLiveNoticeInfo *liveNoticeInfo; // @synthesize liveNoticeInfo=_liveNoticeInfo;
@property(retain, nonatomic) FinderWxAppInfo *storeAppInfo; // @synthesize storeAppInfo=_storeAppInfo;
@property(nonatomic) double cacheTime; // @synthesize cacheTime=_cacheTime;
@property(nonatomic) unsigned long long friendFollowCount; // @synthesize friendFollowCount=_friendFollowCount;
@property(nonatomic) unsigned long long fansCount; // @synthesize fansCount=_fansCount;
@property(retain, nonatomic) WCFinderStreamProfileExtInfoTagArray *userTags; // @synthesize userTags=_userTags;
@property(retain, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
- (id)description;
- (void)SetMiniAppInfos:(id)arg1;
- (id)GetMiniAppInfos;
- (id)GetBrandInfos;
- (void)SetBrandInfos:(id)arg1;
- (void)updateTopics:(id)arg1;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end
