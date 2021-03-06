//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIAccessibilityElement.h>

@class QMapView;

@interface QBaseAccessibilityElement : UIAccessibilityElement
{
    int _flickcount;
    QMapView *_baseMapView;
}

- (void).cxx_destruct;
@property(nonatomic) int flickcount; // @synthesize flickcount=_flickcount;
@property(nonatomic) __weak QMapView *baseMapView; // @synthesize baseMapView=_baseMapView;
- (void)resetFlickCount;
- (void)changeMapCenter:(struct CGPoint)arg1;
- (struct CGPoint)makeMovementPoint:(double)arg1 withYRatio:(double)arg2;
- (id)createRotorItemWithPreviousDirection:(id)arg1;
- (id)createRotorItemWithNextDirection:(id)arg1;
- (id)buildPOIRotor;
- (id)buildZoomRotor;
- (_Bool)accessibilityScroll:(long long)arg1;
- (void)setMapZoomLevelDelta:(int)arg1;
- (id)description;

@end

