//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "QMapContextDelegate-Protocol.h"

@class NSArray, NSString, QMapContext, QMediator, TBTileOverlayRenderContainer;
@protocol QTileOverlayManagerDelegate;

@interface QTileOverlayManager : NSObject <QMapContextDelegate>
{
    QMapContext *_mapContext;
    id <QTileOverlayManagerDelegate> _delegate;
    QMediator *_mediator;
    TBTileOverlayRenderContainer *_tileOverlayRenders;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TBTileOverlayRenderContainer *tileOverlayRenders; // @synthesize tileOverlayRenders=_tileOverlayRenders;
@property(nonatomic) __weak QMediator *mediator; // @synthesize mediator=_mediator;
@property(nonatomic) __weak id <QTileOverlayManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak QMapContext *mapContext; // @synthesize mapContext=_mapContext;
- (void)dealloc;
- (id)init;
- (void)setTileOverlayPriority:(int)arg1 forPayLoad:(id)arg2;
- (id)viewForOverlay:(id)arg1;
@property(readonly, nonatomic) NSArray *tileOverlays;
- (void)reloadTileOverlay:(id)arg1;
- (void)removeTileOverlay:(id)arg1;
- (id)addTileOverlay:(id)arg1;
- (void)refresh;
- (_Bool)containsTileOverlay:(id)arg1;
- (CDStruct_7e23819f)pathForInternal:(id)arg1;
- (void)mapContext:(id)arg1 cancelDownloadTile:(id)arg2;
- (void)mapContext:(id)arg1 downloadTile:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

