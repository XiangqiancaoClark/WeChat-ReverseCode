//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WCFinderStreamEntranceReportModel : NSObject
{
    _Bool _findEntranceHasRedDot;
    _Bool _recommendTabRedDot;
    _Bool _followTabRedDot;
    _Bool _machineTabRedDot;
    _Bool _isChangeByScrollTab;
    unsigned long long _lastSelectTabIndex;
    unsigned long long _lastTabType;
}

@property(nonatomic) _Bool isChangeByScrollTab; // @synthesize isChangeByScrollTab=_isChangeByScrollTab;
@property(nonatomic) unsigned long long lastTabType; // @synthesize lastTabType=_lastTabType;
@property(nonatomic) unsigned long long lastSelectTabIndex; // @synthesize lastSelectTabIndex=_lastSelectTabIndex;
@property(nonatomic) _Bool machineTabRedDot; // @synthesize machineTabRedDot=_machineTabRedDot;
@property(nonatomic) _Bool followTabRedDot; // @synthesize followTabRedDot=_followTabRedDot;
@property(nonatomic) _Bool recommendTabRedDot; // @synthesize recommendTabRedDot=_recommendTabRedDot;
@property(nonatomic) _Bool findEntranceHasRedDot; // @synthesize findEntranceHasRedDot=_findEntranceHasRedDot;
- (id)description;
- (void)resetDefault;

@end
