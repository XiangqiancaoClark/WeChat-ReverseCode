//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAAppMessageBaseViewModel.h"

@class CContact, NSData, NSString, UIImage;

@interface WAAppVideoViewModel : WAAppMessageBaseViewModel
{
    NSString *m_videoPath;
    struct CGSize m_thumbImageSize;
    NSString *_videoTitle;
    CContact *_appContact;
}

+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) CContact *appContact; // @synthesize appContact=_appContact;
@property(readonly, nonatomic) NSString *videoTitle; // @synthesize videoTitle=_videoTitle;
@property(readonly, nonatomic) struct CGSize thumbImageSize; // @synthesize thumbImageSize=m_thumbImageSize;
@property(readonly, nonatomic) NSString *videoPath; // @synthesize videoPath=m_videoPath;
- (id)additionalAccessibilityDescription;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (id)sourceTitle;
- (id)sourceIcon;
- (id)cellViewClassName;
- (_Bool)shouldShowSourceViewInContent;
- (_Bool)isTailPart;
- (_Bool)isShowSourceView;
@property(readonly, nonatomic) _Bool canShare;
@property(readonly, nonatomic) NSData *thumbImageData;
@property(readonly, nonatomic) UIImage *thumbImage;
- (void)makeWeishiDemo;
- (void)dealloc;
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;

@end

