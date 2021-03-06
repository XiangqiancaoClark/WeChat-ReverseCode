//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "PBCoding-Protocol.h"

@class FinderMVInfo_ClientDraftInfo, MMMusicMVTrackItemLocalPic, MMMusicMVTrackItemLocalVideo, NSMutableArray, NSString, WCFinderDataItem;

@interface MMMusicMVTrackItem : NSObject <PBCoding, NSCopying>
{
    _Bool _bFlexibleClipGapItem;
    unsigned int timeLengthInMvMs;
    unsigned int isFirstUpload;
    int materialPosForReport;
    unsigned int _videoDuration;
    unsigned int _imageAnimationType;
    unsigned long long timeOffsetInMvMs;
    unsigned long long refObjectId;
    NSString *refNonceId;
    unsigned long long timeOffsetInClipMs;
    NSString *localObjectId;
    MMMusicMVTrackItemLocalVideo *localVideo;
    unsigned long long postingRefObjectId;
    NSString *postingRefNonceId;
    unsigned long long postingClipOffsetMs;
    unsigned long long postingVideoSource;
    NSMutableArray *featureList;
    unsigned long long mediaType;
    NSString *materialIdForReport;
    NSString *authorIdForReport;
    unsigned long long materialFromForReport;
    NSString *reqIdForReport;
    NSString *transitionId;
    unsigned long long _uploadState;
    MMMusicMVTrackItemLocalPic *_localPic;
    WCFinderDataItem *_dataItemForPreviewing;
    unsigned long long _previewingClipOffsetMs;
    NSString *_uuid;
    FinderMVInfo_ClientDraftInfo *_clientDraftInfo;
}

+ (void)initialize;
+ (void)PBArrayAdd_transitionId;
+ (void)PBArrayAdd_imageAnimationType;
+ (void)PBArrayAdd_reqIdForReport;
+ (void)PBArrayAdd_materialFromForReport;
+ (void)PBArrayAdd_materialPosForReport;
+ (void)PBArrayAdd_authorIdForReport;
+ (void)PBArrayAdd_materialIdForReport;
+ (void)PBArrayAdd_mediaType;
+ (void)PBArrayAdd_featureList;
+ (void)PBArrayAdd_isFirstUpload;
+ (void)PBArrayAdd_postingVideoSource;
+ (void)PBArrayAdd_postingClipOffsetMs;
+ (void)PBArrayAdd_postingRefNonceId;
+ (void)PBArrayAdd_postingRefObjectId;
+ (void)PBArrayAdd_localVideo;
+ (void)PBArrayAdd_localObjectId;
+ (void)PBArrayAdd_timeOffsetInClipMs;
+ (void)PBArrayAdd_refNonceId;
+ (void)PBArrayAdd_refObjectId;
+ (void)PBArrayAdd_timeLengthInMvMs;
+ (void)PBArrayAdd_timeOffsetInMvMs;
- (void).cxx_destruct;
@property(retain, nonatomic) FinderMVInfo_ClientDraftInfo *clientDraftInfo; // @synthesize clientDraftInfo=_clientDraftInfo;
@property(copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(nonatomic) unsigned int imageAnimationType; // @synthesize imageAnimationType=_imageAnimationType;
@property(nonatomic) unsigned int videoDuration; // @synthesize videoDuration=_videoDuration;
@property(nonatomic) _Bool bFlexibleClipGapItem; // @synthesize bFlexibleClipGapItem=_bFlexibleClipGapItem;
@property(nonatomic) unsigned long long previewingClipOffsetMs; // @synthesize previewingClipOffsetMs=_previewingClipOffsetMs;
@property(retain, nonatomic) WCFinderDataItem *dataItemForPreviewing; // @synthesize dataItemForPreviewing=_dataItemForPreviewing;
@property(retain, nonatomic) MMMusicMVTrackItemLocalPic *localPic; // @synthesize localPic=_localPic;
@property(nonatomic) unsigned long long uploadState; // @synthesize uploadState=_uploadState;
@property(retain, nonatomic) NSString *transitionId; // @synthesize transitionId;
@property(retain, nonatomic) NSString *reqIdForReport; // @synthesize reqIdForReport;
@property(nonatomic) unsigned long long materialFromForReport; // @synthesize materialFromForReport;
@property(nonatomic) int materialPosForReport; // @synthesize materialPosForReport;
@property(retain, nonatomic) NSString *authorIdForReport; // @synthesize authorIdForReport;
@property(retain, nonatomic) NSString *materialIdForReport; // @synthesize materialIdForReport;
@property(nonatomic) unsigned long long mediaType; // @synthesize mediaType;
@property(retain, nonatomic) NSMutableArray *featureList; // @synthesize featureList;
@property(nonatomic) unsigned int isFirstUpload; // @synthesize isFirstUpload;
@property(nonatomic) unsigned long long postingVideoSource; // @synthesize postingVideoSource;
@property(nonatomic) unsigned long long postingClipOffsetMs; // @synthesize postingClipOffsetMs;
@property(retain, nonatomic) NSString *postingRefNonceId; // @synthesize postingRefNonceId;
@property(nonatomic) unsigned long long postingRefObjectId; // @synthesize postingRefObjectId;
@property(retain, nonatomic) MMMusicMVTrackItemLocalVideo *localVideo; // @synthesize localVideo;
@property(retain, nonatomic) NSString *localObjectId; // @synthesize localObjectId;
@property(nonatomic) unsigned long long timeOffsetInClipMs; // @synthesize timeOffsetInClipMs;
@property(retain, nonatomic) NSString *refNonceId; // @synthesize refNonceId;
@property(nonatomic) unsigned long long refObjectId; // @synthesize refObjectId;
@property(nonatomic) unsigned int timeLengthInMvMs; // @synthesize timeLengthInMvMs;
@property(nonatomic) unsigned long long timeOffsetInMvMs; // @synthesize timeOffsetInMvMs;
@property(readonly, copy) NSString *description;
- (_Bool)imageAnimationTypeIsValidValue:(int)arg1;
- (unsigned long long)slowVideoLackTimeMs;
- (_Bool)isSlowVideo;
- (unsigned long long)currentClipOffsetMs;
- (id)currentRefNonceId;
- (unsigned long long)currentRefObjectId;
- (_Bool)isSvrMode;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)commonInit;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

