//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIColor;

@interface WCPayTransferMoneyAntiCheatViewData : NSObject
{
    _Bool _isShowNotice;
    unsigned int _jumpType;
    NSString *_antiCheatHint;
    UIColor *_antiCheatHintColor;
    UIColor *_antiCheatHintColorDark;
    NSString *_lefticon;
    NSString *_lefticonDark;
    NSString *_righticon;
    NSString *_righticonDark;
    NSString *_url;
    NSString *_userName;
    NSString *_pagepath;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *pagepath; // @synthesize pagepath=_pagepath;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) unsigned int jumpType; // @synthesize jumpType=_jumpType;
@property(retain, nonatomic) NSString *righticonDark; // @synthesize righticonDark=_righticonDark;
@property(retain, nonatomic) NSString *righticon; // @synthesize righticon=_righticon;
@property(retain, nonatomic) NSString *lefticonDark; // @synthesize lefticonDark=_lefticonDark;
@property(retain, nonatomic) NSString *lefticon; // @synthesize lefticon=_lefticon;
@property(retain, nonatomic) UIColor *antiCheatHintColorDark; // @synthesize antiCheatHintColorDark=_antiCheatHintColorDark;
@property(retain, nonatomic) UIColor *antiCheatHintColor; // @synthesize antiCheatHintColor=_antiCheatHintColor;
@property(retain, nonatomic) NSString *antiCheatHint; // @synthesize antiCheatHint=_antiCheatHint;
@property(nonatomic) _Bool isShowNotice; // @synthesize isShowNotice=_isShowNotice;

@end

