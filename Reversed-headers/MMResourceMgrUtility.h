//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MMResourceMgrUtility : NSObject
{
}

+ (id)appendRandomParamToUrlStr:(id)arg1;
+ (int)crc32WithData:(id)arg1;
+ (id)getMd5FromStr:(id)arg1 deleteUrlScheme:(_Bool)arg2;
+ (id)getUrlWithoutParam:(id)arg1;
+ (id)getResourceDirectDownloadDir;
+ (id)getResourceCheckResponseDataPath;
+ (id)getResourceInfoDBPath;
+ (id)getTestResourcePath:(long long)arg1 WithSubResType:(unsigned int)arg2 WithEID:(unsigned int)arg3;
+ (id)getResourcePath:(long long)arg1 WithSubResType:(unsigned int)arg2;
+ (id)getResourcePath:(long long)arg1;
+ (id)getResourceDirDependentOnClientVersion:(long long)arg1;
+ (id)getResourceDir:(long long)arg1;
+ (id)getResourceCdnDownloadSuccessDir;
+ (id)getResourceCdnDownloadDir;
+ (id)getResourceRootDir;

@end
