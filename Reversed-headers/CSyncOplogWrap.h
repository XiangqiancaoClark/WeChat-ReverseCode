//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableData;

@interface CSyncOplogWrap : NSObject
{
    unsigned int m_uiOplogID;
    unsigned int m_uiCmdID;
    NSMutableData *m_dtBuffer;
    unsigned int m_uiRetryCount;
    unsigned int m_uiItemID;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int m_uiItemID; // @synthesize m_uiItemID;
@property(nonatomic) unsigned int m_uiRetryCount; // @synthesize m_uiRetryCount;
@property(retain, nonatomic) NSMutableData *m_dtBuffer; // @synthesize m_dtBuffer;
@property(nonatomic) unsigned int m_uiCmdID; // @synthesize m_uiCmdID;
@property(nonatomic) unsigned int m_uiOplogID; // @synthesize m_uiOplogID;
- (id)init;

@end

