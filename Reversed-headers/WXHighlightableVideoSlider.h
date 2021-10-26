//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXVideoSlider.h"

@class UIImage;

@interface WXHighlightableVideoSlider : WXVideoSlider
{
    _Bool _hasTouched;
    UIImage *_interactiveFrontgroundImage;
    UIImage *_interactiveBackgroundImage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *interactiveBackgroundImage; // @synthesize interactiveBackgroundImage=_interactiveBackgroundImage;
@property(retain, nonatomic) UIImage *interactiveFrontgroundImage; // @synthesize interactiveFrontgroundImage=_interactiveFrontgroundImage;
@property(nonatomic) _Bool hasTouched; // @synthesize hasTouched=_hasTouched;
- (struct CGRect)thumbRectForBounds:(struct CGRect)arg1 trackRect:(struct CGRect)arg2 value:(float)arg3;
- (id)imageWithHeight:(double)arg1 alpha:(double)arg2;
- (id)getFrontgroundImage;
- (id)getBackgroundImage;
- (id)dotImage;

@end
