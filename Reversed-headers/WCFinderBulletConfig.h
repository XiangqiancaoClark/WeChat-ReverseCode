//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WCFinderBulletStyleConfig;

@interface WCFinderBulletConfig : NSObject
{
    double _gap;
    unsigned long long _lines;
    double _runDuration;
    double _playRate;
    double _videoDuration;
    CDUnknownBlockType _touchAction;
    WCFinderBulletStyleConfig *_defaultStyle;
    CDUnknownBlockType _itemConfigs;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType itemConfigs; // @synthesize itemConfigs=_itemConfigs;
@property(retain, nonatomic) WCFinderBulletStyleConfig *defaultStyle; // @synthesize defaultStyle=_defaultStyle;
@property(copy, nonatomic) CDUnknownBlockType touchAction; // @synthesize touchAction=_touchAction;
@property(nonatomic) double videoDuration; // @synthesize videoDuration=_videoDuration;
@property(nonatomic) double playRate; // @synthesize playRate=_playRate;
@property(nonatomic) double runDuration; // @synthesize runDuration=_runDuration;
@property(nonatomic) unsigned long long lines; // @synthesize lines=_lines;
@property(nonatomic) double gap; // @synthesize gap=_gap;

@end
