//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PatDisplayConfiguration : NSObject
{
    _Bool _showLink;
    _Bool _showTextStateIcon;
    _Bool _showHighlightPat;
    _Bool _enableChangeSuffixRemind;
}

+ (id)attributedHighlightConfiguration;
+ (id)pureTextConfiguration;
+ (id)chatConfiguration;
@property(nonatomic) _Bool enableChangeSuffixRemind; // @synthesize enableChangeSuffixRemind=_enableChangeSuffixRemind;
@property(nonatomic) _Bool showHighlightPat; // @synthesize showHighlightPat=_showHighlightPat;
@property(nonatomic) _Bool showTextStateIcon; // @synthesize showTextStateIcon=_showTextStateIcon;
@property(nonatomic) _Bool showLink; // @synthesize showLink=_showLink;

@end

