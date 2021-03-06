//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCFinderBaseCgi.h"

@class NSString;

@interface WCFinderDelFeedCGI : WCFinderBaseCgi
{
    NSString *_tid;
    NSString *_nonceID;
    NSString *_posterName;
    CDUnknownBlockType _successful;
    CDUnknownBlockType _failure;
    long long _delScene;
}

- (void).cxx_destruct;
@property(nonatomic) long long delScene; // @synthesize delScene=_delScene;
@property(copy, nonatomic) CDUnknownBlockType failure; // @synthesize failure=_failure;
@property(copy, nonatomic) CDUnknownBlockType successful; // @synthesize successful=_successful;
@property(copy, nonatomic) NSString *posterName; // @synthesize posterName=_posterName;
@property(copy, nonatomic) NSString *nonceID; // @synthesize nonceID=_nonceID;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithFeedTid:(id)arg1 nonceID:(id)arg2 posterName:(id)arg3 delScene:(long long)arg4 successful:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;

@end

