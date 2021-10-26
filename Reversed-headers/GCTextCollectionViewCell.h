//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GCChatBaseCell.h"

#import "ILinkEventExt-Protocol.h"

@class NSMutableDictionary, NSString, RichTextView, UILabel;

@interface GCTextCollectionViewCell : GCChatBaseCell <ILinkEventExt>
{
    NSMutableDictionary *_linkJumpInfoDict;
    RichTextView *_richTextView;
    UILabel *_sysTitleLabel;
}

+ (id)getRichTextViewConfig:(id)arg1;
+ (unsigned long long)parseTypeForContentModel:(id)arg1;
+ (struct CGSize)sizeForTextModel:(id)arg1 font:(id)arg2 outArrStyles:(id *)arg3;
+ (void)onCalculatLayoutInfo:(id)arg1;
+ (id)centerTipTextLayoutWithMarginInsets:(struct UIEdgeInsets)arg1;
+ (id)textLayoutInfoForTextCellModel:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *sysTitleLabel; // @synthesize sysTitleLabel=_sysTitleLabel;
@property(retain, nonatomic) RichTextView *richTextView; // @synthesize richTextView=_richTextView;
@property(retain, nonatomic) NSMutableDictionary *linkJumpInfoDict; // @synthesize linkJumpInfoDict=_linkJumpInfoDict;
- (_Bool)handleLongPressAt:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (id)linkBlockForUrl:(id)arg1;
- (void)initRichTextView;
- (void)configureWithCellModel:(id)arg1;
- (id)textCellModel;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
