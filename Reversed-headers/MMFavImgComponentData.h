//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMComponentData.h"

@class NSString;

@interface MMFavImgComponentData : MMComponentData
{
    _Bool _m_bUseWebImgView;
    unsigned int _m_CDNThumbSize;
    NSString *_m_ThumbPath;
    NSString *_m_CDNThumbUrl;
    NSString *_m_CDNThumbKey;
    NSString *_m_defaultThumbPath;
    NSString *_m_ocr;
    NSString *_m_WebImgUrl;
    long long _favType;
}

- (void).cxx_destruct;
@property(nonatomic) long long favType; // @synthesize favType=_favType;
@property(copy, nonatomic) NSString *m_WebImgUrl; // @synthesize m_WebImgUrl=_m_WebImgUrl;
@property(nonatomic) _Bool m_bUseWebImgView; // @synthesize m_bUseWebImgView=_m_bUseWebImgView;
@property(retain, nonatomic) NSString *m_ocr; // @synthesize m_ocr=_m_ocr;
@property(retain, nonatomic) NSString *m_defaultThumbPath; // @synthesize m_defaultThumbPath=_m_defaultThumbPath;
@property(nonatomic) unsigned int m_CDNThumbSize; // @synthesize m_CDNThumbSize=_m_CDNThumbSize;
@property(retain, nonatomic) NSString *m_CDNThumbKey; // @synthesize m_CDNThumbKey=_m_CDNThumbKey;
@property(retain, nonatomic) NSString *m_CDNThumbUrl; // @synthesize m_CDNThumbUrl=_m_CDNThumbUrl;
@property(retain, nonatomic) NSString *m_ThumbPath; // @synthesize m_ThumbPath=_m_ThumbPath;

@end

