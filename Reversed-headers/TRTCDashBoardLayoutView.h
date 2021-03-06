//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UITextView;

@interface TRTCDashBoardLayoutView : UIView
{
    NSString *_status;
    NSString *_log;
    UITextView *_statusView;
    UITextView *_logView;
    _Bool _logEnabled;
    struct UIEdgeInsets _margin;
}

- (void).cxx_destruct;
@property(nonatomic) struct UIEdgeInsets margin; // @synthesize margin=_margin;
@property(nonatomic) _Bool logEnabled; // @synthesize logEnabled=_logEnabled;
@property(copy, nonatomic) NSString *status;
@property(copy, nonatomic) NSString *log;
- (void)_layout;
- (id)createTextView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 logEnabled:(_Bool)arg2;

@end

