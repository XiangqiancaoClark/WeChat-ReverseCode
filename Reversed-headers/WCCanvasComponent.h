//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class NSIndexPath, UIButton, WCCanvasComponentItem, WCCanvasReportMgr, WCDataItem;
@protocol WCCanvasComponentDelegate;

@interface WCCanvasComponent : MMUIView
{
    int _type;
    WCCanvasComponentItem *_componentItem;
    WCDataItem *_dataItem;
    NSIndexPath *_indexPath;
    long long _orientation;
    id <WCCanvasComponentDelegate> _delegate;
    UIButton *_bgButton;
}

+ (double)calcHeightForCanvasItem:(id)arg1 withMaxWidth:(double)arg2 dataItem:(id)arg3 orientation:(long long)arg4;
+ (struct CGSize)calcSizeForCanvasItem:(id)arg1 dataItem:(id)arg2 orientation:(long long)arg3;
+ (id)componentWithItemInfo:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *bgButton; // @synthesize bgButton=_bgButton;
@property(nonatomic) __weak id <WCCanvasComponentDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(retain, nonatomic) WCCanvasComponentItem *componentItem; // @synthesize componentItem=_componentItem;
@property(nonatomic) int type; // @synthesize type=_type;
- (id)description;
- (void)notifyToShowFloatComponent;
- (_Bool)hasFloatComponentInfo;
- (void)setLayoutComponentBorder;
- (void)setButtonComponentTitleColor:(id)arg1 withDuration:(double)arg2;
- (void)setComponentStyleWithBackgroundColor:(id)arg1 textColor:(id)arg2 contentSize:(struct CGSize)arg3;
- (void)getComponentStyleWithBackgroundColor:(id *)arg1 textColor:(id *)arg2;
- (void)setComponentHidden:(_Bool)arg1 animation:(_Bool)arg2;
- (_Bool)checkAndTriggerToShowFloatView:(double)arg1;
- (_Bool)isComponentDisplayed;
- (_Bool)isComponentDisplayMoreThanHalf;
- (id)fetchDestComponentForSpecialAnim;
- (_Bool)isComponentContentViewScrolledToTop;
- (void)setComponentContentViewScrollEnabled:(_Bool)arg1;
- (_Bool)isInHomeIndicatorArea;
- (id)fetchSphereCurrentSnapshotAndNewFrame:(struct CGRect *)arg1;
- (id)fetchSphereOriginSnapshotAndNewFrame:(struct CGRect *)arg1;
- (void)updatebgButton;
- (void)tryToFireComponentClickEventWithSource:(unsigned long long)arg1;
- (void)onClickComponentTouchButton:(id)arg1 forEvent:(id)arg2;
- (_Bool)isBgMoreBlack;
@property(readonly, nonatomic) _Bool shouldUseSnsCdnDownload;
@property(readonly, nonatomic) unsigned int downloadScene;
@property(readonly, nonatomic) WCCanvasReportMgr *reportMgr;
- (_Bool)shouldVideoComponentTryToPlay;
- (void)tryToSetVideoPlayingState:(_Bool)arg1;
- (void)resetSightViewAudioState:(_Bool)arg1;
- (void)componentWillEnterForeground;
- (void)componentDidEnterBackground;
- (void)componentWillStopState:(_Bool)arg1;
- (void)componentWillResumeState:(_Bool)arg1;
- (void)componentWillDisappearInMainScreen:(_Bool)arg1;
- (void)componentAppearFactorChagneInMainScreen;
- (void)componentDidFullyAppearInMainScreen:(_Bool)arg1;
- (void)componentWillAppearInMainScreen:(_Bool)arg1;
- (void)willRotateToOrientation:(long long)arg1 duration:(double)arg2;
- (double)calcAppearFactor;
- (_Bool)hasPreloadWebViewInScrollGroupComponent;
- (double)getPreloadWebViewBottomInScrollGroupComponent;
- (double)fetchScrollDownAreaDelayTime;
- (_Bool)shouldShowScrollDownArea;
- (void)didBottomSwipeActionComplete;
- (_Bool)shouldAllowBottomSwipeAction;
- (_Bool)shouldForbidDelegateShowFloatActionBtn;
- (_Bool)shouldForbidDelegateShowArrowDown;
- (struct CGSize)calcCurrentSize;
- (void)configureWithCanvasItem:(id)arg1 dataItem:(id)arg2 orientation:(long long)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

