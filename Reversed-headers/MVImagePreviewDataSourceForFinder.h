//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MVImagePreviewDataSource.h"

@protocol MMMusicDataVM;

@interface MVImagePreviewDataSourceForFinder : MVImagePreviewDataSource
{
    id <MMMusicDataVM> _dataViewModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <MMMusicDataVM> dataViewModel; // @synthesize dataViewModel=_dataViewModel;
- (id)generateSelectItemModelFromAssetInfo:(id)arg1;
- (long long)previewIndexForAssetInfo:(id)arg1;
- (unsigned long long)previewAssetTotal;
- (id)previewAssetInfoAtIndex:(unsigned long long)arg1;
- (id)initWithDataViewModel:(id)arg1;

@end

