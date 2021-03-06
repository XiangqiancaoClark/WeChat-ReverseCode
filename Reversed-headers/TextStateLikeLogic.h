//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TextStateLikeData, WCCgiBlockHelper;
@protocol TextStateLikeLogicDelegate;

@interface TextStateLikeLogic : NSObject
{
    id <TextStateLikeLogicDelegate> _delegate;
    WCCgiBlockHelper *_cgiHelper;
    TextStateLikeData *_likeData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TextStateLikeData *likeData; // @synthesize likeData=_likeData;
@property(retain, nonatomic) WCCgiBlockHelper *cgiHelper; // @synthesize cgiHelper=_cgiHelper;
@property(nonatomic) __weak id <TextStateLikeLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)requestWithTextStateId:(id)arg1 topicId:(id)arg2 username:(id)arg3 expiredTime:(unsigned int)arg4 deleteFlag:(int)arg5 likeType:(long long)arg6;
- (void)saveToLocal;
- (void)loadFromLocal;
- (long long)likeStateForUsername:(id)arg1;
- (void)unlikeTextStateForContact:(id)arg1;
- (void)likeTextStateForContact:(id)arg1 likeType:(long long)arg2;
- (id)init;

@end

