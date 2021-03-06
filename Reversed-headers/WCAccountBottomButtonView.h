//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSMutableDictionary;

@interface WCAccountBottomButtonView : UIView
{
    _Bool _autoExpandHitArea;
    _Bool _needsLayoutButtons;
    NSMutableDictionary *_buttonPointerToHandlerDict;
    NSMutableArray *_buttonArray;
}

+ (id)generateSeparatorLine;
+ (id)generateBottomButton;
- (void).cxx_destruct;
@property(nonatomic) _Bool needsLayoutButtons; // @synthesize needsLayoutButtons=_needsLayoutButtons;
@property(retain, nonatomic) NSMutableArray *buttonArray; // @synthesize buttonArray=_buttonArray;
@property(retain, nonatomic) NSMutableDictionary *buttonPointerToHandlerDict; // @synthesize buttonPointerToHandlerDict=_buttonPointerToHandlerDict;
@property(nonatomic) _Bool autoExpandHitArea; // @synthesize autoExpandHitArea=_autoExpandHitArea;
- (void)onTapButton:(id)arg1;
- (void)addButtonWithTitle:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGSize)layoutButtonsAndSeparatorsWithWidth:(double)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

