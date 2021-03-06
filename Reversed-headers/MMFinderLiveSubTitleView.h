//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "MMLiveTaskMgrExt-Protocol.h"

@class MMFinderLiveSubTitleModel, MMFinderLiveSubTitleViewModel, MMLiveTaskId, NSString, RichTextView;

@interface MMFinderLiveSubTitleView : UIView <MMLiveTaskMgrExt>
{
    _Bool _hasContent;
    _Bool _isLiveMinimized;
    MMLiveTaskId *_taskId;
    RichTextView *_subTitleTextView;
    MMFinderLiveSubTitleModel *_subTitleModel;
    MMFinderLiveSubTitleViewModel *_subTitleViewModel;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isLiveMinimized; // @synthesize isLiveMinimized=_isLiveMinimized;
@property(nonatomic) _Bool hasContent; // @synthesize hasContent=_hasContent;
@property(retain, nonatomic) MMFinderLiveSubTitleViewModel *subTitleViewModel; // @synthesize subTitleViewModel=_subTitleViewModel;
@property(retain, nonatomic) MMFinderLiveSubTitleModel *subTitleModel; // @synthesize subTitleModel=_subTitleModel;
@property(retain, nonatomic) RichTextView *subTitleTextView; // @synthesize subTitleTextView=_subTitleTextView;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
- (void)onExtendEnded:(id)arg1;
- (void)onMinimizeStarted:(id)arg1;
- (void)onExtendFromCollapseAnimationDidEndWithLiveTask:(id)arg1;
- (void)onDismissMinimizeWindowDidEnd:(id)arg1;
- (void)onShowMinimizeWindowWillStart:(id)arg1;
- (void)onMinimizeInteractiveWillEnd:(id)arg1;
- (void)onCollapseAnimationWillStart:(id)arg1;
- (void)updateDisplayAlpha;
- (id)getCurrentSubTitleTextAttributeObj;
- (id)getCurrentSubTitleFont;
- (id)getCurrentSubTitleUIConfigModel;
- (void)createSubTitleModel;
- (void)updateSubTitleViewOrigin;
- (void)layoutSubTitleView;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)unRegisterExtensions;
- (void)registerExtensions;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

