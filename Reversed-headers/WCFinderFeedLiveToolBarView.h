//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "ILinkEventExt-Protocol.h"

@class MMUIButton, NSString, UILabel;
@protocol WCFinderFeedToolbarActionDelegate;

@interface WCFinderFeedLiveToolBarView : UIView <ILinkEventExt>
{
    id <WCFinderFeedToolbarActionDelegate> _delegate;
    MMUIButton *_forwardBtn;
    UILabel *_shareTipsLabel;
    UILabel *_audienceNumTipsLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *audienceNumTipsLabel; // @synthesize audienceNumTipsLabel=_audienceNumTipsLabel;
@property(retain, nonatomic) UILabel *shareTipsLabel; // @synthesize shareTipsLabel=_shareTipsLabel;
@property(retain, nonatomic) MMUIButton *forwardBtn; // @synthesize forwardBtn=_forwardBtn;
@property(nonatomic) __weak id <WCFinderFeedToolbarActionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didClickShareBtn:(id)arg1;
- (void)updateAudienceCount:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

