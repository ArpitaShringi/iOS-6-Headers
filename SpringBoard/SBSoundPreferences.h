/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSObject.h"

@interface SBSoundPreferences : NSObject
{
}

+ (BOOL)shouldVibrateForCurrentRingerState;
+ (BOOL)vibrateWhenSilent;
+ (BOOL)vibrateWhenRinging;
+ (id)vibratePattern;
+ (BOOL)playLockSound;
+ (id)ringtonePath;
+ (id)ringtoneIdentifier;
+ (id)calendarAlarmPath;
+ (void)userDefaultsDidChanged:(id)arg1;
+ (void)_loadDefaultsIfNeeded;

@end

