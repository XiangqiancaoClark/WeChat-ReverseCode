//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MMMusicMVModelLocalDataHelper : NSObject
{
}

+ (void)deleteAllLocalTrimmedVideo:(id)arg1;
+ (void)deleteLocalTrimmedVideo:(id)arg1;
+ (void)trimAndSaveLocalVideo:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)deleteLocalCoverImageWithFilename:(id)arg1;
+ (id)copyCoverImageToLocalWithPath:(id)arg1;
+ (id)mvImageResize:(id)arg1 andResizeConstraint:(struct CGSize)arg2;
+ (id)reuseFinderCompressImageDataLogic:(id)arg1;
+ (id)compressedImageData:(id)arg1;
+ (id)saveCoverImageToLocal:(id)arg1;
+ (id)pathToLocalCoverImageWithFilename:(id)arg1;
+ (id)pathToCompressedLocalVideo:(id)arg1;
+ (id)pathToTrimmedLocalVideo:(id)arg1;
+ (id)videoPathWithLocalVideo:(id)arg1 fileName:(id)arg2;
+ (id)genPathToLocalCoverImage;
+ (id)genDataItemForPreviewingWithLocalPics:(id)arg1;
+ (id)genDataItemForPreviewingWithLocalVideo:(id)arg1;
+ (id)getDraftMMKV;
+ (id)getPostMMKV;
+ (void)syncLocalDraft:(id)arg1;
+ (void)syncLocalPendingModels:(id)arg1;
+ (id)loadLocalDraftMVModels;
+ (id)loadLocalPendingMVModels;
+ (void)setupInitialFieldsForLocalMVModel:(id)arg1;
+ (void)fillSelfPublishDefaultValue:(id)arg1;

@end

