//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface YYWKGamePkgCachesStastics : NSObject
{
    NSMutableArray *_recordArray;
    NSString *_mainUrl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *mainUrl; // @synthesize mainUrl=_mainUrl;
@property(retain, nonatomic) NSMutableArray *recordArray; // @synthesize recordArray=_recordArray;
- (void)dealloc;
- (id)description;
- (void)addRecord:(id)arg1 mainUrl:(id)arg2 data:(id)arg3;
- (id)init;

@end

