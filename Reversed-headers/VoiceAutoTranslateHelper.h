//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "VoiceTranslateExt-Protocol.h"

@class NSMutableArray, NSString, VoiceAutoTransReporter;
@protocol VoiceAutoTranslateHelperDelegate;

@interface VoiceAutoTranslateHelper : NSObject <VoiceTranslateExt>
{
    id <VoiceAutoTranslateHelperDelegate> m_delegate;
    _Bool _bAutoScrollUp;
    _Bool _continueTranslate;
    VoiceAutoTransReporter *_reporter;
    NSMutableArray *_autoTranslateQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *autoTranslateQueue; // @synthesize autoTranslateQueue=_autoTranslateQueue;
@property(retain, nonatomic) VoiceAutoTransReporter *reporter; // @synthesize reporter=_reporter;
@property(nonatomic) _Bool continueTranslate; // @synthesize continueTranslate=_continueTranslate;
@property(nonatomic) _Bool bAutoScrollUp; // @synthesize bAutoScrollUp=_bAutoScrollUp;
@property(nonatomic) __weak id <VoiceAutoTranslateHelperDelegate> m_delegate; // @synthesize m_delegate;
- (unsigned long long)getMsgIndexWithLocalId:(unsigned int)arg1 InArr:(id)arg2;
- (void)OnUserScrollView:(id)arg1;
- (void)OnStopAutoScrollUp;
- (void)OnVoiceTranslateEnd:(id)arg1 StopReason:(int)arg2;
- (void)OnVoiceTranslateStart:(id)arg1;
- (void)AddMessageLocalID:(unsigned int)arg1;
- (id)getSortMsgArr;
- (void)onVoiceStartTranslate:(id)arg1;
- (void)StopAutoVoiceTranslate;
- (void)translateMsgList;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

