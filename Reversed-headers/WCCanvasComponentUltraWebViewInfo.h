//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "NSCoding-Protocol.h"

@class NSString;

@interface WCCanvasComponentUltraWebViewInfo : MMObject <NSCoding>
{
    _Bool _hideWebViewProgress;
    NSString *_webViewUrl;
    double _webViewWidth;
    double _webViewHeight;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hideWebViewProgress; // @synthesize hideWebViewProgress=_hideWebViewProgress;
@property(nonatomic) double webViewHeight; // @synthesize webViewHeight=_webViewHeight;
@property(nonatomic) double webViewWidth; // @synthesize webViewWidth=_webViewWidth;
@property(retain, nonatomic) NSString *webViewUrl; // @synthesize webViewUrl=_webViewUrl;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

