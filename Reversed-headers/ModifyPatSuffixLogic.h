//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@protocol ModifyPatSuffixLogicDelegate;

@interface ModifyPatSuffixLogic : MMObject
{
    id <ModifyPatSuffixLogicDelegate> _m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <ModifyPatSuffixLogicDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)oplogRet:(int)arg1 errMsg:(id)arg2 eventID:(unsigned int)arg3 cgiWrap:(id)arg4;
- (void)modifiedPatSuffix:(id)arg1;

@end
