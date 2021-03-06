//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SportRecord;

@interface DeviceRankInfo : NSObject
{
    NSString *_username;
    NSString *_nickname;
    NSString *_rankTitle;
    NSString *_scoreTitle;
    unsigned int _rank;
    unsigned int _score;
    unsigned int _likeCount;
    _Bool _hasLike;
    _Bool _localLike;
    NSString *_m_deviceId;
    SportRecord *_record;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SportRecord *record; // @synthesize record=_record;
@property(retain, nonatomic) NSString *m_deviceId; // @synthesize m_deviceId=_m_deviceId;
@property(nonatomic) _Bool localLike; // @synthesize localLike=_localLike;
@property(nonatomic) _Bool hasLike; // @synthesize hasLike=_hasLike;
@property(nonatomic) unsigned int likeCount; // @synthesize likeCount=_likeCount;
@property(retain, nonatomic) NSString *scoreTitle; // @synthesize scoreTitle=_scoreTitle;
@property(retain, nonatomic) NSString *rankTitle; // @synthesize rankTitle=_rankTitle;
@property(nonatomic) unsigned int score; // @synthesize score=_score;
@property(nonatomic) unsigned int rank; // @synthesize rank=_rank;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
- (void)dealloc;

@end

