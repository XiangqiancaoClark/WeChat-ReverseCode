//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "LiteAppCallback-Protocol.h"

@class NSString;

@interface LiteAppCallbackImpl : NSObject <LiteAppCallback>
{
}

- (void)onExitLiteApp:(id)arg1;
- (void)onEnterLiteApp:(id)arg1;
- (id)getLiteAppInfo:(id)arg1;
- (id)getLiteAppDataPath;
- (id)getOfflineResource:(id)arg1 tag:(id)arg2 url:(id)arg3;
- (id)getDModel;
- (id)getUin;
- (id)getCurSystemLanguage;
- (long long)getNet;
- (id)getClientVersionStr;
- (unsigned int)getClientVersion;
- (void)reportException:(id)arg1;
- (void)dataReporting:(id)arg1 data:(id)arg2;
- (void)reportIdKey:(unsigned int)arg1 key:(unsigned int)arg2 value:(unsigned int)arg3;
- (void)reportKv:(unsigned int)arg1 value:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

