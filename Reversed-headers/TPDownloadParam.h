//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

@interface TPDownloadParam : NSObject
{
    int _dlType;
    NSArray *_urlList;
    NSDictionary *_extraInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(retain, nonatomic) NSArray *urlList; // @synthesize urlList=_urlList;
@property(nonatomic) int dlType; // @synthesize dlType=_dlType;
- (id)getExtraJsonInfo;
- (_Bool)isOffline;
- (_Bool)isCharge;
- (id)getPlayDefinition;
- (id)getVid;
- (id)getSavePath;
- (id)getKeyId;
- (int)getClipCount;
- (int)getClipNo;
- (id)getCdnUrls;
- (id)initWithUrlList:(id)arg1 dlType:(int)arg2 extraInfo:(id)arg3;

@end
