//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface AnnotationUnSelectContentView : UIView
{
    UIView *_outerContentView;
    UIView *_innerContentView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *innerContentView; // @synthesize innerContentView=_innerContentView;
@property(retain, nonatomic) UIView *outerContentView; // @synthesize outerContentView=_outerContentView;
- (void)layoutInnerContentView;
- (void)layoutOuterContentView;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

