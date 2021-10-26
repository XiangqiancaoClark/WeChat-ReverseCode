//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class MMWebImageView, RichTextView, UIButton, UIImageView, UILabel, UIView;
@protocol WCFinderTopicListSectionHeaderViewDelegate;

@interface WCFinderTopicListSectionHeaderView : UICollectionReusableView
{
    id <WCFinderTopicListSectionHeaderViewDelegate> _delegate;
    UIButton *_containerView;
    MMWebImageView *_headerImageView;
    UIView *_wordContainer;
    RichTextView *_topicTitleLabel;
    UILabel *_topicSubTitleLabel;
    UILabel *_topicCountLabel;
    UIImageView *_arrowImageView;
}

+ (id)genTopicTitleWithType:(unsigned long long)arg1 topicTitle:(id)arg2 topicLocation:(id)arg3;
+ (double)getFadeInStartOffsetWithTopicType:(unsigned long long)arg1 imageUrl:(id)arg2 topicTitle:(id)arg3 topicLocation:(id)arg4 topicDetailLocation:(id)arg5 topicCount:(unsigned long long)arg6 totalWatchCount:(unsigned long long)arg7;
+ (double)getTopicListSectionHeaderViewHeightWithTopicType:(unsigned long long)arg1 imageUrl:(id)arg2 topicTitle:(id)arg3 topicLocation:(id)arg4 topicDetailLocation:(id)arg5 topicCount:(unsigned long long)arg6 totalWatchCount:(unsigned long long)arg7 width:(double)arg8;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UILabel *topicCountLabel; // @synthesize topicCountLabel=_topicCountLabel;
@property(retain, nonatomic) UILabel *topicSubTitleLabel; // @synthesize topicSubTitleLabel=_topicSubTitleLabel;
@property(retain, nonatomic) RichTextView *topicTitleLabel; // @synthesize topicTitleLabel=_topicTitleLabel;
@property(retain, nonatomic) UIView *wordContainer; // @synthesize wordContainer=_wordContainer;
@property(retain, nonatomic) MMWebImageView *headerImageView; // @synthesize headerImageView=_headerImageView;
@property(retain, nonatomic) UIButton *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak id <WCFinderTopicListSectionHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onHeaderViewTapAction;
- (void)setupSubviews;
- (_Bool)needsShowLocationArrowWithType:(unsigned long long)arg1 topicLocation:(id)arg2;
- (void)updateTopicType:(unsigned long long)arg1 imageUrl:(id)arg2 topicTitle:(id)arg3 topicLocation:(id)arg4 topicDetailLocation:(id)arg5 topicCount:(unsigned long long)arg6 totalWatchCount:(unsigned long long)arg7;
- (id)accessibilityLabel;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end
