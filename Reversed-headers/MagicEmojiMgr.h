//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "MEFrameworkLoadDelegate-Protocol.h"
#import "MMServiceProtocol-Protocol.h"

@class MEEasterEggLogic, MEFramework, MESceneManager, METempChattingLogic, MMTableView, NSMutableArray, NSString;
@protocol MEMessageDelegate;

@interface MagicEmojiMgr : MMUserService <MEFrameworkLoadDelegate, MMServiceProtocol>
{
    _Bool hasInit;
    METempChattingLogic *m_TempChattingLogic;
    NSMutableArray *m_Managers;
    MESceneManager *m_SceneManager;
    _Bool hasCheckUpdate;
    _Bool _isViewReady;
    _Bool _isRuntimeReady;
    MMTableView *_tableView;
    MEFramework *_meFramework;
    METempChattingLogic *_tempChattingLogic;
    id <MEMessageDelegate> _messageDelegate;
    MEEasterEggLogic *_easterEggLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MEEasterEggLogic *easterEggLogic; // @synthesize easterEggLogic=_easterEggLogic;
@property(readonly, nonatomic) _Bool isRuntimeReady; // @synthesize isRuntimeReady=_isRuntimeReady;
@property(nonatomic) _Bool isViewReady; // @synthesize isViewReady=_isViewReady;
@property(nonatomic) __weak id <MEMessageDelegate> messageDelegate; // @synthesize messageDelegate=_messageDelegate;
@property(retain, nonatomic) METempChattingLogic *tempChattingLogic; // @synthesize tempChattingLogic=_tempChattingLogic;
@property(retain, nonatomic) MEFramework *meFramework; // @synthesize meFramework=_meFramework;
- (id)getSceneManager;
- (void)destroyManagers;
- (void)setupManagers;
- (id)getTempChattingLogic;
- (void)onWKTerminate;
- (void)onInject:(_Bool)arg1;
- (void)onServiceMemoryWarning;
- (void)onServiceTerminate;
- (void)onServiceInit;
- (_Bool)shouldCheckUpdate;
- (id)getRuntimeView;
- (void)setupWithDelegate:(id)arg1;
- (void)releaseMEFramework:(unsigned int)arg1;
- (void)releaseMEFramework;
- (void)clearAllEffect;
@property(readonly, nonatomic) __weak MMTableView *tableView; // @synthesize tableView=_tableView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
