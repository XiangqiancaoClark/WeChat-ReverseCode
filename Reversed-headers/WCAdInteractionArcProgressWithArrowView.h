//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCAdInteractionContentView.h"

@class CAShapeLayer;

@interface WCAdInteractionArcProgressWithArrowView : WCAdInteractionContentView
{
    double _currentProgress;
    CAShapeLayer *_progressArcLayer;
    CAShapeLayer *_progressTriangleLayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CAShapeLayer *progressTriangleLayer; // @synthesize progressTriangleLayer=_progressTriangleLayer;
@property(retain, nonatomic) CAShapeLayer *progressArcLayer; // @synthesize progressArcLayer=_progressArcLayer;
@property(nonatomic) double currentProgress; // @synthesize currentProgress=_currentProgress;
- (void)updateProgressWith:(double)arg1;
- (void)organizeSubContentViews;

@end
