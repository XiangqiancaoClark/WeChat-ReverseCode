//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@interface MMWebPrefetchResUtil : MMObject
{
}

+ (unsigned int)maxCacheTimeWithRespHeader:(id)arg1;
+ (id)valueInLowercaseForField:(id)arg1 withHeader:(id)arg2;
+ (void)clearAllPreloadResourceCache;
+ (void)clearCacheIfExistWithDomain:(id)arg1 identifier:(id)arg2;
+ (id)pathOfCacheDir;
+ (id)dirPathOfComResDownload;
+ (id)fileNameForResWithUrl:(id)arg1;
+ (id)dicForRespHeaderWithPath:(id)arg1;
+ (id)pathForComResRespHeaderWithUrl:(id)arg1;
+ (id)pathForComResWithUrl:(id)arg1;
+ (id)dirPathOfDocument;
+ (id)pathForRespHeaderOfDocumentWithDomain:(id)arg1 identifier:(id)arg2;
+ (id)pathForDocumentWithDomain:(id)arg1 identifier:(id)arg2;
+ (id)reqHeaderForDocumentWithDomain:(id)arg1 identifier:(id)arg2;
+ (id)docHTMLStringWithDomain:(id)arg1 identifier:(id)arg2;
+ (id)dicForRespHeaderOfDocumentWithDomain:(id)arg1 identifier:(id)arg2;
+ (unsigned int)fileStatusWithFilePath:(id)arg1 respHeader:(id)arg2;
+ (unsigned int)documentStatusWithDomain:(id)arg1 identifier:(id)arg2;
+ (id)documentInfoWithDomain:(id)arg1 identifier:(id)arg2;

@end
