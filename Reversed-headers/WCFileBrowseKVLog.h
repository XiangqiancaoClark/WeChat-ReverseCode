//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface WCFileBrowseKVLog : NSObject
{
    unsigned int _hasConfirm;
    unsigned int _switchToChat;
    unsigned int _switchToFav;
    unsigned int _switchToCloud;
    unsigned int _switchToAlbum;
    unsigned int _hasClickSearch;
    unsigned int _hasClickDetail;
    unsigned int _chatFileCount;
    unsigned int _favFileCount;
    unsigned int _cloudFileCount;
    unsigned int _albumFileCount;
    unsigned int _firstScreenCount;
    unsigned int _belowScreenCount;
    int _firstAssetIndex;
    int _firstScreenAssetNum;
    NSMutableSet *_keywordSet;
}

- (void).cxx_destruct;
@property(nonatomic) int firstScreenAssetNum; // @synthesize firstScreenAssetNum=_firstScreenAssetNum;
@property(nonatomic) int firstAssetIndex; // @synthesize firstAssetIndex=_firstAssetIndex;
@property(retain, nonatomic) NSMutableSet *keywordSet; // @synthesize keywordSet=_keywordSet;
@property(nonatomic) unsigned int belowScreenCount; // @synthesize belowScreenCount=_belowScreenCount;
@property(nonatomic) unsigned int firstScreenCount; // @synthesize firstScreenCount=_firstScreenCount;
@property(nonatomic) unsigned int albumFileCount; // @synthesize albumFileCount=_albumFileCount;
@property(nonatomic) unsigned int cloudFileCount; // @synthesize cloudFileCount=_cloudFileCount;
@property(nonatomic) unsigned int favFileCount; // @synthesize favFileCount=_favFileCount;
@property(nonatomic) unsigned int chatFileCount; // @synthesize chatFileCount=_chatFileCount;
@property(nonatomic) unsigned int hasClickDetail; // @synthesize hasClickDetail=_hasClickDetail;
@property(nonatomic) unsigned int hasClickSearch; // @synthesize hasClickSearch=_hasClickSearch;
@property(nonatomic) unsigned int switchToAlbum; // @synthesize switchToAlbum=_switchToAlbum;
@property(nonatomic) unsigned int switchToCloud; // @synthesize switchToCloud=_switchToCloud;
@property(nonatomic) unsigned int switchToFav; // @synthesize switchToFav=_switchToFav;
@property(nonatomic) unsigned int switchToChat; // @synthesize switchToChat=_switchToChat;
@property(nonatomic) unsigned int hasConfirm; // @synthesize hasConfirm=_hasConfirm;
- (void)report19359;
- (id)init;

@end
