//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMWebCanvasLayoutData, NSDictionary, NSString;

@protocol MMCanvasRenderClientContextDelegate <NSObject>
- (void)onCallbackWithId:(NSString *)arg1 params:(NSDictionary *)arg2;
- (void)onCanvasSetHeight:(double)arg1 forCanvasId:(NSString *)arg2;
- (void)onSaveLayoutData:(MMWebCanvasLayoutData *)arg1 forCanvasId:(NSString *)arg2;
- (MMWebCanvasLayoutData *)getLayoutDataForCanvasId:(NSString *)arg1;
@end

