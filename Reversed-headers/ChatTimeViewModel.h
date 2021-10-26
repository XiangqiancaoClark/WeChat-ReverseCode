//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseChatViewModel.h"

@class NSString, ReaderMessageFolder;

@interface ChatTimeViewModel : BaseChatViewModel
{
    NSString *m_timeText;
    double m_labelWidth;
    _Bool m_rightButtonANewLine;
    double m_rightButtonHeight;
    double m_rightButtonWidth;
    struct CGPoint m_rightButtonOrigin;
    double _showingTime;
    ReaderMessageFolder *_messageFolder;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ReaderMessageFolder *messageFolder; // @synthesize messageFolder=_messageFolder;
@property(nonatomic) double showingTime; // @synthesize showingTime=_showingTime;
@property(readonly, nonatomic) struct CGPoint rightButtonOrigin; // @synthesize rightButtonOrigin=m_rightButtonOrigin;
@property(readonly, nonatomic) double rightButtonWidth; // @synthesize rightButtonWidth=m_rightButtonWidth;
@property(readonly, nonatomic) double rightButtonHeight; // @synthesize rightButtonHeight=m_rightButtonHeight;
@property(readonly, nonatomic) _Bool rightButtonANewLine; // @synthesize rightButtonANewLine=m_rightButtonANewLine;
@property(readonly, nonatomic) double labelWidth; // @synthesize labelWidth=m_labelWidth;
@property(readonly, nonatomic) NSString *timeText; // @synthesize timeText=m_timeText;
- (void)updateLayouts;
- (_Bool)isRightButtonNeedANewLine;
- (struct CGSize)measure:(struct CGSize)arg1;
- (id)cellViewClassName;
- (id)init;

@end
