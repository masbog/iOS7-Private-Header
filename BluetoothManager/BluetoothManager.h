/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSMutableDictionary;



@interface BluetoothManager : NSObject

{

    struct BTLocalDeviceImpl *_localDevice;

    struct BTSessionImpl *_session;

    int _available;

    _Bool _audioConnected;

    _Bool _scanningEnabled;

    _Bool _scanningInProgress;

    unsigned int _scanningServiceMask;

    struct BTDiscoveryAgentImpl *_discoveryAgent;

    struct BTPairingAgentImpl *_pairingAgent;

    struct BTAccessoryManagerImpl *_accessoryManager;

    NSMutableDictionary *_btAddrDict;

    NSMutableDictionary *_btDeviceDict;

}



+ (int)lastInitError;

+ (id)sharedInstance;

- (struct BTAccessoryManagerImpl *)_accessoryManager;

- (void)_advertisingChanged;

- (_Bool)_attach:(id)arg1;

- (void)_cleanup:(_Bool)arg1;

- (void)_connectabilityChanged;

- (void)_connectedStatusChanged;

- (void)_discoveryStateChanged;

- (_Bool)_onlySensorsConnected;

- (void)_postNotification:(id)arg1;

- (void)_postNotificationWithArray:(id)arg1;

- (void)_powerChanged;

- (void)_removeDevice:(id)arg1;

- (void)_restartScan;

- (void)_scanForServices:(unsigned int)arg1 withMode:(int)arg2;

- (void)_setScanState:(int)arg1;

- (_Bool)_setup:(struct BTSessionImpl *)arg1;

- (void)acceptSSP:(long long)arg1 forDevice:(id)arg2;

- (id)addDeviceIfNeeded:(struct BTDeviceImpl *)arg1;

- (_Bool)audioConnected;

- (_Bool)available;

- (void)cancelPairing;

- (void)connectDevice:(id)arg1;

- (void)connectDevice:(id)arg1 withServices:(unsigned int)arg2;

- (_Bool)connectable;

- (_Bool)connected;

- (id)connectedDevices;

- (id)connectingDevices;

- (void)dealloc;

- (_Bool)devicePairingEnabled;

- (_Bool)deviceScanningEnabled;

- (_Bool)deviceScanningInProgress;

- (void)enableTestMode;

- (_Bool)enabled;

- (void)endVoiceCommand:(id)arg1;

- (id)init;

- (_Bool)isAnyoneAdvertising;

- (_Bool)isAnyoneScanning;

- (_Bool)isDiscoverable;

- (_Bool)isServiceSupported:(unsigned int)arg1;

- (id)pairedDevices;

- (void)postNotification:(id)arg1;

- (void)postNotificationName:(id)arg1 object:(id)arg2;

- (void)postNotificationName:(id)arg1 object:(id)arg2 error:(id)arg3;

- (int)powerState;

- (_Bool)powered;

- (void)resetDeviceScanning;

- (void)scanForConnectableDevices:(unsigned int)arg1;

- (void)scanForServices:(unsigned int)arg1;

- (void)setAudioConnected:(_Bool)arg1;

- (void)setConnectable:(_Bool)arg1;

- (void)setDevicePairingEnabled:(_Bool)arg1;

- (void)setDeviceScanningEnabled:(_Bool)arg1;

- (void)setDiscoverable:(_Bool)arg1;

- (_Bool)setEnabled:(_Bool)arg1;

- (void)setPincode:(id)arg1 forDevice:(id)arg2;

- (_Bool)setPowered:(_Bool)arg1;

- (void)showPowerPrompt;

- (void)startVoiceCommand:(id)arg1;

- (void)unpairDevice:(id)arg1;

- (_Bool)wasDeviceDiscovered:(id)arg1;



@end


