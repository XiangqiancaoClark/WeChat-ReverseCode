//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSMutableArray;

@interface WCWebImageBrowserConfig : MMObject
{
    _Bool _enableBottomBar;
    NSMutableArray *_arrImageSourceInfos;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *arrImageSourceInfos; // @synthesize arrImageSourceInfos=_arrImageSourceInfos;
@property(nonatomic) _Bool enableBottomBar; // @synthesize enableBottomBar=_enableBottomBar;
- (id)init;

@end

