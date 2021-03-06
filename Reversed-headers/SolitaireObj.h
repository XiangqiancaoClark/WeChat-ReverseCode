//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "PBCoding-Protocol.h"

@class NSArray, NSMutableDictionary, NSMutableSet, NSString;

@interface SolitaireObj : NSObject <PBCoding, NSCopying>
{
    _Bool hasHeader;
    _Bool isCreateType;
    _Bool canQuickShowTips;
    _Bool _bJustSendPlainText;
    _Bool _bNeedAddOccupyWhenTapTips;
    _Bool _isActived;
    _Bool _bFromCallLaunch;
    unsigned int matchCount;
    unsigned int activeTime;
    NSString *nsSolitaireHeader;
    NSString *nsSolitaireTail;
    NSString *nsExample;
    NSString *nsSeparator;
    NSString *nsActiveUserName;
    NSString *nsChatName;
    NSMutableDictionary *dicSolitaireItem;
    NSMutableSet *invalidSolitaireKeySet;
    long long firstSvrId;
    NSMutableDictionary *dicInvalidMsg;
    unsigned long long activeScene;
    NSString *nsIdentifier;
    NSString *_nsContent;
    NSArray *_arrNewItems;
    unsigned long long _editScene;
}

+ (void)initialize;
+ (void)PBArrayAdd_nsIdentifier;
+ (void)PBArrayAdd_activeScene;
+ (void)PBArrayAdd_dicInvalidMsg;
+ (void)PBArrayAdd_firstSvrId;
+ (void)PBArrayAdd_activeTime;
+ (void)PBArrayAdd_invalidSolitaireKeySet;
+ (void)PBArrayAdd_dicSolitaireItem;
+ (void)PBArrayAdd_matchCount;
+ (void)PBArrayAdd_canQuickShowTips;
+ (void)PBArrayAdd_isCreateType;
+ (void)PBArrayAdd_hasHeader;
+ (void)PBArrayAdd_nsChatName;
+ (void)PBArrayAdd_nsActiveUserName;
+ (void)PBArrayAdd_nsSeparator;
+ (void)PBArrayAdd_nsExample;
+ (void)PBArrayAdd_nsSolitaireTail;
+ (void)PBArrayAdd_nsSolitaireHeader;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long editScene; // @synthesize editScene=_editScene;
@property(nonatomic) _Bool bFromCallLaunch; // @synthesize bFromCallLaunch=_bFromCallLaunch;
@property(nonatomic) _Bool isActived; // @synthesize isActived=_isActived;
@property(nonatomic) _Bool bNeedAddOccupyWhenTapTips; // @synthesize bNeedAddOccupyWhenTapTips=_bNeedAddOccupyWhenTapTips;
@property(nonatomic) _Bool bJustSendPlainText; // @synthesize bJustSendPlainText=_bJustSendPlainText;
@property(retain, nonatomic) NSArray *arrNewItems; // @synthesize arrNewItems=_arrNewItems;
@property(retain, nonatomic) NSString *nsContent; // @synthesize nsContent=_nsContent;
@property(retain, nonatomic) NSString *nsIdentifier; // @synthesize nsIdentifier;
@property(nonatomic) unsigned long long activeScene; // @synthesize activeScene;
@property(retain, nonatomic) NSMutableDictionary *dicInvalidMsg; // @synthesize dicInvalidMsg;
@property(nonatomic) long long firstSvrId; // @synthesize firstSvrId;
@property(nonatomic) unsigned int activeTime; // @synthesize activeTime;
@property(retain, nonatomic) NSMutableSet *invalidSolitaireKeySet; // @synthesize invalidSolitaireKeySet;
@property(retain, nonatomic) NSMutableDictionary *dicSolitaireItem; // @synthesize dicSolitaireItem;
@property(nonatomic) unsigned int matchCount; // @synthesize matchCount;
@property(nonatomic) _Bool canQuickShowTips; // @synthesize canQuickShowTips;
@property(nonatomic) _Bool isCreateType; // @synthesize isCreateType;
@property(nonatomic) _Bool hasHeader; // @synthesize hasHeader;
@property(retain, nonatomic) NSString *nsChatName; // @synthesize nsChatName;
@property(retain, nonatomic) NSString *nsActiveUserName; // @synthesize nsActiveUserName;
@property(retain, nonatomic) NSString *nsSeparator; // @synthesize nsSeparator;
@property(retain, nonatomic) NSString *nsExample; // @synthesize nsExample;
@property(retain, nonatomic) NSString *nsSolitaireTail; // @synthesize nsSolitaireTail;
@property(retain, nonatomic) NSString *nsSolitaireHeader; // @synthesize nsSolitaireHeader;
@property(readonly, copy) NSString *description;
- (void)updateSelfInfoWithSolitaireObj:(id)arg1;
- (_Bool)updateDicSolitaireItemByArray:(id)arg1 forceUpdate:(_Bool)arg2;
- (id)genSortItemsWithNewArr:(_Bool)arg1;
- (void)mergeNewItems;
- (id)getSolitaireXmlInfo;
- (void)fixHeaderInfo;
- (void)fixExampleInfo;
- (void)fixSolitaireInfo;
- (id)getRangeWithContent:(id)arg1;
- (id)getSolitaireResultWithNewLine:(_Bool)arg1;
- (void)addSolitaireItemsWithSolitaireInfo:(id)arg1;
- (void)invalidAllItem;
- (void)addInvalidMsgWithItem:(id)arg1;
- (id)getDiffNewAndMergeItemsWithContents:(id)arg1;
- (_Bool)editContentIFInSameNumWith:(id)arg1 Item:(id)arg2;
- (id)getSolitaireKey;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

