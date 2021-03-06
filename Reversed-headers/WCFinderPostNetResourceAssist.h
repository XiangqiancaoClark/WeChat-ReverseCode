//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderPostNetResourceAssist : NSObject
{
    NSString *_tid;
    CDUnknownBlockType _resolver;
}

+ (id)mediaInfoForDataItemCoverSelectedVideo:(id)arg1;
+ (id)netVideoFetchPromise:(id)arg1 cancelToken:(id)arg2;
+ (id)netImageExistedPath:(id)arg1 downloadView:(id)arg2 downloadOptions:(long long)arg3;
+ (id)resolveHttpURL:(id)arg1 format:(id)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType resolver; // @synthesize resolver=_resolver;
@property(retain, nonatomic) NSString *tid; // @synthesize tid=_tid;
- (void)finderMediaVideoStreamDownloadSuccessfulWithTid:(id)arg1;
- (void)dealloc;
- (id)initWithDataItemTid:(id)arg1 resolver:(CDUnknownBlockType)arg2;

@end

