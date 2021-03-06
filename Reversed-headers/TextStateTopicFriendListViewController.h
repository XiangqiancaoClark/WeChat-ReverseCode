//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "TextStateMgrExt-Protocol.h"
#import "TextStatePlanetFriendCellDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSMutableArray, NSString, TextStateSameTopicFriendCell, UICollectionView, UILabel;
@protocol TextStateIcon;

@interface TextStateTopicFriendListViewController : MMUIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, TextStatePlanetFriendCellDelegate, TextStateMgrExt>
{
    _Bool _hideMoreFriendStateEntry;
    _Bool _hasSelf;
    unsigned int _sessionScene;
    long long _fromScene;
    NSString *_sessionID;
    TextStateSameTopicFriendCell *_calculateCell;
    UILabel *_subTitleLabel;
    UICollectionView *_collectionView;
    UILabel *_emptyLabel;
    id <TextStateIcon> _topicIconWrap;
    NSString *_topicId;
    NSMutableArray *_contactList;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int sessionScene; // @synthesize sessionScene=_sessionScene;
@property(nonatomic) _Bool hasSelf; // @synthesize hasSelf=_hasSelf;
@property(retain, nonatomic) NSMutableArray *contactList; // @synthesize contactList=_contactList;
@property(retain, nonatomic) NSString *topicId; // @synthesize topicId=_topicId;
@property(retain, nonatomic) id <TextStateIcon> topicIconWrap; // @synthesize topicIconWrap=_topicIconWrap;
@property(retain, nonatomic) UILabel *emptyLabel; // @synthesize emptyLabel=_emptyLabel;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) TextStateSameTopicFriendCell *calculateCell; // @synthesize calculateCell=_calculateCell;
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) long long fromScene; // @synthesize fromScene=_fromScene;
@property(nonatomic) _Bool hideMoreFriendStateEntry; // @synthesize hideMoreFriendStateEntry=_hideMoreFriendStateEntry;
- (void)reportMoreButtonClick;
- (void)reportExpose;
- (long long)otherFriendsCount;
- (_Bool)hasMoreFriendTopic;
- (struct CGSize)calculateCellHeightWithWidth:(double)arg1 index:(long long)arg2;
- (void)onClickAtCellBackGround:(id)arg1;
- (void)onClickAtProfileButton:(id)arg1;
- (void)onTapMoreFriendTopicButton;
- (void)onTapExitBarButtonItem;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)updateFriendListWithTopic:(id)arg1;
- (void)initNavBar;
- (void)initCollectionView;
- (long long)preferredStatusBarStyle;
- (long long)overrideMMUserInterfaceStyle;
- (_Bool)useTransparentNavibar;
- (void)viewWillPop:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithTextStateTopic:(id)arg1 sessionScene:(unsigned int)arg2;
- (id)initWithTextStateTopic:(id)arg1 iconWrap:(id)arg2 sessionScene:(unsigned int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

