//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSNumber, NSString;

@interface WCPayLoanEntryInfo : NSObject <NSCoding>
{
    _Bool _m_isShowEntry;
    unsigned int _m_index;
    NSString *_m_loanJumpUrl;
    NSString *_m_title;
    NSString *_m_tips;
    NSNumber *_m_availableOtb;
    NSNumber *_m_isOverdue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *m_isOverdue; // @synthesize m_isOverdue=_m_isOverdue;
@property(retain, nonatomic) NSNumber *m_availableOtb; // @synthesize m_availableOtb=_m_availableOtb;
@property(retain, nonatomic) NSString *m_tips; // @synthesize m_tips=_m_tips;
@property(retain, nonatomic) NSString *m_title; // @synthesize m_title=_m_title;
@property(retain, nonatomic) NSString *m_loanJumpUrl; // @synthesize m_loanJumpUrl=_m_loanJumpUrl;
@property(nonatomic) unsigned int m_index; // @synthesize m_index=_m_index;
@property(nonatomic) _Bool m_isShowEntry; // @synthesize m_isShowEntry=_m_isShowEntry;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

