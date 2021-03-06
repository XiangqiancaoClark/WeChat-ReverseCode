//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "InputControllerDelegate-Protocol.h"
#import "MMQuickSendEmoticonViewDelegate-Protocol.h"

@class EmoticonBoardView, GameChatInputController, MMGrowTextView, MMQuickSendEmoticonView, MMUILabel, NSMutableArray, NSString, UIButton, UIColor, UIFont;
@protocol GameChatInputToolViewDelegate;

@interface GameChatInputToolView : UIView <InputControllerDelegate, MMQuickSendEmoticonViewDelegate>
{
    _Bool _showingInputView;
    EmoticonBoardView *_emoticonBoardView;
    unsigned long long _maxInputCharsCount;
    id <GameChatInputToolViewDelegate> _delegate;
    GameChatInputController *_inputController;
    UIColor *_pubbleInputBackColor;
    NSString *_plackHolderStr;
    UIFont *_textFont;
    unsigned long long _appearCountTipsCharsCount;
    long long _currentOrientation;
    NSString *_previousText;
    UIView *_pubbleInputView;
    UIView *_backGroundView;
    MMGrowTextView *_growTextView;
    MMUILabel *_countTipLabel;
    UIButton *_expressionButton;
    NSMutableArray *_scrollViewArr;
    NSString *_prePlaceHolderStr;
    MMQuickSendEmoticonView *_quickSendEmoticonView;
    NSString *_lastRequestEmoticonDesc;
}

+ (double)inputToolViewInitialHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *lastRequestEmoticonDesc; // @synthesize lastRequestEmoticonDesc=_lastRequestEmoticonDesc;
@property(retain, nonatomic) MMQuickSendEmoticonView *quickSendEmoticonView; // @synthesize quickSendEmoticonView=_quickSendEmoticonView;
@property(copy, nonatomic) NSString *prePlaceHolderStr; // @synthesize prePlaceHolderStr=_prePlaceHolderStr;
@property(retain, nonatomic) NSMutableArray *scrollViewArr; // @synthesize scrollViewArr=_scrollViewArr;
@property(retain, nonatomic) UIButton *expressionButton; // @synthesize expressionButton=_expressionButton;
@property(retain, nonatomic) MMUILabel *countTipLabel; // @synthesize countTipLabel=_countTipLabel;
@property(retain, nonatomic) MMGrowTextView *growTextView; // @synthesize growTextView=_growTextView;
@property(retain, nonatomic) UIView *backGroundView; // @synthesize backGroundView=_backGroundView;
@property(retain, nonatomic) UIView *pubbleInputView; // @synthesize pubbleInputView=_pubbleInputView;
@property(copy, nonatomic) NSString *previousText; // @synthesize previousText=_previousText;
@property(nonatomic) long long currentOrientation; // @synthesize currentOrientation=_currentOrientation;
@property(nonatomic) unsigned long long appearCountTipsCharsCount; // @synthesize appearCountTipsCharsCount=_appearCountTipsCharsCount;
@property(retain, nonatomic) UIFont *textFont; // @synthesize textFont=_textFont;
@property(copy, nonatomic) NSString *plackHolderStr; // @synthesize plackHolderStr=_plackHolderStr;
@property(retain, nonatomic) UIColor *pubbleInputBackColor; // @synthesize pubbleInputBackColor=_pubbleInputBackColor;
@property(retain, nonatomic) GameChatInputController *inputController; // @synthesize inputController=_inputController;
@property(nonatomic) __weak id <GameChatInputToolViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long maxInputCharsCount; // @synthesize maxInputCharsCount=_maxInputCharsCount;
@property(retain, nonatomic) EmoticonBoardView *emoticonBoardView; // @synthesize emoticonBoardView=_emoticonBoardView;
@property(nonatomic) _Bool showingInputView; // @synthesize showingInputView=_showingInputView;
- (_Bool)checkNetWorkUnReachable;
- (void)onSelectorSelfDefinedEmotcion:(id)arg1;
- (void)requestEmoticonWrapByDesc:(id)arg1;
- (void)textDidChanged:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)didCommitText:(id)arg1;
- (void)refreshEmoticonView;
- (void)onInputModeChangeTo:(long long)arg1 Animated:(_Bool)arg2;
- (void)keyboardDidHide;
- (void)keyboardWillShow;
- (void)InputViewFrameDidChange:(id)arg1;
- (void)MMGrowTextViewHeightDidChanged:(id)arg1;
- (double)getVisibleHeight;
- (void)onSelectEmoticonSearchItem;
- (void)addScrollView:(id)arg1 withMarginBottomInputView:(double)arg2 adjustCallBack:(CDUnknownBlockType)arg3 getCurrentBottomCallBack:(CDUnknownBlockType)arg4;
- (void)setPlaceHolderStrOnce:(id)arg1;
- (void)setText:(id)arg1;
- (void)updateScrollViewFrameWhenShowInputView;
- (void)closeInputView;
- (void)showInputViewAtScrollViewY:(double)arg1;
- (void)updateTableViewFrameWithInputViewTop:(double)arg1;
- (void)reloadExpressionButtonImage:(long long)arg1;
- (void)showEmoticonView;
- (void)onExpressionButtonClicked:(id)arg1;
- (void)updateExpressionButtonFrame;
- (void)layoutExpressionButton;
- (void)updateCharsCountTipLabel;
- (void)updateCountTipLabelFrame;
- (void)layoutCountTipLabel;
- (void)updateGrowTextViewFrame;
- (void)onMMQuickSendEmoticonViewClickEmoticonWrap:(id)arg1 index:(unsigned long long)arg2;
- (void)onMergeRecommendEmoticon:(id)arg1 emoticonWrapList:(id)arg2 abTestItem:(id)arg3 sessionId:(id)arg4 recSessionId:(id)arg5 remoteWordListMeta:(id)arg6;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutGrowTextView;
- (void)updatePubbleInputViewFrame;
- (double)getPubbleViewHeight;
- (void)layoutPubbleInputView;
- (void)layoutbackGroundView;
- (void)updateSelfHeight;
- (void)initQuickSendEmoticonView;
- (void)layoutUI;
- (void)initInputController;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

