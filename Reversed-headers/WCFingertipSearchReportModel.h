//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCSearchReportModel.h"

@class NSString;

@interface WCFingertipSearchReportModel : WCSearchReportModel
{
    _Bool _hasReddot;
    long long _action;
    NSString *_hitWordList;
    NSString *_hitWordVersion;
    unsigned long long _subScene;
    NSString *_exposedWord;
    NSString *_matchTypeList;
    unsigned long long _msgContentLength;
    unsigned long long _matchResult;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long matchResult; // @synthesize matchResult=_matchResult;
@property(nonatomic) unsigned long long msgContentLength; // @synthesize msgContentLength=_msgContentLength;
@property(copy, nonatomic) NSString *matchTypeList; // @synthesize matchTypeList=_matchTypeList;
@property(copy, nonatomic) NSString *exposedWord; // @synthesize exposedWord=_exposedWord;
@property(nonatomic) unsigned long long subScene; // @synthesize subScene=_subScene;
@property(copy, nonatomic) NSString *hitWordVersion; // @synthesize hitWordVersion=_hitWordVersion;
@property(copy, nonatomic) NSString *hitWordList; // @synthesize hitWordList=_hitWordList;
@property(nonatomic) _Bool hasReddot; // @synthesize hasReddot=_hasReddot;
@property(nonatomic) long long action; // @synthesize action=_action;
- (void)doReport:(long long)arg1;
- (void)doReport;
- (id)initWithSNSItem:(id)arg1 subScene:(unsigned long long)arg2;

@end

