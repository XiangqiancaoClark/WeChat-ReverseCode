//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor;

@interface QTextStyle : NSObject
{
    int _priority;
    UIColor *_textColor;
    UIColor *_strokeColor;
    double _fontSize;
}

- (void).cxx_destruct;
@property(nonatomic) int priority; // @synthesize priority=_priority;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
- (id)init;

@end

