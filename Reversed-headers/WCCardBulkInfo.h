//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSMutableArray, NSString;

@interface WCCardBulkInfo : MMObject
{
    _Bool _acceptButtonStatus;
    unsigned int _privateStatus;
    NSMutableArray *_cardDataList;
    NSString *_acceptButtonWording;
    NSString *_privateWording;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *privateWording; // @synthesize privateWording=_privateWording;
@property(nonatomic) _Bool acceptButtonStatus; // @synthesize acceptButtonStatus=_acceptButtonStatus;
@property(nonatomic) unsigned int privateStatus; // @synthesize privateStatus=_privateStatus;
@property(retain, nonatomic) NSString *acceptButtonWording; // @synthesize acceptButtonWording=_acceptButtonWording;
@property(retain, nonatomic) NSMutableArray *cardDataList; // @synthesize cardDataList=_cardDataList;

@end

