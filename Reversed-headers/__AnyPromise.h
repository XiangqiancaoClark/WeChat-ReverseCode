//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface __AnyPromise : NSObject
{
    // Error parsing type: , name: box
    // Error parsing type: , name: context
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) _Bool __pending;
@property(nonatomic, readonly) id __value;
- (void)__pipe:(CDUnknownBlockType)arg1;
- (id)__wait;
- (id)__ensureOn:(id)arg1 execute:(CDUnknownBlockType)arg2;
- (id)__catchOn:(id)arg1 execute:(CDUnknownBlockType)arg2;
- (id)__thenOn:(id)arg1 execute:(CDUnknownBlockType)arg2;
- (void)setExpiredWithTime:(double)arg1;
- (void)sealTimeOutError;
- (id)initWithResolver:(CDUnknownBlockType)arg1;

@end

