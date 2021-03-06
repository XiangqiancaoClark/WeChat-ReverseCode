//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "ContactTagNameEditViewControllerDelegate-Protocol.h"
#import "FavTagEditViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class FavBarButton, FavTagListView, MMLoadingView, MMScrollView, MMTimer, NSMutableArray, NSString, UIButton, UILabel, UIView;
@protocol FavTagSearchFilterDelegate;

@interface FavTagSearchFilter : MMUIView <ContactTagNameEditViewControllerDelegate, FavTagEditViewDelegate, UIScrollViewDelegate>
{
    UIView *m_backgroundView;
    MMScrollView *m_scrollView;
    UILabel *m_label;
    FavTagListView *m_tagListView;
    FavBarButton *m_favBarBtn;
    NSMutableArray *m_currentTags;
    NSMutableArray *m_allTags;
    id <FavTagSearchFilterDelegate> m_delegate;
    MMTimer *tagEditTimer;
    UIView *m_sepLine;
    UIButton *m_editBtn;
    MMLoadingView *m_loadingView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <FavTagSearchFilterDelegate> m_delegate; // @synthesize m_delegate;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (_Bool)resignFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)showMenu;
- (void)onLongPressTagBtn:(id)arg1;
- (void)onDeleteButton:(id)arg1;
- (void)onAddButton:(id)arg1;
- (void)onTagNameEditViewControllerRetWithTagName:(id)arg1;
- (void)deleteTag:(id)arg1;
- (void)renameTag:(id)arg1;
- (void)removeAllTags;
- (void)removeLastTag;
- (id)getTagList;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)updateTagList;
- (void)clearAndUpdateTagList;
- (void)ontap;
- (void)goToCapacityViewController;
- (id)getCapcityString;
- (void)initView;
- (void)layoutSubviews;
- (void)addBlurEffectForView:(id)arg1 atPoint:(struct CGPoint)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

