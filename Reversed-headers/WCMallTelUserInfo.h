//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface WCMallTelUserInfo : NSObject <NSCoding>
{
    NSString *m_nsUserName;
    NSString *m_nsTelephoneNumber;
    NSString *m_nsOperatorName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_nsOperatorName; // @synthesize m_nsOperatorName;
@property(retain, nonatomic) NSString *m_nsUserName; // @synthesize m_nsUserName;
@property(retain, nonatomic) NSString *m_nsTelephoneNumber; // @synthesize m_nsTelephoneNumber;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

