//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate-Protocol.h"

@class NSMutableArray;
@protocol FavSecurityDelegate;

@interface FavSecurityLogic : MMObject <PBMessageObserverDelegate>
{
    NSMutableArray *_infoArray;
    unsigned int _curCheckingId;
    id <FavSecurityDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <FavSecurityDelegate> delegate; // @synthesize delegate=_delegate;
- (void)HandleResp:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)runCheck;
- (void)checkSecurity:(id)arg1;
- (void)cancelCheck:(unsigned int)arg1;
- (id)init;

@end

