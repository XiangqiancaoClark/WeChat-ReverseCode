//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSArray;

@interface WCWebJSMenuShowConfig : MMObject
{
    unsigned int _forbigFlag;
    NSArray *_arrMenuItems;
    long long _menuUIStyle;
}

- (void).cxx_destruct;
@property(nonatomic) long long menuUIStyle; // @synthesize menuUIStyle=_menuUIStyle;
@property(retain, nonatomic) NSArray *arrMenuItems; // @synthesize arrMenuItems=_arrMenuItems;
@property(nonatomic) unsigned int forbigFlag; // @synthesize forbigFlag=_forbigFlag;
- (_Bool)isForbigChangeFontSizeMenuButton;
- (_Bool)isForbigSearchInArticleMenuButton;
- (id)init;

@end

