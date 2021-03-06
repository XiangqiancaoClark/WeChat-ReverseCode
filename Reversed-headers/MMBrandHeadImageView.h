//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

#import "IContactMgrExt-Protocol.h"
#import "IStrangerContactMgrExt-Protocol.h"

@class MMWebImageView, NSString, UIImageView;

@interface MMBrandHeadImageView : UIButton <IContactMgrExt, IStrangerContactMgrExt>
{
    UIImageView *m_frameView;
    MMWebImageView *m_headView;
    struct CGSize m_headSize;
    NSString *m_username;
    id m_oTarget;
    SEL m_selAction;
    id m_object;
}

+ (id)getFTSFeatureBrandHeadImageViewFromUrl:(id)arg1 username:(id)arg2;
+ (id)getFTSBrandHeadImageViewFromUrl:(id)arg1 username:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) id m_object; // @synthesize m_object;
@property(nonatomic) SEL m_selAction; // @synthesize m_selAction;
@property(nonatomic) __weak id m_oTarget; // @synthesize m_oTarget;
@property(nonatomic) struct CGSize m_headSize; // @synthesize m_headSize;
@property(retain, nonatomic) MMWebImageView *m_headView; // @synthesize m_headView;
@property(retain, nonatomic) UIImageView *m_frameView; // @synthesize m_frameView;
- (void)OnPress:(id)arg1;
- (void)setTarget:(id)arg1 action:(SEL)arg2 withObject:(id)arg3;
- (void)setTarget:(id)arg1 action:(SEL)arg2;
- (void)layoutSubviews;
- (void)onStrangerContactUpdated:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (void)setHeadViewByUsername:(id)arg1;
- (void)setUserName:(id)arg1;
- (void)setUpdateUrl:(id)arg1;
- (id)getUpdateUrl;
- (void)dealloc;
- (void)SetHeadImage:(id)arg1;
- (void)TrySetDefaultHeadImage:(id)arg1;
- (void)TrySetDefaultHeadImage;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

