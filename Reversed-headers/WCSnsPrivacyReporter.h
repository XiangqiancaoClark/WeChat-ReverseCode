//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface WCSnsPrivacyReporter : NSObject
{
    NSMutableSet *_cachedMemeberSet;
    NSMutableSet *_initialMemberSet;
    NSMutableSet *_importFromGroupSet;
    NSMutableSet *_importFromSelectSet;
    NSMutableSet *_removedMemberSet;
    unsigned int _startTime;
    unsigned int _stayTimeInSec;
    _Bool _bOutsider;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bOutsider; // @synthesize bOutsider=_bOutsider;
- (void)finishByCancel:(_Bool)arg1;
- (id)formatUsrs:(id)arg1;
- (void)disselecteMember:(id)arg1;
- (void)importFromSelectMembers:(id)arg1;
- (void)importFromGroupMembers:(id)arg1;
- (void)setInitailMembers:(id)arg1;
- (void)beginSetting;
- (void)onEnterForeground:(id)arg1;
- (void)onEnterBackground:(id)arg1;
- (void)dealloc;
- (id)init;

@end

