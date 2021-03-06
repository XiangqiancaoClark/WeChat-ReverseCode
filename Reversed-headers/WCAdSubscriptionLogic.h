//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCAdvertiseOperationLogicBase.h"

#import "WAPageSheetDelegate-Protocol.h"
#import "WCAdSubscriptionPageSheetDelegate-Protocol.h"

@class NSString;
@protocol WCAdSubscriptionLogicDelegate;

@interface WCAdSubscriptionLogic : WCAdvertiseOperationLogicBase <WCAdSubscriptionPageSheetDelegate, WAPageSheetDelegate>
{
    _Bool _btnHasBeenClicked;
    id <WCAdSubscriptionLogicDelegate> _delegate;
    NSString *_adTitle;
    NSString *_adDesc;
    NSString *_adSubmitBtnTitle;
    NSString *_headImage;
    NSString *_nickName;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool btnHasBeenClicked; // @synthesize btnHasBeenClicked=_btnHasBeenClicked;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(retain, nonatomic) NSString *headImage; // @synthesize headImage=_headImage;
@property(retain, nonatomic) NSString *adSubmitBtnTitle; // @synthesize adSubmitBtnTitle=_adSubmitBtnTitle;
@property(retain, nonatomic) NSString *adDesc; // @synthesize adDesc=_adDesc;
@property(retain, nonatomic) NSString *adTitle; // @synthesize adTitle=_adTitle;
@property(nonatomic) __weak id <WCAdSubscriptionLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)isSubscriptionInfoAllValid;
- (void)updateHeadInfoWithHeadUrl:(id)arg1 nickname:(id)arg2 title:(id)arg3 adDesc:(id)arg4 adSubmitBtnTitle:(id)arg5;
- (void)pageSheetWillHide:(id)arg1;
- (void)onCloseBtnClick;
- (void)onSubmitBtnClick:(id)arg1;
- (void)showActionSheet;
- (id)fetchUIView;
- (void)callFinishedDelegateWithResult:(id)arg1 success:(_Bool)arg2 cancel:(_Bool)arg3 errorCode:(long long)arg4;
- (_Bool)isStringEmpty:(id)arg1;
- (void)checkParameterAndStart;
- (void)start;
- (id)initWithTitle:(id)arg1 adDesc:(id)arg2 adSubmitBtnTitle:(id)arg3 headImage:(id)arg4 nickName:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

