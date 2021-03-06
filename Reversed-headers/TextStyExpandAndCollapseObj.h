//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIColor;
@protocol ILinkEventExt;

@interface TextStyExpandAndCollapseObj : NSObject
{
    _Bool _isExpand;
    NSString *_truncatedTrailingLinkText;
    NSString *_truncatedTrailingLinkUrl;
    UIColor *_truncatedTrailingLinkColor;
    id <ILinkEventExt> _linkDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <ILinkEventExt> linkDelegate; // @synthesize linkDelegate=_linkDelegate;
@property(retain, nonatomic) UIColor *truncatedTrailingLinkColor; // @synthesize truncatedTrailingLinkColor=_truncatedTrailingLinkColor;
@property(retain, nonatomic) NSString *truncatedTrailingLinkUrl; // @synthesize truncatedTrailingLinkUrl=_truncatedTrailingLinkUrl;
@property(retain, nonatomic) NSString *truncatedTrailingLinkText; // @synthesize truncatedTrailingLinkText=_truncatedTrailingLinkText;
@property(nonatomic) _Bool isExpand; // @synthesize isExpand=_isExpand;

@end

