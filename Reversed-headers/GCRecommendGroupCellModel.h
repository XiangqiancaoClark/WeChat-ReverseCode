//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GCBaseGroupCellModel.h"

@class ChatroomRecInfo, NSMutableArray, NSString;

@interface GCRecommendGroupCellModel : GCBaseGroupCellModel
{
    _Bool _isLocked;
    _Bool _canOnlooker;
    _Bool _canJoin;
    NSString *_userIconUrl;
    NSMutableArray *_conditionArray;
    ChatroomRecInfo *_chatroomRecInfo;
}

+ (id)getEmptyStateCellModelWithSize:(struct CGSize)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) ChatroomRecInfo *chatroomRecInfo; // @synthesize chatroomRecInfo=_chatroomRecInfo;
@property(nonatomic) _Bool canJoin; // @synthesize canJoin=_canJoin;
@property(retain, nonatomic) NSMutableArray *conditionArray; // @synthesize conditionArray=_conditionArray;
@property(retain, nonatomic) NSString *userIconUrl; // @synthesize userIconUrl=_userIconUrl;
@property(nonatomic) _Bool canOnlooker; // @synthesize canOnlooker=_canOnlooker;
@property(nonatomic) _Bool isLocked; // @synthesize isLocked=_isLocked;
- (unsigned long long)actionStatusForAutoJoin:(_Bool)arg1;
- (void)handleDidSelect;
- (void)openChatRoom:(_Bool)arg1;
- (id)rightBtnText;
- (double)rightSpace;
- (struct CGSize)cellSizeForCollectionView:(id)arg1;
- (double)condtionGroupMaxWidthForWidth:(double)arg1;
- (double)conditionViewHeight:(double)arg1;
- (double)imgViewHeight;
- (double)widthForCondition:(id)arg1;
- (Class)bindCellClass;
- (void)configureReportModel:(id)arg1;

@end

