/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "RadiosPreferencesDelegate.h"

@class RadiosPreferences, NSString, NSDateFormatter, NSTimer;

@interface SBStatusBarDataManager : XXUnknownSuperclass <RadiosPreferencesDelegate> {
	struct {
		BOOL itemIsEnabled[23];
		BOOL timeString[64];
		int gsmSignalStrengthRaw;
		int gsmSignalStrengthBars;
		BOOL serviceString[100];
		BOOL serviceCrossfadeString[100];
		BOOL serviceImages[3][100];
		BOOL operatorDirectory[1024];
		unsigned serviceContentType;
		int wifiSignalStrengthRaw;
		int wifiSignalStrengthBars;
		unsigned dataNetworkType;
		int batteryCapacity;
		unsigned batteryState;
		BOOL notChargingString[150];
		int bluetoothBatteryCapacity;
		int thermalColor;
		unsigned thermalSunlightMode : 1;
		unsigned slowActivity : 1;
		unsigned syncActivity : 1;
		BOOL activityDisplayId[256];
		unsigned bluetoothConnected : 1;
		unsigned displayRawGSMSignal : 1;
		unsigned displayRawWifiSignal : 1;
	} _data;
	int _actions;
	BOOL _itemIsEnabled[23];
	BOOL _itemIsCloaked[23];
	BOOL _telephonyAndBluetoothCloaked;
	BOOL _allButBatteryCloaked;
	BOOL _timeCloaked;
	int _updateBlockDepth;
	BOOL _dataChangedSinceLastPost;
	NSDateFormatter* _timeItemDateFormatter;
	NSTimer* _timeItemTimer;
	NSString* _timeItemTimeString;
	RadiosPreferences* _radiosPrefs;
	BOOL _simulateInCallStatusBar;
	NSString* _serviceString;
	NSString* _serviceCrossfadeString;
	NSString* _serviceImages[3];
	NSString* _operatorDirectory;
	BOOL _showsActivityIndicatorOnHomeScreen;
	int _syncActivityIndicatorCount;
	int _activityIndicatorEverywhereCount;
	int _thermalColor;
	BOOL _thermalSunlightMode;
	NSString* _recordingAppString;
	BOOL _showingNotChargingItem;
	NSString* _notChargingString;
}
+(id)sharedDataManager;
-(id)init;
-(void)dealloc;
-(void)beginUpdateBlock;
-(void)endUpdateBlock;
-(void)setStatusBarItem:(int)item enabled:(BOOL)enabled;
-(void)updateStatusBarItem:(int)item;
-(void)sendStatusBarActions:(int)actions;
-(void)enableLock:(BOOL)lock time:(BOOL)time;
-(void)setShowsActivityIndicatorOnHomeScreen:(BOOL)screen;
-(void)setShowsActivityIndicatorEverywhere:(BOOL)everywhere;
-(void)setShowsSyncActivityIndicator:(BOOL)indicator;
-(void)_updateCloakedItems;
-(void)setTelephonyAndBluetoothItemsCloaked:(BOOL)cloaked;
-(void)setAllItemsExceptBatteryCloaked:(BOOL)cloaked;
-(void)setTimeCloaked:(BOOL)cloaked;
-(void)setThermalColor:(int)color sunlightMode:(BOOL)mode;
-(void)_initializeData;
-(void)_dataChanged;
-(void)_postData;
-(void)_updateTimeString;
-(void)_updateTimeItem;
-(void)_updateAirplaneMode;
-(void)_updateSignalStrengthItem;
-(void)_updateServiceItem;
-(void)_updateDataNetworkItem;
-(void)_updateBatteryItem;
-(void)_updateBatteryPercentItem;
-(void)_updateNotChargingItem;
-(void)_updateBluetoothItem;
-(void)_updateBluetoothBatteryItem;
-(void)_updateTTYItem;
-(void)_updateVPNItem;
-(void)_updateCallForwardingItem;
-(void)_updateActivityItem;
-(void)_updatePlayItem;
-(void)_updateLocationItem;
-(void)_updateRotationLockItem;
-(void)_updateThermalColorItem;
-(void)_registerForNotifications;
-(void)_significantTimeOrLocaleChange;
-(void)_didWakeFromSleep;
-(void)_batteryStatusChange;
-(void)_notChargingStatusChange;
-(void)_operatorChange;
-(void)_signalStrengthChange;
-(void)_ttyChange;
-(void)_callForwardingChange;
-(void)_vpnChange;
-(void)_dataNetworkChange;
-(void)_dataConnectionTypeChange;
-(void)airplaneModeChanged;
-(void)_bluetoothChange;
-(void)_bluetoothBatteryChange;
-(void)_locationStatusChange;
-(void)_rotationLockChange;
-(void)_configureTimeItemDateFormatter;
-(void)_stopTimeItemTimer;
-(void)_restartTimeItemTimer;
-(BOOL)_shouldShowNotChargingItem;
-(void)_updateNotChargingItemAfterDelay;
-(void)_updateTelephonyState;
-(void)toggleSimulatesInCallStatusBar;
-(BOOL)_simStatusMeansLocked:(id)locked;
-(id)_displayStringForSIMStatus:(id)simstatus;
-(id)_displayStringForRegistrationStatus:(int)registrationStatus;
-(BOOL)_getServiceImageNames:(id [3])names directory:(id*)directory forOperator:(id)anOperator statusBarCarrierName:(id*)name;
-(BOOL)_shouldShowEmergencyOnlyStatus;
@end

