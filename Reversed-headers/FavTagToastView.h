//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "MMInputToolViewExt-Protocol.h"

@class FavoritesItem, MMTimer, NSString, UIButton, UILabel;

@interface FavTagToastView : UIView <MMInputToolViewExt>
{
    _Bool _bHidden;
    FavoritesItem *_favItem;
    UIButton *_contentView;
    MMTimer *_timer;
    UILabel *_tipsLabel;
    UILabel *_addTagLabel;
}

+ (id)getCurrentTopViewController;
+ (void)showAddFavTagFinishToastWith:(id)arg1;
+ (void)showFavTagToastWith:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *addTagLabel; // @synthesize addTagLabel=_addTagLabel;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) MMTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) _Bool bHidden; // @synthesize bHidden=_bHidden;
@property(retain, nonatomic) UIButton *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) FavoritesItem *favItem; // @synthesize favItem=_favItem;
- (void)onHiddenRecordOperateView;
- (void)onShowRecordOperateView;
- (void)onToolViewChangeToMode:(unsigned long long)arg1 Height:(double)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)addTag;
- (void)hideToastWithAnimation:(_Bool)arg1;
- (void)hideToast;
- (unsigned long long)supportedInterfaceOrientations;
- (void)removeNotification;
- (void)addNotification;
- (void)initView;
- (void)dealloc;
- (void)setTips:(id)arg1;
- (int)getEditTimes;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
