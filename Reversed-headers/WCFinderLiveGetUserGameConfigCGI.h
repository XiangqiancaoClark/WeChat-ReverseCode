//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCFinderLiveBaseCgi.h"

@class NSString;

@interface WCFinderLiveGetUserGameConfigCGI : WCFinderLiveBaseCgi
{
    int _liveScene;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
    NSString *_finderUsername;
    NSString *_appId;
}

- (void).cxx_destruct;
@property(nonatomic) int liveScene; // @synthesize liveScene=_liveScene;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithFinderUsername:(id)arg1 appId:(id)arg2 liveScene:(int)arg3 successBlock:(CDUnknownBlockType)arg4 failBlock:(CDUnknownBlockType)arg5;

@end

