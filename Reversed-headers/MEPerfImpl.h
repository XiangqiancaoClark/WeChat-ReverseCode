//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MEPerfImpl : NSObject
{
    long long initMagicEmojiType;
    long long benchMarkLevel;
    long long maxRamAlertCount;
    long long maxReloadCount;
    long long refreshReloadTime;
    _Bool destroyOnBack;
    _Bool destroyOnExit;
    long long hasRamAlertNum;
    long long hasReloadNum;
    _Bool hasRamAlertRelease;
    struct timeval ramAlertReleaseTimeval;
    NSString *sessionID;
    _Bool _isReady;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isReady; // @synthesize isReady=_isReady;
- (id)getSessionID;
- (_Bool)setup;
- (void)releaseMEFramework:(unsigned int)arg1;
- (void)dealloc;

@end

