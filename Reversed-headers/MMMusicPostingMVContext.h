//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MMImageLoaderObserver-Protocol.h"

@class MMMusicMVModel, MVStat22259, NSMutableArray, NSMutableDictionary, NSString;

@interface MMMusicPostingMVContext : NSObject <MMImageLoaderObserver>
{
    _Bool _hasEditedInFixMode;
    _Bool _hasEditedInFlexMode;
    MMMusicMVModel *_mvModel;
    MVStat22259 *_editInfo;
    NSMutableDictionary *_localVideoToUploadDic;
    CDUnknownBlockType _commitCompletion;
    NSMutableArray *_localVideoToUploadArray;
    NSMutableArray *_localPicToUploadArray;
    NSString *_baseDraftLocalId;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasEditedInFlexMode; // @synthesize hasEditedInFlexMode=_hasEditedInFlexMode;
@property(nonatomic) _Bool hasEditedInFixMode; // @synthesize hasEditedInFixMode=_hasEditedInFixMode;
@property(retain, nonatomic) NSString *baseDraftLocalId; // @synthesize baseDraftLocalId=_baseDraftLocalId;
@property(retain, nonatomic) NSMutableArray *localPicToUploadArray; // @synthesize localPicToUploadArray=_localPicToUploadArray;
@property(retain, nonatomic) NSMutableArray *localVideoToUploadArray; // @synthesize localVideoToUploadArray=_localVideoToUploadArray;
@property(copy, nonatomic) CDUnknownBlockType commitCompletion; // @synthesize commitCompletion=_commitCompletion;
@property(retain, nonatomic) NSMutableDictionary *localVideoToUploadDic; // @synthesize localVideoToUploadDic=_localVideoToUploadDic;
@property(retain, nonatomic) MVStat22259 *editInfo; // @synthesize editInfo=_editInfo;
@property(retain, nonatomic) MMMusicMVModel *mvModel; // @synthesize mvModel=_mvModel;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)handleUploadingFailureWithLocalVideoId:(id)arg1;
- (void)removeUploadedLocalVideoWithId:(id)arg1;
- (void)finishCommitmentWithSavedLocalThumbFilename:(id)arg1;
- (void)finishCommitmentWithCalculatedOriginality:(float)arg1 andCompletion:(float)arg2;
- (void)realFinishCommitmentIfCan;
- (void)calculateOriginalInfoAndCompletionInfo;
- (void)commitAsDraft:(_Bool)arg1 customCover:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)firstEditedTrackItem;
- (void)addLocalVideoToUploadIfNeeded:(id)arg1;
- (void)discardPostingAtIndex:(unsigned long long)arg1;
@property(nonatomic) _Bool hasEdited;
- (unsigned long long)dirtyCount;
- (_Bool)isDirty;
- (_Bool)isReadyToPost;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

