//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUILabel.h"

@class UIColor, UIView;
@protocol MMCopyLabelDelegate;

@interface MMCopyLabel : MMUILabel
{
    UIView<MMCopyLabelDelegate> *_delegate;
    UIColor *_highlightedBGColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *highlightedBGColor; // @synthesize highlightedBGColor=_highlightedBGColor;
@property(nonatomic) __weak UIView<MMCopyLabelDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)longPressToCopy:(id)arg1;
- (void)menuItemHidden:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
