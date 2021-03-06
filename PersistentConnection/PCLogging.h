/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@interface PCLogging : NSObject

{

}



+ (void)_appendString:(id)arg1 toFileNamed:(id)arg2;

+ (void)_configureLogFacilityIfNeeded:(id)arg1;

+ (id)_facilityForIdentifier:(id)arg1;

+ (id)_fileNameForIdentifier:(id)arg1;

+ (id)_formatBlock;

+ (void)enableConsoleLoggingForLevel:(int)arg1;

+ (void)enableFileLogging:(_Bool)arg1;

+ (void)enableLoggingForCustomHandler:(id)arg1;

+ (id)getMainBundleId;

+ (void)initialize;

+ (void)logAtLevel:(int)arg1 delegate:(id)arg2 format:(id)arg3;

+ (void)logAtLevel:(int)arg1 delegate:(id)arg2 format:(id)arg3 arguments:(struct __va_list_tag [1])arg4;

+ (id)logFileDirectory;

+ (void)logKeepAliveInterval:(double)arg1 forServiceIdentifier:(id)arg2;

+ (_Bool)loggingEnabledForLevel:(int)arg1;



@end


