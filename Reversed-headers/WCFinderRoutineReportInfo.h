//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface WCFinderRoutineReportInfo : NSObject
{
    _Bool _isFullScreen;
    unsigned long long _scene;
    NSString *_feedId;
    unsigned long long _actionType;
    NSMutableDictionary *_actionValueDict;
    long long _actionValue;
    unsigned long long _actionTimestamp;
    unsigned long long _mediaType;
    NSString *_sessionBuffer;
    unsigned long long _videoDurationTime;
    NSString *_longVideoId;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isFullScreen; // @synthesize isFullScreen=_isFullScreen;
@property(copy, nonatomic) NSString *longVideoId; // @synthesize longVideoId=_longVideoId;
@property(nonatomic) unsigned long long videoDurationTime; // @synthesize videoDurationTime=_videoDurationTime;
@property(retain, nonatomic) NSString *sessionBuffer; // @synthesize sessionBuffer=_sessionBuffer;
@property(nonatomic) unsigned long long mediaType; // @synthesize mediaType=_mediaType;
@property(nonatomic) unsigned long long actionTimestamp; // @synthesize actionTimestamp=_actionTimestamp;
@property(nonatomic) long long actionValue; // @synthesize actionValue=_actionValue;
@property(retain, nonatomic) NSMutableDictionary *actionValueDict; // @synthesize actionValueDict=_actionValueDict;
@property(nonatomic) unsigned long long actionType; // @synthesize actionType=_actionType;
@property(copy, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
- (id)replaceCommaToSemicolon:(id)arg1;
- (id)reportInfoStr;

@end

