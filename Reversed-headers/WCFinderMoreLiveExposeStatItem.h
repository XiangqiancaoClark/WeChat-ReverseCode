//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WCFinderMoreLiveExposeStatItem : NSObject
{
    unsigned long long _lastEnterMoreLivePageTime;
    unsigned long long _lastExitMoreLivePageTime;
    unsigned long long _frontTime;
    double _lastCalcOffsetY;
    unsigned long long _lastCalcOffsetTime;
}

@property(nonatomic) unsigned long long lastCalcOffsetTime; // @synthesize lastCalcOffsetTime=_lastCalcOffsetTime;
@property(nonatomic) double lastCalcOffsetY; // @synthesize lastCalcOffsetY=_lastCalcOffsetY;
@property(nonatomic) unsigned long long frontTime; // @synthesize frontTime=_frontTime;
@property(nonatomic) unsigned long long lastExitMoreLivePageTime; // @synthesize lastExitMoreLivePageTime=_lastExitMoreLivePageTime;
@property(nonatomic) unsigned long long lastEnterMoreLivePageTime; // @synthesize lastEnterMoreLivePageTime=_lastEnterMoreLivePageTime;

@end

