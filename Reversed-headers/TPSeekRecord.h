//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface TPSeekRecord : NSObject
{
    _Bool _isSeeking;
    unsigned long long _lastEvent;
    long long _seekBufferedCount;
    NSMutableArray *_seekItemArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *seekItemArray; // @synthesize seekItemArray=_seekItemArray;
@property(nonatomic) _Bool isSeeking; // @synthesize isSeeking=_isSeeking;
@property(nonatomic) long long seekBufferedCount; // @synthesize seekBufferedCount=_seekBufferedCount;
@property(nonatomic) unsigned long long lastEvent; // @synthesize lastEvent=_lastEvent;

@end

