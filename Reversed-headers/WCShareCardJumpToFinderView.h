//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MMUIButton, MMUILabel, MMWebImageView, WCShareCardJumpToFinderViewData;
@protocol WCShareCardJumpToFinderButtonDelegate;

@interface WCShareCardJumpToFinderView : UIView
{
    WCShareCardJumpToFinderViewData *_data;
    id <WCShareCardJumpToFinderButtonDelegate> _delegate;
    MMUIButton *_jumpButton;
    MMWebImageView *_leftIconImageView;
    MMWebImageView *_rightIconImageView;
    MMUILabel *_buttonLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *buttonLabel; // @synthesize buttonLabel=_buttonLabel;
@property(retain, nonatomic) MMWebImageView *rightIconImageView; // @synthesize rightIconImageView=_rightIconImageView;
@property(retain, nonatomic) MMWebImageView *leftIconImageView; // @synthesize leftIconImageView=_leftIconImageView;
@property(retain, nonatomic) MMUIButton *jumpButton; // @synthesize jumpButton=_jumpButton;
@property(nonatomic) __weak id <WCShareCardJumpToFinderButtonDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCShareCardJumpToFinderViewData *data; // @synthesize data=_data;
- (void)onContentButtonClick;
- (_Bool)hasRightIconView;
- (_Bool)hasLeftIconView;
- (void)setAccessibilityLabelToView:(id)arg1 fieldItem:(id)arg2;
- (void)updateContentButton;
- (void)adjustView;
- (void)updateJumpToFinderView;
- (void)updateView;
- (double)getWidth;
- (id)initViewWithCardInfo:(id)arg1 delegate:(id)arg2;

@end

