//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, QAnimation;

@interface QVectorHeatOverlayOption : NSObject
{
    _Bool _enable3D;
    int _type;
    double _size;
    double _gap;
    double _opacity;
    double _minZoom;
    double _maxZoom;
    double _minHeight;
    double _maxHeight;
    double _minIntensity;
    double _maxIntensity;
    QAnimation *_animation;
    NSArray *_colors;
    NSArray *_startPoints;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *startPoints; // @synthesize startPoints=_startPoints;
@property(retain, nonatomic) NSArray *colors; // @synthesize colors=_colors;
@property(retain, nonatomic) QAnimation *animation; // @synthesize animation=_animation;
@property(nonatomic) _Bool enable3D; // @synthesize enable3D=_enable3D;
@property(nonatomic) double maxIntensity; // @synthesize maxIntensity=_maxIntensity;
@property(nonatomic) double minIntensity; // @synthesize minIntensity=_minIntensity;
@property(nonatomic) double maxHeight; // @synthesize maxHeight=_maxHeight;
@property(nonatomic) double minHeight; // @synthesize minHeight=_minHeight;
@property(nonatomic) double maxZoom; // @synthesize maxZoom=_maxZoom;
@property(nonatomic) double minZoom; // @synthesize minZoom=_minZoom;
@property(nonatomic) double opacity; // @synthesize opacity=_opacity;
@property(nonatomic) double gap; // @synthesize gap=_gap;
@property(nonatomic) double size; // @synthesize size=_size;
@property(nonatomic) int type; // @synthesize type=_type;
- (void)setColors:(id)arg1 startPoints:(id)arg2;
- (id)init;

@end
