//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMFinderLiveFansGroupMemberSectionInfo, MMFinderLiveTask, MMFinderLiveTaskId, NSData;

@interface MMFinderLiveFansGroupMemberLogic : NSObject
{
    _Bool _isFetching;
    unsigned int _continueFlag;
    MMFinderLiveTaskId *_taskId;
    MMFinderLiveFansGroupMemberSectionInfo *_memberSectionInfo;
    NSData *_lastBuffer;
    CDUnknownBlockType _completion;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) _Bool isFetching; // @synthesize isFetching=_isFetching;
@property(nonatomic) unsigned int continueFlag; // @synthesize continueFlag=_continueFlag;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(retain, nonatomic) MMFinderLiveFansGroupMemberSectionInfo *memberSectionInfo; // @synthesize memberSectionInfo=_memberSectionInfo;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(readonly, nonatomic) _Bool isSelfAnchor;
@property(readonly, nonatomic) MMFinderLiveTask *liveTask;
- (_Bool)fetchFansGroupMemberList:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithTaskId:(id)arg1;

@end

