//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMComponent.h"

#import "IStrangerContactMgrExt-Protocol.h"

@class FavActivityIndicatorView, FavAttributeCPLabel, MMUIButton, MMUILabel, NSString, UIImageView;

@interface MMFavNameComponent : MMComponent <IStrangerContactMgrExt>
{
    FavAttributeCPLabel *_nameLabel;
    MMUILabel *_nameTailLabel;
    MMUIButton *_failButtom;
    FavActivityIndicatorView *_activityIndicator;
    UIImageView *_logoImgView;
    _Bool _uploadStatusShowed;
}

+ (double)calHeightWithComData:(id)arg1;
- (void).cxx_destruct;
- (void)onStrangerContactUpdated:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setHighlightContent:(id)arg1 Keywords:(id)arg2;
- (void)reUpload;
- (id)attachSourceLabel:(id)arg1;
- (void)showFTSInfoInTimeLabel:(id)arg1;
- (void)configLabel;
- (void)dealloc;
- (void)configContentLayout;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

