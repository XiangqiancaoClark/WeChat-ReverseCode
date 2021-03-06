//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MMFinderLiveSubTitleSynchronizeExt-Protocol.h"

@class NSString;

@interface MMFinderLiveSubTitleModel : NSObject <MMFinderLiveSubTitleSynchronizeExt>
{
    CDUnknownBlockType _updateBlock;
    long long _currentIndex;
    long long _currentSubTitleType;
    NSString *_chnSubTitle;
    NSString *_engSubTitle;
    long long _duration;
    long long _currentSubTitleStatus;
}

- (void).cxx_destruct;
@property(nonatomic) long long currentSubTitleStatus; // @synthesize currentSubTitleStatus=_currentSubTitleStatus;
@property(nonatomic) long long duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSString *engSubTitle; // @synthesize engSubTitle=_engSubTitle;
@property(copy, nonatomic) NSString *chnSubTitle; // @synthesize chnSubTitle=_chnSubTitle;
@property(nonatomic) long long currentSubTitleType; // @synthesize currentSubTitleType=_currentSubTitleType;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(copy, nonatomic) CDUnknownBlockType updateBlock; // @synthesize updateBlock=_updateBlock;
- (void)onSynchronizedFinderLiveSubTitle:(id)arg1;
- (void)unRegisterExtension;
- (void)registerExtension;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

