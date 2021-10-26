//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMMusicLiveBaseMsg, NSString;
@protocol MMMusicLiveCommentBaseViewModelDelegate;

@interface MMMusicLiveCommentBaseViewModel : NSObject
{
    id <MMMusicLiveCommentBaseViewModelDelegate> _delegate;
    unsigned long long _uniqueId;
    NSString *_username;
    NSString *_headUrl;
    NSString *_content;
    MMMusicLiveBaseMsg *_msg;
}

+ (id)modelWithPopMsg:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MMMusicLiveBaseMsg *msg; // @synthesize msg=_msg;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *headUrl; // @synthesize headUrl=_headUrl;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(nonatomic) unsigned long long uniqueId; // @synthesize uniqueId=_uniqueId;
@property(nonatomic) __weak id <MMMusicLiveCommentBaseViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)commitUpdate;

@end
