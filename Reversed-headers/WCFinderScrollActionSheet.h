//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMScrollActionSheet.h"

@class NSArray, WCFinderFeedContentVM, WCFinderScrollActionSheetDelegate;

@interface WCFinderScrollActionSheet : MMScrollActionSheet
{
    _Bool _fromMoreButton;
    NSArray *_itemArrayConfig;
    WCFinderFeedContentVM *_contentVM;
    WCFinderScrollActionSheetDelegate *_delegateReplace;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderScrollActionSheetDelegate *delegateReplace; // @synthesize delegateReplace=_delegateReplace;
@property(retain, nonatomic) WCFinderFeedContentVM *contentVM; // @synthesize contentVM=_contentVM;
@property(nonatomic) _Bool fromMoreButton; // @synthesize fromMoreButton=_fromMoreButton;
@property(retain, nonatomic) NSArray *itemArrayConfig; // @synthesize itemArrayConfig=_itemArrayConfig;
- (_Bool)isFavButtonShow;
- (void)configScrollActionSheet:(id)arg1 rowIndex:(unsigned long long)arg2;
- (_Bool)_itemEnable:(long long)arg1 contentVM:(id)arg2;
- (id)getRowItems:(long long)arg1 contentVM:(id)arg2;
- (id)genMenuIconArray:(id)arg1 contentVM:(id)arg2;
- (_Bool)shouldShowHeaderSpamTips:(id)arg1;
- (void)setUpCustomHeaderViewWithMenuActionDelegate:(id)arg1 screenWid:(double)arg2;
- (void)setUpCustomRecentForwardScrollViewWithMenuActionDelegate:(id)arg1 screenWid:(double)arg2 scene:(unsigned long long)arg3 msgType:(unsigned int)arg4 innerAppMsgType:(unsigned int)arg5;
- (void)_setUpStandardHeaderViewWithContentVM:(id)arg1;
- (id)init;
- (id)_getFinderDisableColor;
- (id)initWithContentVM:(id)arg1;

@end
