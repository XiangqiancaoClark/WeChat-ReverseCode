//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IExptServiceExt-Protocol.h"

@class NSMutableArray, WCSessionFlowConfigModel, WCSessionPageConfigModel, WCSessionUBAConfigModel;

@interface WCSessionFlowConfiger : NSObject <IExptServiceExt>
{
    _Bool _isNeedReportSingle;
    _Bool _isNeedCollectSessionUBA;
    WCSessionFlowConfigModel *_sessionFlowConfigModel;
    WCSessionPageConfigModel *_sessionPageConfigModel;
    WCSessionUBAConfigModel *_sessionUBAConfigModel;
    NSMutableArray *_specialSessionConfig;
    NSMutableArray *_specialPageConfig;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *specialPageConfig; // @synthesize specialPageConfig=_specialPageConfig;
@property(retain, nonatomic) NSMutableArray *specialSessionConfig; // @synthesize specialSessionConfig=_specialSessionConfig;
@property(nonatomic) _Bool isNeedCollectSessionUBA; // @synthesize isNeedCollectSessionUBA=_isNeedCollectSessionUBA;
@property(nonatomic) _Bool isNeedReportSingle; // @synthesize isNeedReportSingle=_isNeedReportSingle;
@property(retain, nonatomic) WCSessionUBAConfigModel *sessionUBAConfigModel; // @synthesize sessionUBAConfigModel=_sessionUBAConfigModel;
@property(retain, nonatomic) WCSessionPageConfigModel *sessionPageConfigModel; // @synthesize sessionPageConfigModel=_sessionPageConfigModel;
@property(retain, nonatomic) WCSessionFlowConfigModel *sessionFlowConfigModel; // @synthesize sessionFlowConfigModel=_sessionFlowConfigModel;
- (_Bool)isSepecialSessionReportConflict;
- (id)getMMKV;
- (id)getSpecialPageConfig:(id)arg1;
- (id)getSpecialSessionConfig:(id)arg1;
- (void)initSpecialPageConfigs;
- (void)initSpecialSessionConfigs;
- (_Bool)isSessionControlMonitorUIcontrol;
- (_Bool)isSessionControlMonitorGesture;
- (_Bool)isSessionUBAMonitorSwitch;
- (_Bool)isSessionMonitorSwitch;
- (_Bool)isMonitorSessionFlow;
- (_Bool)isNeedReportSingleSwitch;
- (void)onSessionUBAConfigChange:(id)arg1 isDel:(_Bool)arg2;
- (void)onSessionPageConfigChange:(id)arg1 isDel:(_Bool)arg2 andSessionPageId:(unsigned int)arg3 needReport:(_Bool)arg4;
- (void)realHandleSessionConfigChange:(id)arg1 isDel:(_Bool)arg2 needReport:(_Bool)arg3 isLocal:(_Bool)arg4;
- (void)onSessionConfigChange:(id)arg1 isDel:(_Bool)arg2 needReport:(_Bool)arg3;
- (id)getMonitorViewOperation:(id)arg1 withPageName:(id)arg2 withViewID:(id)arg3;
- (id)getMonitorViewOperation:(id)arg1 withPageName:(id)arg2;
- (_Bool)isFilterPage:(id)arg1;
- (_Bool)isMainTabPage:(id)arg1;
- (_Bool)isBlackListPage:(id)arg1;
- (id)getSessionUBAUnitConfigModel:(id)arg1;
- (id)getPagePathConfigModels:(id)arg1;
- (id)getPagePathConfigModel:(id)arg1;
- (id)getSessionFlowSidByPageName:(id)arg1 withPrePage:(id)arg2 withSessionParamExpects:(id)arg3;
- (id)getSessionFlowConfigBySid:(id)arg1;
- (id)getSessionFlowConfigBySessionId:(id)arg1;
- (id)getSessionFlowConfigByPageName:(id)arg1 withPrePage:(id)arg2 withSessionParamExpects:(id)arg3;
- (id)getSessionFlowConfigsByPageName:(id)arg1 withPrePage:(id)arg2;
- (void)dealloc;
- (void)initSessionUBA;
- (void)initSessionPageConfig;
- (void)initSessionFlowConfig;
- (void)onClearData;
- (void)onInit;

@end
