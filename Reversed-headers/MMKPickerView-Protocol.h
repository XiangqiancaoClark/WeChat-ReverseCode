//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMKView-Protocol.h"

@class MMVoidListCallback, NSArray;

@protocol MMKPickerView <MMKView>
- (void)setSelectedRows:(NSArray *)arg1;
- (NSArray *)getCurrentSelectedRows;
- (void)setCallbackImpl:(MMVoidListCallback *)arg1;
- (void)setSyncData:(NSArray *)arg1 secondColumn:(NSArray *)arg2;
- (void)setNormalData:(NSArray *)arg1;
@end

