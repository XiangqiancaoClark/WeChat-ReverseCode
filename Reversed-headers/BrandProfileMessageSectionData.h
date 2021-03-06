//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BrandProfileBaseSectionData.h"

@class NSMutableArray, NSString;

@interface BrandProfileMessageSectionData : BrandProfileBaseSectionData
{
    NSString *_publishTimeStr;
    _Bool _isTopItemShowLargeCover;
    unsigned int _groupMsgID;
    unsigned int _groupMsgIndex;
    unsigned int _publishTime;
    unsigned long long _tabType;
    NSString *_groupUniqueIDStr;
    NSMutableArray *_viewModelList;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableArray *viewModelList; // @synthesize viewModelList=_viewModelList;
@property(nonatomic) _Bool isTopItemShowLargeCover; // @synthesize isTopItemShowLargeCover=_isTopItemShowLargeCover;
@property(readonly, nonatomic) NSString *publishTimeStr; // @synthesize publishTimeStr=_publishTimeStr;
@property(nonatomic) unsigned int publishTime; // @synthesize publishTime=_publishTime;
@property(nonatomic) unsigned int groupMsgIndex; // @synthesize groupMsgIndex=_groupMsgIndex;
@property(retain, nonatomic) NSString *groupUniqueIDStr; // @synthesize groupUniqueIDStr=_groupUniqueIDStr;
@property(nonatomic) unsigned int groupMsgID; // @synthesize groupMsgID=_groupMsgID;
@property(readonly, nonatomic) unsigned long long tabType; // @synthesize tabType=_tabType;
- (id)genDateTimeStringByUInt:(unsigned int)arg1;
- (unsigned long long)sectionType;
- (double)heightForRowInSection:(unsigned long long)arg1;
- (double)heightForHeaderInSection;
- (long long)numberOfRowsInSection;
- (id)initWithSectionWidth:(double)arg1 tabType:(unsigned long long)arg2;

@end

