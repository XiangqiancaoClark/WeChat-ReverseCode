//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MMAssetUtil : NSObject
{
}

+ (id)getPrimaryColorForPickerScene:(int)arg1;
+ (id)getPrimaryColorForPreviewEditScene:(int)arg1;
+ (id)compressSquareImage:(id)arg1;
+ (struct CGSize)getNormalImageSizeWithOriginImageSize:(struct CGSize)arg1 targetSize:(struct CGSize)arg2;
+ (_Bool)isLongImage:(struct CGSize)arg1;
+ (double)getAssetViewPaddingMarginNew:(_Bool)arg1;
+ (double)getAssetViewLenInSplitVC:(_Bool)arg1 bNew:(_Bool)arg2;
+ (double)getAssetViewLenInSplitVC:(_Bool)arg1;
+ (double)getAssetViewLenCurOriNew:(_Bool)arg1;
+ (double)getAssetViewLenCurOri;
+ (long long)getAssetColumnCurOriNew:(_Bool)arg1;
+ (long long)getAssetColumnCurOri;
+ (double)getAssetViewMarginCurOriNew:(_Bool)arg1;
+ (double)getAssetViewMarginCurOri;

@end

