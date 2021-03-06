//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GCChatBaseCellModel.h"

@class GCImgLinkVideoModel, JumpInfo, NSString;

@interface GCImgLinkCellModel : GCChatBaseCellModel
{
    GCImgLinkVideoModel *_videoModel;
    NSString *_coverUrl;
    JumpInfo *_jumpInfo;
    struct CGSize _imgSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) JumpInfo *jumpInfo; // @synthesize jumpInfo=_jumpInfo;
@property(retain, nonatomic) NSString *coverUrl; // @synthesize coverUrl=_coverUrl;
@property(retain, nonatomic) GCImgLinkVideoModel *videoModel; // @synthesize videoModel=_videoModel;
@property(nonatomic) struct CGSize imgSize; // @synthesize imgSize=_imgSize;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (Class)bindCellClass;
- (id)initWithChatroomMessage:(id)arg1;

@end

