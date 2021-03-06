/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary, NSTimer;

@interface SBMediaController : NSObject
{
    int _manualVolumeChangeCount;
    NSDictionary *_nowPlayingInfo;
    float _pendingVolumeChange;
    NSTimer *_volumeCommitTimer;
    BOOL _debounceVolumeRepeat;
    int _numberOfVolumeDecreasesSinceDownButtonDown;
    int _lastNowPlayingAppPID;
    BOOL _lastNowPlayingAppIsPlaying;
    BOOL _suppressHUD;
    BOOL _ringerMuted;
    BOOL _screenSharing;
    BOOL _screenSharingSetsStatusBarOverride;
    NSTimer *_screenSharingStatusBarOverrideTimer;
}

+ (BOOL)applicationCanBeConsideredNowPlaying:(id)arg1;
+ (id)sharedInstance;
- (void)_delayedExtendSleepTimer;
- (void)_commitVolumeChange:(id)arg1;
- (void)_cancelPendingVolumeChange;
- (void)_nowPlayingAppIsPlayingDidChange;
- (void)_nowPlayingPIDChanged;
- (void)_nowPlayingInfoChanged;
- (void)_systemMuteChanged:(id)arg1;
- (void)_softMuteChanged:(id)arg1;
- (void)_systemVolumeChanged:(id)arg1;
- (void)_activeAudioRouteChanged:(id)arg1;
- (void)_updateAVRoutes;
- (void)_serverConnectionDied:(id)arg1;
- (void)_unregisterForNotifications;
- (void)_registerForNotifications;
- (void)handleVolumeEvent:(struct __GSEvent *)arg1;
- (void)cancelVolumeEvent;
- (void)decreaseVolume;
- (void)increaseVolume;
- (float)_calcButtonRepeatDelay;
- (void)_changeVolumeBy:(float)arg1;
- (BOOL)lastSavedRingerMutedState;
@property(nonatomic, getter=isRingerMuted) BOOL ringerMuted;
- (BOOL)muted;
- (void)setVolume:(float)arg1;
- (float)volume;
- (BOOL)skipFifteenSeconds:(int)arg1;
- (BOOL)stop;
- (BOOL)togglePlayPause;
- (BOOL)play;
- (BOOL)endSeek:(int)arg1;
- (BOOL)beginSeek:(int)arg1;
- (BOOL)changeTrack:(int)arg1;
- (BOOL)_sendMediaCommand:(unsigned int)arg1;
- (void)updateScreenSharingStatusBarStyleOverride;
- (void)updateScreenSharingStatusBarStyleOverrideSuppressionPreference;
- (void)_clearScreenSharingStatusBarStyleOverride;
@property BOOL suppressHUD;
- (id)mediaControlsDestinationApp;
- (id)nowPlayingApplication;
- (id)nowPlayingAlbum;
- (id)nowPlayingTitle;
- (id)nowPlayingArtist;
- (BOOL)trackSupports15SecondFF;
- (BOOL)trackSupports15SecondRewind;
- (BOOL)isTVOut;
- (BOOL)isMovie;
- (BOOL)isPlaying;
- (BOOL)isLastTrack;
- (BOOL)isFirstTrack;
- (BOOL)hasTrack;
- (void)setNowPlayingInfo:(id)arg1;
- (id)_nowPlayingInfo;
- (void)dealloc;
- (id)init;

@end

