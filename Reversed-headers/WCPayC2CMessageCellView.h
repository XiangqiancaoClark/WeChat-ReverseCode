//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseMessageCellView.h"

@class NSMutableDictionary, NSString, UIImageView, UIView, WCPayC2CMessageViewModel, WCPayWebImageView;

@interface WCPayC2CMessageCellView : WCPayBaseMessageCellView
{
    WCPayWebImageView *_showResourceImageView;
    UIImageView *_showResourceMaskView;
    NSString *_bgImageName;
    NSString *_bgHighlightImageName;
    NSString *_maskImageName;
    NSString *_maskHighlightImageName;
    NSMutableDictionary *_showResourceMaskImageViewCache;
    UIView *_showResourceBgView;
    WCPayWebImageView *_corpLogoIcon;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayWebImageView *corpLogoIcon; // @synthesize corpLogoIcon=_corpLogoIcon;
@property(retain, nonatomic) UIView *showResourceBgView; // @synthesize showResourceBgView=_showResourceBgView;
@property(retain, nonatomic) NSMutableDictionary *showResourceMaskImageViewCache; // @synthesize showResourceMaskImageViewCache=_showResourceMaskImageViewCache;
@property(retain, nonatomic) NSString *maskHighlightImageName; // @synthesize maskHighlightImageName=_maskHighlightImageName;
@property(retain, nonatomic) NSString *maskImageName; // @synthesize maskImageName=_maskImageName;
@property(retain, nonatomic) NSString *bgHighlightImageName; // @synthesize bgHighlightImageName=_bgHighlightImageName;
@property(retain, nonatomic) NSString *bgImageName; // @synthesize bgImageName=_bgImageName;
@property(retain, nonatomic) UIImageView *showResourceMaskView; // @synthesize showResourceMaskView=_showResourceMaskView;
@property(retain, nonatomic) WCPayWebImageView *showResourceImageView; // @synthesize showResourceImageView=_showResourceImageView;
- (void)onTouchUpInside;
- (void)initSourceViewInside;
- (id)generateMaskImage:(id)arg1 isSender:(_Bool)arg2;
- (void)updateHbSourceImageView;
- (void)updateBgImageView:(_Bool)arg1;
- (void)updateDescLabel;
- (void)updateTitleLabel;
- (void)updateIconView;
- (_Bool)isHBC2CHandledMsg;
- (_Bool)isHBC2CMsg;
- (_Bool)isAAC2CHandledMsg;
- (_Bool)isAAC2CMsg;
- (void)updateStatus;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) WCPayC2CMessageViewModel *viewModel; // @dynamic viewModel;

@end

