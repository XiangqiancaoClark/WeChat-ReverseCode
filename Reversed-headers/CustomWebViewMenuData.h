//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, UIImage;

@interface CustomWebViewMenuData : NSObject
{
    NSString *_mainMenuID;
    NSString *_mainMenuIconImageName;
    UIImage *_mainMenuIconImage;
    NSString *_mainMenuUrl;
    NSString *_mainMenuTitle;
    unsigned long long _mainMenuActionType;
    NSArray *_menuItems;
    NSArray *_domains;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *domains; // @synthesize domains=_domains;
@property(retain, nonatomic) NSArray *menuItems; // @synthesize menuItems=_menuItems;
@property(nonatomic) unsigned long long mainMenuActionType; // @synthesize mainMenuActionType=_mainMenuActionType;
@property(retain, nonatomic) NSString *mainMenuTitle; // @synthesize mainMenuTitle=_mainMenuTitle;
@property(retain, nonatomic) NSString *mainMenuUrl; // @synthesize mainMenuUrl=_mainMenuUrl;
@property(retain, nonatomic) UIImage *mainMenuIconImage; // @synthesize mainMenuIconImage=_mainMenuIconImage;
@property(retain, nonatomic) NSString *mainMenuIconImageName; // @synthesize mainMenuIconImageName=_mainMenuIconImageName;
@property(retain, nonatomic) NSString *mainMenuID; // @synthesize mainMenuID=_mainMenuID;
- (_Bool)shouldShowCustomizeMenuWithUrl:(id)arg1;

@end

