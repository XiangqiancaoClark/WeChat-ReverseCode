//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GCDynamicLayoutProvider.h"

@class UIFont;

@interface GCTextLayoutCommonInfo : GCDynamicLayoutProvider
{
    UIFont *_sysTitleFont;
    double _sysTitleHeight;
    double _sysTitleTopOffset;
    double _sysTitleMarginWidth;
    double _sysTitleToContentMargin;
}

- (void).cxx_destruct;
@property(nonatomic) double sysTitleToContentMargin; // @synthesize sysTitleToContentMargin=_sysTitleToContentMargin;
@property(nonatomic) double sysTitleMarginWidth; // @synthesize sysTitleMarginWidth=_sysTitleMarginWidth;
@property(nonatomic) double sysTitleTopOffset; // @synthesize sysTitleTopOffset=_sysTitleTopOffset;
@property(nonatomic) double sysTitleHeight; // @synthesize sysTitleHeight=_sysTitleHeight;
@property(retain, nonatomic) UIFont *sysTitleFont; // @synthesize sysTitleFont=_sysTitleFont;
- (id)init;

@end

