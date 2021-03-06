//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMTableViewInfo.h"

@class NSArray;
@protocol ChatroomProfileViewLayoutDelegate;

@interface ChatroomProfileView : MMTableViewInfo
{
    NSArray *m_arrContacts;
    _Bool _wrapItemAccessibilityElement;
    id <ChatroomProfileViewLayoutDelegate> _layoutDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <ChatroomProfileViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
@property(nonatomic) _Bool wrapItemAccessibilityElement; // @synthesize wrapItemAccessibilityElement=_wrapItemAccessibilityElement;
- (double)getMemberItemViewWitdh;
- (double)getProfileViewCellLeftMargin;
- (double)getProfileViewNameFontSize;
- (double)getProfileViewRowHeight;
- (double)getProfileViewHeadInnerMargin;
- (double)getProfileViewLeftRightMargin;
- (double)getProfileViewHeadLength;
- (double)getMemberViewHeight;
- (unsigned long long)getMemberViewRowCount;
- (unsigned long long)getMemberViewColumnCount;
- (void)makeMemListSection:(id)arg1;
- (void)makeMemListCell:(id)arg1 CellInfo:(id)arg2;
- (void)initMemberView;
- (void)updateContactList:(id)arg1 delegate:(id)arg2;
- (void)updateContactList:(id)arg1;

@end

