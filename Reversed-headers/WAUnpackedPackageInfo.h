//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface WAUnpackedPackageInfo : NSObject
{
    unsigned long long _packageType;
    NSMutableSet *_setPackageFilePath;
    NSMutableSet *_setCacheFileInfoKey;
}

+ (id)packageKeyWithAppId:(id)arg1 version:(unsigned long long)arg2 isDebugMode:(unsigned long long)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *setCacheFileInfoKey; // @synthesize setCacheFileInfoKey=_setCacheFileInfoKey;
@property(retain, nonatomic) NSMutableSet *setPackageFilePath; // @synthesize setPackageFilePath=_setPackageFilePath;
@property(nonatomic) unsigned long long packageType; // @synthesize packageType=_packageType;
- (id)init;

@end

