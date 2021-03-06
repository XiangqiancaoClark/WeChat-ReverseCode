//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMFinderLiveSubTitleDisplayModel, MMFinderLiveSubTitleUIConfigModel, NSMutableArray, NSString, TextStyleAttributeObj, UIFont;

@interface MMFinderLiveSubTitleViewModel : NSObject
{
    CDUnknownBlockType _refreshBlock;
    MMFinderLiveSubTitleUIConfigModel *_subTitleUIConfigModel;
    long long _subTitleType;
    NSString *_subTitle;
    long long _duration;
    NSMutableArray *_subTitleComponentArr;
    MMFinderLiveSubTitleDisplayModel *_currentDisplayModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveSubTitleDisplayModel *currentDisplayModel; // @synthesize currentDisplayModel=_currentDisplayModel;
@property(retain, nonatomic) NSMutableArray *subTitleComponentArr; // @synthesize subTitleComponentArr=_subTitleComponentArr;
@property(nonatomic) long long duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(nonatomic) long long subTitleType; // @synthesize subTitleType=_subTitleType;
@property(retain, nonatomic) MMFinderLiveSubTitleUIConfigModel *subTitleUIConfigModel; // @synthesize subTitleUIConfigModel=_subTitleUIConfigModel;
@property(copy, nonatomic) CDUnknownBlockType refreshBlock; // @synthesize refreshBlock=_refreshBlock;
- (id)getLogStrForSubTitleComponentArr:(id)arg1;
- (id)getLogStrForStyle:(id)arg1 logSize:(_Bool)arg2;
- (id)getLogStrForArrStyles:(id)arg1 logSize:(_Bool)arg2;
@property(readonly, nonatomic) TextStyleAttributeObj *textAttributeObj;
@property(readonly, nonatomic) UIFont *subTitleFont;
@property(readonly, nonatomic) double maxContentWidth;
- (void)updateComponentDisplayState:(id)arg1 withLimitCount:(unsigned long long)arg2 andStyle:(id)arg3;
- (_Bool)checkComponentDisplayCompletedInLimitCount:(unsigned long long)arg1 withStyle:(id)arg2;
- (struct CGSize)getComponentStrDisplaySize:(id)arg1 AndStyle:(id *)arg2 withMaxContentWidth:(double)arg3 maxLineNum:(unsigned long long)arg4;
- (void)refreshCurrentDisplayModel;
- (struct CGSize)getSpecifiedContentSize:(struct CGSize)arg1 arrayStyles:(id)arg2 maxNum:(unsigned long long)arg3;
- (id)getSpecifiedArrayStyles:(id)arg1 maxNum:(unsigned long long)arg2;
- (void)deleteEmptyLineFromArrStyles:(id *)arg1 contentSize:(struct CGSize *)arg2;
- (void)displaySubTitleComponent:(id)arg1 limitWidth:(double)arg2 resultContentSize:(struct CGSize *)arg3 resultArrStyles:(id *)arg4;
- (_Bool)displayNextSubTitleComponentInDisplayModel:(id)arg1 limitWidth:(double)arg2 resultContentSize:(struct CGSize *)arg3 resultArrStyles:(id *)arg4;
- (long long)checkSupplyRemainPartOfContent:(id)arg1;
- (id)getFirstValidSubTitleComponentWithClearUnvalid;
- (_Bool)displayCurrentSubTitleComponentInDisplayModel:(id)arg1 resultContentSize:(struct CGSize *)arg2 resultArrStyles:(id *)arg3;
- (id)getDisplayModel;
- (void)updateDisplayModel;
- (void)supplyPunctuationForComponents:(id)arg1;
- (id)createSubTitleComponentArr;
- (id)getSperateSetForSubTitleType:(long long)arg1;
- (void)updateSubTitleComponentArr;
- (void)handleSubTitle:(id)arg1 subTitleType:(long long)arg2 duration:(long long)arg3;
- (void)clearData;
- (void)updateSubTitle:(id)arg1 subTitleType:(long long)arg2 duration:(long long)arg3 subTitleStatus:(long long)arg4;

@end

