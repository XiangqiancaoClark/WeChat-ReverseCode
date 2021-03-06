//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface WCFinderDynamicConfigModel : NSObject
{
    _Bool _enableShowSuggestTagView;
    _Bool _enableShowFinderCommentBlacklist;
    _Bool _useLowCompressMethod;
    _Bool _markReadOpenController;
    _Bool _statsReportOpenController;
    _Bool _preFetchStreamSwitch;
    _Bool _dynamicFinderSwitch;
    _Bool _commentToProfile;
    _Bool _refuseAllPrivateMsgSwitch;
    _Bool _useLiveNearPeople;
    _Bool _showWindowProduct;
    _Bool _dynamicFinderLiveNewEntranceSwitch;
    _Bool _dynamicFinderWXProfileAuthInfoSwitch;
    _Bool _openShareListFeedsIgnoreLimited;
    _Bool _dynamicFinderLiveEntryOnTopSearch;
    _Bool _checkVideoEditFromMiaoJian;
    _Bool _openCheckAntiAddictSwitch;
    unsigned long long _maxTopicCount;
    unsigned long long _maxMentionSbCount;
    double _feedImageCompressRate;
    double _headImageCompressRate;
    double _profileImageCompressRate;
    double _coverImageCompressRate;
    double _thumbImageCompressRate;
    double _musicImageCompressRate;
    double _photoMaxSize;
    double _thumbMaxSize;
    NSString *_feedCompressResolution;
    NSString *_headCompressResolution;
    NSString *_profileCompressResolution;
    unsigned long long _coverFrameRate;
    unsigned long long _uploadLargeFileSize;
    unsigned long long _POIJumpType;
    unsigned long long _maxPreloadTaskCount;
    NSMutableDictionary *_functionSpamDic;
    NSString *_extMiniappPrefix;
    NSString *_originalCertificateUrl;
    NSString *_topicInputStopTokenList;
    NSString *_mentionInputStopTokenList;
    unsigned long long _postTextMaxLimit;
    NSString *_vEditorAppId;
    unsigned long long _nearByVCCacheTimestamp;
    NSString *_thumbCompressResolution;
    unsigned long long _cropFullFeedHeightMaxResolution;
    long long _prefetchFilterMinFeedCount;
    NSString *_miaoJianAppId;
    NSString *_miaoJianAppstoreSchemePublishEntry;
    NSString *_miaoJianUniversalLink;
    NSString *_miaoJianAppstoreSchemeSameStyle;
    NSString *_miaojianMetaKey;
    NSString *_finderLimitedModeConfig;
    NSString *_shopMiniAppId;
    NSString *_shopMiniAppPath;
    unsigned long long _antiAddictDarkStartTime;
    unsigned long long _antiAddictDarkEndTime;
    unsigned long long _antiAddictSyncLocalInterval;
    unsigned long long _localSearchContactUpdateIntervalInSec;
    unsigned long long _ringToneVideoDurationLimit;
    unsigned long long _antiAddictInterval;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long antiAddictInterval; // @synthesize antiAddictInterval=_antiAddictInterval;
@property(nonatomic) unsigned long long ringToneVideoDurationLimit; // @synthesize ringToneVideoDurationLimit=_ringToneVideoDurationLimit;
@property(nonatomic) unsigned long long localSearchContactUpdateIntervalInSec; // @synthesize localSearchContactUpdateIntervalInSec=_localSearchContactUpdateIntervalInSec;
@property(nonatomic) unsigned long long antiAddictSyncLocalInterval; // @synthesize antiAddictSyncLocalInterval=_antiAddictSyncLocalInterval;
@property(nonatomic) unsigned long long antiAddictDarkEndTime; // @synthesize antiAddictDarkEndTime=_antiAddictDarkEndTime;
@property(nonatomic) unsigned long long antiAddictDarkStartTime; // @synthesize antiAddictDarkStartTime=_antiAddictDarkStartTime;
@property(nonatomic) _Bool openCheckAntiAddictSwitch; // @synthesize openCheckAntiAddictSwitch=_openCheckAntiAddictSwitch;
@property(copy, nonatomic) NSString *shopMiniAppPath; // @synthesize shopMiniAppPath=_shopMiniAppPath;
@property(copy, nonatomic) NSString *shopMiniAppId; // @synthesize shopMiniAppId=_shopMiniAppId;
@property(copy, nonatomic) NSString *finderLimitedModeConfig; // @synthesize finderLimitedModeConfig=_finderLimitedModeConfig;
@property(nonatomic) _Bool checkVideoEditFromMiaoJian; // @synthesize checkVideoEditFromMiaoJian=_checkVideoEditFromMiaoJian;
@property(copy, nonatomic) NSString *miaojianMetaKey; // @synthesize miaojianMetaKey=_miaojianMetaKey;
@property(nonatomic) _Bool dynamicFinderLiveEntryOnTopSearch; // @synthesize dynamicFinderLiveEntryOnTopSearch=_dynamicFinderLiveEntryOnTopSearch;
@property(nonatomic) _Bool openShareListFeedsIgnoreLimited; // @synthesize openShareListFeedsIgnoreLimited=_openShareListFeedsIgnoreLimited;
@property(nonatomic) _Bool dynamicFinderWXProfileAuthInfoSwitch; // @synthesize dynamicFinderWXProfileAuthInfoSwitch=_dynamicFinderWXProfileAuthInfoSwitch;
@property(nonatomic) _Bool dynamicFinderLiveNewEntranceSwitch; // @synthesize dynamicFinderLiveNewEntranceSwitch=_dynamicFinderLiveNewEntranceSwitch;
@property(nonatomic) _Bool showWindowProduct; // @synthesize showWindowProduct=_showWindowProduct;
@property(copy, nonatomic) NSString *miaoJianAppstoreSchemeSameStyle; // @synthesize miaoJianAppstoreSchemeSameStyle=_miaoJianAppstoreSchemeSameStyle;
@property(copy, nonatomic) NSString *miaoJianUniversalLink; // @synthesize miaoJianUniversalLink=_miaoJianUniversalLink;
@property(copy, nonatomic) NSString *miaoJianAppstoreSchemePublishEntry; // @synthesize miaoJianAppstoreSchemePublishEntry=_miaoJianAppstoreSchemePublishEntry;
@property(copy, nonatomic) NSString *miaoJianAppId; // @synthesize miaoJianAppId=_miaoJianAppId;
@property(nonatomic) long long prefetchFilterMinFeedCount; // @synthesize prefetchFilterMinFeedCount=_prefetchFilterMinFeedCount;
@property(nonatomic) unsigned long long cropFullFeedHeightMaxResolution; // @synthesize cropFullFeedHeightMaxResolution=_cropFullFeedHeightMaxResolution;
@property(nonatomic) _Bool useLiveNearPeople; // @synthesize useLiveNearPeople=_useLiveNearPeople;
@property(copy, nonatomic) NSString *thumbCompressResolution; // @synthesize thumbCompressResolution=_thumbCompressResolution;
@property(nonatomic) unsigned long long nearByVCCacheTimestamp; // @synthesize nearByVCCacheTimestamp=_nearByVCCacheTimestamp;
@property(copy, nonatomic) NSString *vEditorAppId; // @synthesize vEditorAppId=_vEditorAppId;
@property(nonatomic) unsigned long long postTextMaxLimit; // @synthesize postTextMaxLimit=_postTextMaxLimit;
@property(copy, nonatomic) NSString *mentionInputStopTokenList; // @synthesize mentionInputStopTokenList=_mentionInputStopTokenList;
@property(copy, nonatomic) NSString *topicInputStopTokenList; // @synthesize topicInputStopTokenList=_topicInputStopTokenList;
@property(copy, nonatomic) NSString *originalCertificateUrl; // @synthesize originalCertificateUrl=_originalCertificateUrl;
@property(nonatomic) _Bool refuseAllPrivateMsgSwitch; // @synthesize refuseAllPrivateMsgSwitch=_refuseAllPrivateMsgSwitch;
@property(copy, nonatomic) NSString *extMiniappPrefix; // @synthesize extMiniappPrefix=_extMiniappPrefix;
@property(retain, nonatomic) NSMutableDictionary *functionSpamDic; // @synthesize functionSpamDic=_functionSpamDic;
@property(nonatomic) unsigned long long maxPreloadTaskCount; // @synthesize maxPreloadTaskCount=_maxPreloadTaskCount;
@property(nonatomic) _Bool commentToProfile; // @synthesize commentToProfile=_commentToProfile;
@property(nonatomic) unsigned long long POIJumpType; // @synthesize POIJumpType=_POIJumpType;
@property(nonatomic) _Bool dynamicFinderSwitch; // @synthesize dynamicFinderSwitch=_dynamicFinderSwitch;
@property(nonatomic) _Bool preFetchStreamSwitch; // @synthesize preFetchStreamSwitch=_preFetchStreamSwitch;
@property(nonatomic) unsigned long long uploadLargeFileSize; // @synthesize uploadLargeFileSize=_uploadLargeFileSize;
@property(nonatomic) _Bool statsReportOpenController; // @synthesize statsReportOpenController=_statsReportOpenController;
@property(nonatomic) _Bool markReadOpenController; // @synthesize markReadOpenController=_markReadOpenController;
@property(nonatomic) _Bool useLowCompressMethod; // @synthesize useLowCompressMethod=_useLowCompressMethod;
@property(nonatomic) unsigned long long coverFrameRate; // @synthesize coverFrameRate=_coverFrameRate;
@property(copy, nonatomic) NSString *profileCompressResolution; // @synthesize profileCompressResolution=_profileCompressResolution;
@property(copy, nonatomic) NSString *headCompressResolution; // @synthesize headCompressResolution=_headCompressResolution;
@property(copy, nonatomic) NSString *feedCompressResolution; // @synthesize feedCompressResolution=_feedCompressResolution;
@property(nonatomic) double thumbMaxSize; // @synthesize thumbMaxSize=_thumbMaxSize;
@property(nonatomic) double photoMaxSize; // @synthesize photoMaxSize=_photoMaxSize;
@property(nonatomic) double musicImageCompressRate; // @synthesize musicImageCompressRate=_musicImageCompressRate;
@property(nonatomic) double thumbImageCompressRate; // @synthesize thumbImageCompressRate=_thumbImageCompressRate;
@property(nonatomic) double coverImageCompressRate; // @synthesize coverImageCompressRate=_coverImageCompressRate;
@property(nonatomic) double profileImageCompressRate; // @synthesize profileImageCompressRate=_profileImageCompressRate;
@property(nonatomic) double headImageCompressRate; // @synthesize headImageCompressRate=_headImageCompressRate;
@property(nonatomic) double feedImageCompressRate; // @synthesize feedImageCompressRate=_feedImageCompressRate;
@property(nonatomic) _Bool enableShowFinderCommentBlacklist; // @synthesize enableShowFinderCommentBlacklist=_enableShowFinderCommentBlacklist;
@property(nonatomic) _Bool enableShowSuggestTagView; // @synthesize enableShowSuggestTagView=_enableShowSuggestTagView;
@property(nonatomic) unsigned long long maxMentionSbCount; // @synthesize maxMentionSbCount=_maxMentionSbCount;
@property(nonatomic) unsigned long long maxTopicCount; // @synthesize maxTopicCount=_maxTopicCount;
- (_Bool)firstPrefetchIgnoreIntevalConf;
- (void)parseFunctionSpamConfig;
- (void)updateMentionStopToken;
- (void)updateTopicStopToken;
- (id)getConfigStringForKey:(id)arg1 defaultString:(id)arg2;
- (void)updateDynamicConfig;
- (id)init;

@end

