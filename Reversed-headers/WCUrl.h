//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "PBCoding-Protocol.h"

@class NSString;

@interface WCUrl : NSObject <NSCoding, PBCoding>
{
    NSString *url;
    long long type;
    NSString *md5;
    unsigned long long enckey;
    int encIdx;
    NSString *token;
    NSString *videomd5;
    NSString *encryptKey;
}

+ (id)UrlWithUrl:(id)arg1 type:(long long)arg2;
+ (void)initialize;
+ (void)PBArrayAdd_encryptKey;
+ (void)PBArrayAdd_videomd5;
+ (void)PBArrayAdd_enckey;
+ (void)PBArrayAdd_encIdx;
+ (void)PBArrayAdd_token;
+ (void)PBArrayAdd_md5;
+ (void)PBArrayAdd_type;
+ (void)PBArrayAdd_url;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *encryptKey; // @synthesize encryptKey;
@property(retain, nonatomic) NSString *videomd5; // @synthesize videomd5;
@property(nonatomic) unsigned long long enckey; // @synthesize enckey;
@property(nonatomic) int encIdx; // @synthesize encIdx;
@property(retain, nonatomic) NSString *token; // @synthesize token;
@property(retain, nonatomic) NSString *md5; // @synthesize md5;
@property(nonatomic) long long type; // @synthesize type;
@property(retain, nonatomic) NSString *url; // @synthesize url;
@property(readonly, copy) NSString *description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

