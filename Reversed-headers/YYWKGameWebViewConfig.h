//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface YYWKGameWebViewConfig : NSObject
{
    _Bool _useUrlSchemeHandler;
    _Bool _useLoadHtmlString;
    NSString *_customScript;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *customScript; // @synthesize customScript=_customScript;
@property(nonatomic) _Bool useLoadHtmlString; // @synthesize useLoadHtmlString=_useLoadHtmlString;
@property(nonatomic) _Bool useUrlSchemeHandler; // @synthesize useUrlSchemeHandler=_useUrlSchemeHandler;
- (id)toDictDesc;

@end

