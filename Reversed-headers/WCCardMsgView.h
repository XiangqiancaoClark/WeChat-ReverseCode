//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "MMWebImageViewDelegate-Protocol.h"

@class NSString, WCCardPkgMsg;
@protocol WCCardMsgViewDelegate;

@interface WCCardMsgView : MMUIView <MMWebImageViewDelegate>
{
    WCCardPkgMsg *_cardMsg;
    id <WCCardMsgViewDelegate> _delegate;
}

+ (double)GetHeightForCardMsg:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <WCCardMsgViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onAction;
- (void)onLoadImageOK:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithCardMsg:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

