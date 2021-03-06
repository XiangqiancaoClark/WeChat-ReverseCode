//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableDictionary;

@interface WCFinderLayoutView : UIView
{
    long long _axis;
    double _spacing;
    NSMutableDictionary *_arrangeViews;
    struct CGSize _contentSize;
    struct CGSize _preSize;
    struct UIEdgeInsets _seperatorInset;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize preSize; // @synthesize preSize=_preSize;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(retain, nonatomic) NSMutableDictionary *arrangeViews; // @synthesize arrangeViews=_arrangeViews;
@property(nonatomic) double spacing; // @synthesize spacing=_spacing;
@property(nonatomic) struct UIEdgeInsets seperatorInset; // @synthesize seperatorInset=_seperatorInset;
@property(nonatomic) long long axis; // @synthesize axis=_axis;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layout;
- (void)removeAllArrangeSubviews;
- (void)removeArrangeSubview:(id)arg1;
- (void)addArrangedSubview:(id)arg1 priority:(long long)arg2;
- (void)addArrangedSubview:(id)arg1;
- (void)layoutSubviews;
- (void)setNeedsLayout;
- (id)initWithFrame:(struct CGRect)arg1;

@end

