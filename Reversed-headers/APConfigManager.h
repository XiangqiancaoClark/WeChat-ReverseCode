//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface APConfigManager : NSObject
{
    unsigned int _logCountIncredment;
    NSMutableDictionary *_cfgFileDict;
    NSString *_openId;
    NSString *_offerId;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_save:(CDUnknownBlockType)arg1;
- (void)_readIn:(CDUnknownBlockType)arg1;
- (void)sync;
- (void)loadByOfferId:(id)arg1 openId:(id)arg2 completion:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) unsigned long long logCountIncredment;
- (void)dealloc;
- (id)init;

@end

