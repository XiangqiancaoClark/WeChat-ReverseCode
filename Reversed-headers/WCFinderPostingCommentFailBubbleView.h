//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCFinderTimelineBubbleView.h"

@class UIButton, WCFinderComment;
@protocol WCFinderPostingCommentFailBubbleViewDelegate;

@interface WCFinderPostingCommentFailBubbleView : WCFinderTimelineBubbleView
{
    id <WCFinderPostingCommentFailBubbleViewDelegate> _delegate;
    WCFinderComment *_commentFailInfo;
    UIButton *_backGroundButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *backGroundButton; // @synthesize backGroundButton=_backGroundButton;
@property(retain, nonatomic) WCFinderComment *commentFailInfo; // @synthesize commentFailInfo=_commentFailInfo;
@property(nonatomic) __weak id <WCFinderPostingCommentFailBubbleViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)clickButtonAction;
- (void)setupUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

