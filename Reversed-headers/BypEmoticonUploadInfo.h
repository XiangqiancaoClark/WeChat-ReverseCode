//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CMessageWrap, NSString;

@interface BypEmoticonUploadInfo : NSObject
{
    unsigned int totalLen;
    NSString *md5;
    CMessageWrap *wrapMsg;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CMessageWrap *wrapMsg; // @synthesize wrapMsg;
@property(nonatomic) unsigned int totalLen; // @synthesize totalLen;
@property(retain, nonatomic) NSString *md5; // @synthesize md5;
- (id)description;
- (id)init;

@end

