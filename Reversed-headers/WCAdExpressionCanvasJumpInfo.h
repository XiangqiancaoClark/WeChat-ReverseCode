//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WCAdExpressionCanvasJumpInfo : NSObject
{
    int _pageScene;
    NSString *_canvasId;
    NSString *_canvasXml;
    NSString *_adInfoXml;
    NSString *_uxInfo;
    NSString *_bizAppId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *bizAppId; // @synthesize bizAppId=_bizAppId;
@property(nonatomic) int pageScene; // @synthesize pageScene=_pageScene;
@property(retain, nonatomic) NSString *uxInfo; // @synthesize uxInfo=_uxInfo;
@property(retain, nonatomic) NSString *adInfoXml; // @synthesize adInfoXml=_adInfoXml;
@property(retain, nonatomic) NSString *canvasXml; // @synthesize canvasXml=_canvasXml;
@property(retain, nonatomic) NSString *canvasId; // @synthesize canvasId=_canvasId;

@end

