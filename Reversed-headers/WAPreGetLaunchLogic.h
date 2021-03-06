//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WAPermissionMgrExtension-Protocol.h"

@class NSMutableArray, NSString;

@interface WAPreGetLaunchLogic : NSObject <WAPermissionMgrExtension>
{
    NSMutableArray *_arrFetchingCmds;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *arrFetchingCmds; // @synthesize arrFetchingCmds=_arrFetchingCmds;
- (void)onGetLaunchPermissionInfo:(id)arg1 isSuccess:(_Bool)arg2 errorCode:(int)arg3;
- (id)getFetchingCmdForAppid:(id)arg1 username:(id)arg2;
- (void)unMarkFetchingAppid:(id)arg1 username:(id)arg2;
- (_Bool)isFetchingAppid:(id)arg1 username:(id)arg2;
- (void)unMarkFetchingCmd:(id)arg1;
- (void)markFetchingCmd:(id)arg1;
- (void)doPreGetLaunchCmd:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

