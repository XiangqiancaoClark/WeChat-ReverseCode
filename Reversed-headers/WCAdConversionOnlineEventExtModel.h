//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WCAdConversionOnlineEventExtModel : NSObject
{
    int _enterScene;
    NSString *_uxInfo;
    NSString *_canvasId;
    NSString *_adExtInfo;
}

+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *adExtInfo; // @synthesize adExtInfo=_adExtInfo;
@property(nonatomic) int enterScene; // @synthesize enterScene=_enterScene;
@property(retain, nonatomic) NSString *canvasId; // @synthesize canvasId=_canvasId;
@property(retain, nonatomic) NSString *uxInfo; // @synthesize uxInfo=_uxInfo;

@end

