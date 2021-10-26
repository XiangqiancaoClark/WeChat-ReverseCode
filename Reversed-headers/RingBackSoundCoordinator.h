//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AnyPromise, CContact, NSString, RingBackInfoDisplaySheetView, RingBackPlaySoundReporter_23653, RingToneDetail, RingTonePlaySoundReporter_23613, RingTonePlayer, SystemVolumeAdjuster, VideoRingNetProvider;

@interface RingBackSoundCoordinator : NSObject
{
    _Bool _isCaller;
    unsigned long long _entryType;
    NSString *_chatroomUsername;
    VideoRingNetProvider *_provider;
    CContact *_contact;
    RingTonePlayer *_player;
    RingToneDetail *_ringDetail;
    RingBackInfoDisplaySheetView *_sheetView;
    AnyPromise *_ringFilePromise;
    RingTonePlaySoundReporter_23613 *_ringToneReporter;
    RingBackPlaySoundReporter_23653 *_ringBackReporter;
    SystemVolumeAdjuster *_volumeAdjuster;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SystemVolumeAdjuster *volumeAdjuster; // @synthesize volumeAdjuster=_volumeAdjuster;
@property(retain, nonatomic) RingBackPlaySoundReporter_23653 *ringBackReporter; // @synthesize ringBackReporter=_ringBackReporter;
@property(retain, nonatomic) RingTonePlaySoundReporter_23613 *ringToneReporter; // @synthesize ringToneReporter=_ringToneReporter;
@property(retain, nonatomic) AnyPromise *ringFilePromise; // @synthesize ringFilePromise=_ringFilePromise;
@property(retain, nonatomic) RingBackInfoDisplaySheetView *sheetView; // @synthesize sheetView=_sheetView;
@property(retain, nonatomic) RingToneDetail *ringDetail; // @synthesize ringDetail=_ringDetail;
@property(retain, nonatomic) RingTonePlayer *player; // @synthesize player=_player;
@property(nonatomic) _Bool isCaller; // @synthesize isCaller=_isCaller;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) VideoRingNetProvider *provider; // @synthesize provider=_provider;
@property(copy, nonatomic) NSString *chatroomUsername; // @synthesize chatroomUsername=_chatroomUsername;
@property(nonatomic) unsigned long long entryType; // @synthesize entryType=_entryType;
- (void)restart;
- (void)setMute:(_Bool)arg1;
- (void)resume;
- (void)pause;
- (void)restoreOriginalVolume;
- (void)setRingVolume:(float)arg1;
- (float)getRingVolume;
- (id)genRingToneReporter;
- (void)ringBackReporterInit;
- (void)ringToneReportRegister;
- (void)notificationRingReportRegister;
- (_Bool)isCalled;
- (void)showRingBackInfoView;
- (void)playLocalRingFile;
- (id)doPromise:(id)arg1 withinTime:(double)arg2;
- (id)getAudiaoFile;
- (id)getAudiaoFileAndCheckUpdate;
- (id)getFriendRingDetail;
- (void)playRingFileWithPromise:(id)arg1;
- (void)clear;
- (void)playGlobalRingToneSound;
- (void)playRingToneSound;
- (id)playRingBackSound;
- (void)dealloc;
- (void)commonInit;
- (id)init;
- (id)initWithContact:(id)arg1 selfIsCaller:(_Bool)arg2;

@end
