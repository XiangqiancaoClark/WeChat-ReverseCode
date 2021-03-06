//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIHalfScreenViewController.h"

#import "ILinkEventExt-Protocol.h"

@class MMUIButton, MMUILabel, NSString, RichTextView, UIScrollView;
@protocol WCFinderEventDescriptionViewControllerDelegate;

@interface WCFinderEventDescriptionViewController : MMUIHalfScreenViewController <ILinkEventExt>
{
    id <WCFinderEventDescriptionViewControllerDelegate> _descriptionDelegate;
    MMUIButton *_exitBtn;
    MMUILabel *_titleLabel;
    UIScrollView *_descContainer;
    RichTextView *_descTextView;
    RichTextView *_statementView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) RichTextView *statementView; // @synthesize statementView=_statementView;
@property(retain, nonatomic) RichTextView *descTextView; // @synthesize descTextView=_descTextView;
@property(retain, nonatomic) UIScrollView *descContainer; // @synthesize descContainer=_descContainer;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUIButton *exitBtn; // @synthesize exitBtn=_exitBtn;
@property(retain, nonatomic) id <WCFinderEventDescriptionViewControllerDelegate> descriptionDelegate; // @synthesize descriptionDelegate=_descriptionDelegate;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onExitBtnClicked;
- (double)heightWithEventInfo:(id)arg1;
- (void)updateWithEventInfo:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

