//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCAdHalfScreenContainerBaseView.h"

@class MMPageSheetAdapter;

@interface WCAdHalfScreenContainerLiteAppView : WCAdHalfScreenContainerBaseView
{
    MMPageSheetAdapter *_sheetAdapter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMPageSheetAdapter *sheetAdapter; // @synthesize sheetAdapter=_sheetAdapter;
- (void)dismissWithAnimated:(_Bool)arg1;
- (void)showWithAnimated:(_Bool)arg1;
- (double)calcContentHeight;
- (id)getHalfScreenLiteAppViewController;
- (void)initView;
- (id)initWithContainerInfo:(id)arg1;

@end

