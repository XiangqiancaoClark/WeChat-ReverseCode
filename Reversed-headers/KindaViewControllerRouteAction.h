//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol KindaViewControllerRouteActionDelegate;

@interface KindaViewControllerRouteAction : NSObject
{
    id <KindaViewControllerRouteActionDelegate> _delegate;
    CDUnknownBlockType _action;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
@property(nonatomic) __weak id <KindaViewControllerRouteActionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)run:(id)arg1;
- (id)initWithAction:(CDUnknownBlockType)arg1;

@end

