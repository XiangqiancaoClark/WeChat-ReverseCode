//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@interface MiniTaskConfigUtil : MMObject
{
}

+ (double)createTimeOfFirstMiniTaskRecord;
+ (void)setHasAppendMiniTaskRecord;
+ (_Bool)hasAppendMiniTaskRecord;
+ (void)resetShowEducationViewRecord;
+ (_Bool)checkShouldShowEducationView;
+ (void)resetExitByRightEdgeGestureRecord;
+ (void)onExitByRightEdgeGestureOrEduLabel;
+ (_Bool)hasExitByRightEdgeGesture;
+ (unsigned int)miniTaskCardFullScreenTime;
+ (unsigned int)miniTaskRecordsMaxiumLimit;
+ (id)miniTaskConfigKv;

@end
