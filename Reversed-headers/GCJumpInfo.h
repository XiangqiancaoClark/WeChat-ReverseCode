//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GCWebViewCacheConfig, JumpInfo, NSDictionary, UIViewController;

@interface GCJumpInfo : NSObject
{
    JumpInfo *_jumpInfo;
    UIViewController *_fromViewController;
    GCWebViewCacheConfig *_cacheConfig;
    NSDictionary *_additionUrlParam;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *additionUrlParam; // @synthesize additionUrlParam=_additionUrlParam;
@property(retain, nonatomic) GCWebViewCacheConfig *cacheConfig; // @synthesize cacheConfig=_cacheConfig;
@property(retain, nonatomic) UIViewController *fromViewController; // @synthesize fromViewController=_fromViewController;
@property(retain, nonatomic) JumpInfo *jumpInfo; // @synthesize jumpInfo=_jumpInfo;

@end
