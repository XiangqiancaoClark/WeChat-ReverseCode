//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, UIImage;

@interface WCFinderDynamicIconFetcherResponse : NSObject
{
    UIImage *_cacheImage;
    NSMutableArray *_updateBlocks;
}

+ (id)responseWithImage:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *updateBlocks; // @synthesize updateBlocks=_updateBlocks;
@property(retain, nonatomic) UIImage *cacheImage; // @synthesize cacheImage=_cacheImage;
- (void)addUpdateBlock:(CDUnknownBlockType)arg1;
- (void)notify:(id)arg1;
- (void)cancel;

@end

