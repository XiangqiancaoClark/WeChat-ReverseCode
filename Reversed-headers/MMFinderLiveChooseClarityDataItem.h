//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CdnTransInfo, NSString;

@interface MMFinderLiveChooseClarityDataItem : NSObject
{
    _Bool _isSelect;
    _Bool _isDefault;
    CdnTransInfo *_transInfo;
    NSString *_title;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isDefault; // @synthesize isDefault=_isDefault;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool isSelect; // @synthesize isSelect=_isSelect;
@property(retain, nonatomic) CdnTransInfo *transInfo; // @synthesize transInfo=_transInfo;

@end

