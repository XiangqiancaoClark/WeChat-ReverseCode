//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface lzCommCacheFileCollection : NSObject
{
    NSMutableArray *_fileList;
    long long _totalSize;
    NSMutableArray *_expfileList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *expfileList; // @synthesize expfileList=_expfileList;
@property(nonatomic) long long totalSize; // @synthesize totalSize=_totalSize;
@property(retain, nonatomic) NSMutableArray *fileList; // @synthesize fileList=_fileList;
- (id)sortByDate;
- (void)dealloc;
- (id)init;

@end

