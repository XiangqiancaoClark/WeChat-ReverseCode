//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface RSAEncryptObject : NSObject
{
    NSString *_m_publicPemKey;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_publicPemKey; // @synthesize m_publicPemKey=_m_publicPemKey;
- (id)encryptWithSourceString:(id)arg1;
- (id)initWithRSAPublicPemKey:(id)arg1;

@end

