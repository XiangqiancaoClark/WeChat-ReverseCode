//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class OrderedDictionary;
@protocol EmoticonCustomManageDataLogicDelegate;

@interface EmoticonCustomManageDataLogic : MMObject
{
    unsigned long long _type;
    unsigned long long _status;
    OrderedDictionary *_wrapList;
    id <EmoticonCustomManageDataLogicDelegate> _delegate;
    OrderedDictionary *_markedWrapList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) OrderedDictionary *markedWrapList; // @synthesize markedWrapList=_markedWrapList;
@property(nonatomic) __weak id <EmoticonCustomManageDataLogicDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) OrderedDictionary *wrapList; // @synthesize wrapList=_wrapList;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)reloadDataWithType:(unsigned long long)arg1;
- (id)getMergedEmoticonList:(unsigned long long)arg1;
- (id)getLocalEmoticonList:(unsigned long long)arg1;
- (void)updateMarkedEmoticons;
- (void)clearAllMark;
- (long long)indexOfWrapInItems:(id)arg1;
- (void)changeMarkStateWithWrap:(id)arg1;
- (id)emoticonWrapListForMarkItems;
- (id)md5ListForMarkItems;
- (id)emoticonManageWrapAtIndex:(unsigned long long)arg1;
- (unsigned long long)totalShowingItems;
- (unsigned long long)totalEmoticonCountShowed;
- (unsigned long long)totalEmoticonCountIncludeRecoverFailed;
- (id)recoverMgr;
- (void)dealloc;
- (id)init;
- (id)initWithType:(unsigned long long)arg1;

@end
