//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewControllerDelegate-Protocol.h"

@class NSArray, NSString;

@protocol ContactBatchModifyLogicDelegate <MMUIViewControllerDelegate>
- (void)OnContactBatchModifySnsNointeresting:(NSArray *)arg1 resultFlag:(_Bool)arg2;
- (void)OnContactBatchModify:(NSArray *)arg1 withRet:(unsigned int)arg2 errorMsg:(NSString *)arg3 isNetWorkError:(_Bool)arg4;
@end

