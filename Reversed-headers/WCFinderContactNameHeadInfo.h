//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CContact, NSString, WCFinderContact;

@interface WCFinderContactNameHeadInfo : NSObject
{
    int _type;
    NSString *_name;
    NSString *_headUrl;
    NSString *_username;
    CContact *_contact;
    WCFinderContact *_finderContact;
}

+ (id)infoWithFinderContact:(id)arg1;
+ (id)infoWithWchatContact:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderContact *finderContact; // @synthesize finderContact=_finderContact;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(nonatomic) int type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *headUrl; // @synthesize headUrl=_headUrl;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;

@end
