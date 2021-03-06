//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "EmoticonSearchHalfScreenViewControllerDelegate-Protocol.h"
#import "IStoreEmotionSingleDownloadMgrExt-Protocol.h"
#import "InputControllerDelegate-Protocol.h"
#import "MMImagePickerManagerDelegate-Protocol.h"
#import "MMSightCameraViewControllerDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "WCCommonInputViewDelegate-Protocol.h"
#import "WCFinderFeedPickerViewControllerDelegate-Protocol.h"
#import "WCGroupTagViewControllerDelegate-Protocol.h"
#import "WCTimelinePOIPickerViewControllerDelegate-Protocol.h"

@class CAGradientLayer, CEmoticonWrap, EmoticonBoardView, MMGrowTextView, MMUIButton, MMUILabel, NSArray, NSDictionary, NSString, TextStateCustomIconPageSheetView, TextStatePublishConfiguration, TextStatePublishContentBuilder, TextStatePublishEmoticonView, TextStatePublishGuideView, TextStatePublishIconButton, TextStatePublishIconCollectionView, TextStatePublishInputBar, TextStatePublishMediaSwitchView, TextStatePublishReportObject, TextStatePublishSourceInfo, TextStatePublishSourceView, TextStateTopicGuideBubbleView, UIBarButtonItem, UIScreenEdgePanGestureRecognizer, UITapGestureRecognizer, UIView, UIViewPropertyAnimator, WCInputController, WCLocationInfo;
@protocol TextStateIcon, TextStatePublishViewControllerDelegate;

@interface TextStatePublishViewController : MMUIViewController <MMImagePickerManagerDelegate, MMSightCameraViewControllerDelegate, WCTimelinePOIPickerViewControllerDelegate, WCGroupTagViewControllerDelegate, WCFinderFeedPickerViewControllerDelegate, EmoticonSearchHalfScreenViewControllerDelegate, WCCommonInputViewDelegate, InputControllerDelegate, IStoreEmotionSingleDownloadMgrExt, UIGestureRecognizerDelegate>
{
    _Bool _isBeingLayout;
    _Bool _showingToast;
    unsigned int _enterScene;
    unsigned int _publishScene;
    id <TextStatePublishViewControllerDelegate> _delegate;
    NSString *_sessionId;
    TextStatePublishContentBuilder *_builder;
    TextStatePublishConfiguration *_configuration;
    NSDictionary *_attachInfo;
    unsigned long long _emoticonSwitch;
    UIBarButtonItem *_exitBarButton;
    UIView *_backgroundContainerView;
    UIView *_backgroundView;
    CAGradientLayer *_backgroundGradientLayer;
    TextStatePublishMediaSwitchView *_mediaSwitchView;
    UIView *_headerView;
    TextStatePublishIconButton *_headerIconButton;
    TextStatePublishSourceView *_sourceView;
    UIView *_contentView;
    MMGrowTextView *_descriptionTextView;
    MMUIButton *_topicTextButton;
    MMUILabel *_positionLabel;
    UIView *_bottomToolBar;
    NSArray *_bottomToolButtonList;
    MMUIButton *_bottomDoneButton;
    TextStatePublishGuideView *_guideView;
    TextStateTopicGuideBubbleView *_topicGuideBubbleView;
    TextStatePublishIconCollectionView *_iconCollectionView;
    UIViewPropertyAnimator *_iconCollectionShowAnimator;
    UIViewPropertyAnimator *_iconCollectionHideAnimator;
    NSString *_customIconDescription;
    TextStateCustomIconPageSheetView *_customIconPageSheet;
    id <TextStateIcon> _iconWrap;
    NSString *_defaultImageId;
    WCLocationInfo *_positionInfo;
    long long _privacy;
    NSArray *_privacyContactBlackList;
    NSArray *_privacyLabelList;
    NSArray *_privacyContactList;
    TextStatePublishSourceInfo *_sourceInfo;
    EmoticonBoardView *_emoticonBoardView;
    TextStatePublishEmoticonView *_emoticonView;
    CEmoticonWrap *_emoticonWrap;
    WCInputController *_inputController;
    TextStatePublishInputBar *_inputBar;
    UIView *_inputBackgroundView;
    UITapGestureRecognizer *_tapGesture;
    UIScreenEdgePanGestureRecognizer *_screenEdgePanGesture;
    TextStatePublishReportObject *_reportObject;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TextStatePublishReportObject *reportObject; // @synthesize reportObject=_reportObject;
@property(nonatomic) _Bool showingToast; // @synthesize showingToast=_showingToast;
@property(retain, nonatomic) UIScreenEdgePanGestureRecognizer *screenEdgePanGesture; // @synthesize screenEdgePanGesture=_screenEdgePanGesture;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(nonatomic) _Bool isBeingLayout; // @synthesize isBeingLayout=_isBeingLayout;
@property(retain, nonatomic) UIView *inputBackgroundView; // @synthesize inputBackgroundView=_inputBackgroundView;
@property(retain, nonatomic) TextStatePublishInputBar *inputBar; // @synthesize inputBar=_inputBar;
@property(retain, nonatomic) WCInputController *inputController; // @synthesize inputController=_inputController;
@property(retain, nonatomic) CEmoticonWrap *emoticonWrap; // @synthesize emoticonWrap=_emoticonWrap;
@property(retain, nonatomic) TextStatePublishEmoticonView *emoticonView; // @synthesize emoticonView=_emoticonView;
@property(retain, nonatomic) EmoticonBoardView *emoticonBoardView; // @synthesize emoticonBoardView=_emoticonBoardView;
@property(retain, nonatomic) TextStatePublishSourceInfo *sourceInfo; // @synthesize sourceInfo=_sourceInfo;
@property(retain, nonatomic) NSArray *privacyContactList; // @synthesize privacyContactList=_privacyContactList;
@property(retain, nonatomic) NSArray *privacyLabelList; // @synthesize privacyLabelList=_privacyLabelList;
@property(retain, nonatomic) NSArray *privacyContactBlackList; // @synthesize privacyContactBlackList=_privacyContactBlackList;
@property(nonatomic) long long privacy; // @synthesize privacy=_privacy;
@property(retain, nonatomic) WCLocationInfo *positionInfo; // @synthesize positionInfo=_positionInfo;
@property(retain, nonatomic) NSString *defaultImageId; // @synthesize defaultImageId=_defaultImageId;
@property(retain, nonatomic) id <TextStateIcon> iconWrap; // @synthesize iconWrap=_iconWrap;
@property(retain, nonatomic) TextStateCustomIconPageSheetView *customIconPageSheet; // @synthesize customIconPageSheet=_customIconPageSheet;
@property(retain, nonatomic) NSString *customIconDescription; // @synthesize customIconDescription=_customIconDescription;
@property(retain, nonatomic) UIViewPropertyAnimator *iconCollectionHideAnimator; // @synthesize iconCollectionHideAnimator=_iconCollectionHideAnimator;
@property(retain, nonatomic) UIViewPropertyAnimator *iconCollectionShowAnimator; // @synthesize iconCollectionShowAnimator=_iconCollectionShowAnimator;
@property(retain, nonatomic) TextStatePublishIconCollectionView *iconCollectionView; // @synthesize iconCollectionView=_iconCollectionView;
@property(retain, nonatomic) TextStateTopicGuideBubbleView *topicGuideBubbleView; // @synthesize topicGuideBubbleView=_topicGuideBubbleView;
@property(retain, nonatomic) TextStatePublishGuideView *guideView; // @synthesize guideView=_guideView;
@property(retain, nonatomic) MMUIButton *bottomDoneButton; // @synthesize bottomDoneButton=_bottomDoneButton;
@property(retain, nonatomic) NSArray *bottomToolButtonList; // @synthesize bottomToolButtonList=_bottomToolButtonList;
@property(retain, nonatomic) UIView *bottomToolBar; // @synthesize bottomToolBar=_bottomToolBar;
@property(retain, nonatomic) MMUILabel *positionLabel; // @synthesize positionLabel=_positionLabel;
@property(retain, nonatomic) MMUIButton *topicTextButton; // @synthesize topicTextButton=_topicTextButton;
@property(retain, nonatomic) MMGrowTextView *descriptionTextView; // @synthesize descriptionTextView=_descriptionTextView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) TextStatePublishSourceView *sourceView; // @synthesize sourceView=_sourceView;
@property(retain, nonatomic) TextStatePublishIconButton *headerIconButton; // @synthesize headerIconButton=_headerIconButton;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) TextStatePublishMediaSwitchView *mediaSwitchView; // @synthesize mediaSwitchView=_mediaSwitchView;
@property(retain, nonatomic) CAGradientLayer *backgroundGradientLayer; // @synthesize backgroundGradientLayer=_backgroundGradientLayer;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIView *backgroundContainerView; // @synthesize backgroundContainerView=_backgroundContainerView;
@property(retain, nonatomic) UIBarButtonItem *exitBarButton; // @synthesize exitBarButton=_exitBarButton;
@property(nonatomic) unsigned long long emoticonSwitch; // @synthesize emoticonSwitch=_emoticonSwitch;
@property(nonatomic) unsigned int publishScene; // @synthesize publishScene=_publishScene;
@property(retain, nonatomic) NSDictionary *attachInfo; // @synthesize attachInfo=_attachInfo;
@property(retain, nonatomic) TextStatePublishConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) TextStatePublishContentBuilder *builder; // @synthesize builder=_builder;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) unsigned int enterScene; // @synthesize enterScene=_enterScene;
@property(nonatomic) __weak id <TextStatePublishViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (void)onSingleEmotionDownloadFailedWithMd5:(id)arg1;
- (void)onSingleEmotionDownloadOkWithWrap:(id)arg1 imageData:(id)arg2;
- (void)onSearchEmoticonViewControllerSendEmoticon:(id)arg1;
- (void)onInputViewExpressionButtonClicked:(id)arg1;
- (void)onSelectEmoticonSearchItem;
- (void)onSelectorSelfDefinedEmotcion:(id)arg1;
- (_Bool)canSelectEmoji:(id)arg1;
- (void)onInputModeChangingTo:(long long)arg1;
- (void)keyboardHiding;
- (void)keyboardShowing;
- (void)didCommitEmptyText;
- (void)didCommitText:(id)arg1;
- (void)textViewTextDidChange;
- (void)textViewTextDidExceedMaxLength;
- (void)MMGrowTextViewBeginEditing:(id)arg1;
- (void)MMGrowTextViewHeightDidChanged:(id)arg1;
- (void)onPOIReportStr4CommitChanged:(id)arg1;
- (void)onPOIPickerFinished:(id)arg1;
- (void)privacySettingChanged:(long long)arg1 label:(id)arg2 contacts:(id)arg3;
- (void)finderFeedPickerViewController:(id)arg1 didSelectDataItem:(id)arg2;
- (double)inputViewHeight;
- (_Bool)isGuideViewShowing;
- (_Bool)isIconCollectionViewShowing;
- (id)positionNameFromLocationInfo:(id)arg1;
- (_Bool)isFrom3rdParty;
- (void)onGetTextStateImage:(id)arg1 source:(unsigned int)arg2;
- (void)onGetTextStateVideo:(id)arg1 reportInfo:(id)arg2;
- (void)endEditing;
- (void)handleScreenEdgePanGesture:(id)arg1;
- (void)onTapView:(id)arg1;
- (void)onTapEmoticonDeleteButton;
- (void)onTapPrivacyButton:(id)arg1;
- (void)jumpToPositionPickerController;
- (void)onTapPositionButton:(id)arg1;
- (id)getFinderPickerExtInfo;
- (void)jumpToFinderFeedPickerController;
- (void)onTapTakeSightButton:(id)arg1;
- (void)onTapTopicIconButton;
- (void)onTapTopicTextButton;
- (void)onTapExitBarButtonItem;
- (void)onTapDoneButton;
- (_Bool)canSetEmoticon;
- (void)clearMediaSourceInfoIfNeeded;
- (void)buildContentIfNeeded;
- (_Bool)showCannotAddTextEmojiAlertIfNeeded;
- (_Bool)showCannotAddEmoticonAlertIfNeeded;
- (_Bool)showErrorToastWithText:(id)arg1;
- (void)showCustomIconPageSheet:(id)arg1;
- (id)iconCollectionAnimatorForShowing:(_Bool)arg1;
- (double)iconCollectionViewY;
- (double)iconCollectionViewYForShowing:(_Bool)arg1;
- (void)hideIconCollectionView;
- (void)showIconCollectionView;
- (void)tryToHideTopicGuideBubble;
- (void)tryToShowTopicGuideBubble;
- (void)checkTopicGuide;
- (void)checkNewbieGuide;
- (double)maxContentTextOrEmoticonHeight;
- (void)layoutInputView;
- (void)layoutTopicGuideBubbleView;
- (void)layoutBackgroundView;
- (void)layoutBottomView;
- (void)layoutContentView;
- (void)layoutIconCollectionView;
- (void)layoutHeaderView;
- (void)layoutSubviewsAnimated:(_Bool)arg1;
- (void)layoutSubviews;
- (id)bottomButtonWithType:(long long)arg1;
- (void)initTopicGuideBubbleView;
- (void)initGuideView;
- (void)initIconCollectionView;
- (void)initCustomIconPageSheet;
- (void)initBottomView;
- (void)initContentView;
- (void)initHeaderView;
- (void)initBackgroundView;
- (void)configureView;
- (_Bool)useTransparentNavibar;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (void)initReportObject;
- (void)initData;
- (void)initGesture;
- (void)initInputController;
- (void)initView;
- (void)initNavigationItem;
- (id)init;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingVideoWithAsset:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingSightWithInfo:(id)arg2;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(_Bool)arg3 editImageAttr:(id)arg4;
- (void)onShortVideoTaken:(id)arg1 thumbImg:(id)arg2 editVideoAttr:(id)arg3 paramModel:(id)arg4;
- (void)handleDidFinishPickingSightWithInfo:(id)arg1;
- (void)jumpToCameraController;
- (void)jumpToImagePickerController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

