//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBMessageObserverDelegate-Protocol.h"

@class MMUIViewController;

@interface WCFinderWecomAddFriendAssist : NSObject <PBMessageObserverDelegate>
{
    MMUIViewController *_vc;
}

+ (id)openOpenImContactInfo:(id)arg1 storeByVC:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) __weak MMUIViewController *vc; // @synthesize vc=_vc;
- (void)removeFromDisposeBag;
- (void)onContactSearchLogicFail:(id)arg1;
- (void)onContactSearchLogicDone:(id)arg1 FromScene:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleSearchOpenIMContactResp:(id)arg1;
- (void)startSearchCGI:(id)arg1;

@end

