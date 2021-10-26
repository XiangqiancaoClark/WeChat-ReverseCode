//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMTimer, SimpleRecordState;

@interface SimpleAudioRecorder : NSObject
{
    _Bool _m_hasPrepare;
    MMTimer *_m_meterTimer;
    SimpleRecordState *_m_bufferState;
}

+ (void)sprintRetCode:(int)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool m_hasPrepare; // @synthesize m_hasPrepare=_m_hasPrepare;
@property(retain, nonatomic) SimpleRecordState *m_bufferState; // @synthesize m_bufferState=_m_bufferState;
@property(retain, nonatomic) MMTimer *m_meterTimer; // @synthesize m_meterTimer=_m_meterTimer;
- (void)printRetCode:(int)arg1;
- (void)stop;
- (_Bool)record;
- (_Bool)audioQueueStop;
- (_Bool)audioQueueStart;
- (_Bool)prepareRecord;
- (_Bool)updateBuffer;
- (void)clearBuffer;
- (_Bool)updateQueue;
- (void)clearQueue;
- (_Bool)updateDataFormat;
- (long long)RecordingTime;
- (id)getState;
- (void)onMeterChange;
- (id)init;
- (void)dealloc;

@end
