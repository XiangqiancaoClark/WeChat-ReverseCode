//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MBJSContext, MBJSFunction;
@protocol MBRuntimeDelegate;

@interface MBEventHandlerBase : NSObject
{
    MBJSContext *__ctx;
    MBJSFunction *_callback;
    id <MBRuntimeDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MBRuntimeDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MBJSFunction *callback; // @synthesize callback=_callback;
- (void)dealloc;
- (void)endWithResult:(id)arg1;
- (id)handleEvent:(id)arg1;

@end

