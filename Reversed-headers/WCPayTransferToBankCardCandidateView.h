//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UITableView;
@protocol WCPayTransferToBankCardCandidateViewDelegate;

@interface WCPayTransferToBankCardCandidateView : MMUIView <UITableViewDelegate, UITableViewDataSource>
{
    UITableView *m_candidateTableView;
    id <WCPayTransferToBankCardCandidateViewDelegate> m_delegate;
    unsigned long long m_enMatchRule;
    NSMutableArray *_m_resultsArray;
    NSString *_m_inputText;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_inputText; // @synthesize m_inputText=_m_inputText;
@property(retain, nonatomic) NSMutableArray *m_resultsArray; // @synthesize m_resultsArray=_m_resultsArray;
@property(nonatomic) unsigned long long m_enMatchRule; // @synthesize m_enMatchRule;
@property(nonatomic) __weak id <WCPayTransferToBankCardCandidateViewDelegate> m_delegate; // @synthesize m_delegate;
- (void)layoutCell:(id)arg1 candidate:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)reloadCandidateView;
- (void)dealloc;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)initView;
- (void)reloadCandidateViewWithMatchResults:(id)arg1 matchType:(unsigned long long)arg2 inputText:(id)arg3;
- (void)initTableView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

