//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WCCardPkgMsgAcceptItem : NSObject
{
    unsigned int endTime;
    unsigned int actionType;
    NSString *title;
    NSString *subTitle;
    NSString *cardId;
    NSString *cardExt;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int actionType; // @synthesize actionType;
@property(nonatomic) unsigned int endTime; // @synthesize endTime;
@property(retain, nonatomic) NSString *cardExt; // @synthesize cardExt;
@property(retain, nonatomic) NSString *cardId; // @synthesize cardId;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title;
- (_Bool)IsAcceptItemValid;
- (void)dealloc;

@end

