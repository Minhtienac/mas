//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CKServiceInterface.h"

@class CKUpdate;
@class CKUpdateControllerClient, NSMutableDictionary;

NS_ASSUME_NONNULL_BEGIN
@interface CKUpdateController : CKServiceInterface
{
    BOOL _shouldNotAttemptInstallationAfterFailureDialog;
//    CDUnknownBlockType _dialogHandler;
    NSMutableDictionary *_availableUpdatesObservers;
    NSMutableDictionary *_updateScanObservers;
    NSMutableDictionary *_updateProgressObservers;
    CKUpdateControllerClient *_sharedObserver;
}

+ (CKUpdateController * _Nullable)sharedUpdateController;
@property(retain, nonatomic) CKUpdateControllerClient *sharedObserver; // @synthesize sharedObserver=_sharedObserver;
@property(retain, nonatomic) NSMutableDictionary *updateProgressObservers; // @synthesize updateProgressObservers=_updateProgressObservers;
@property(retain, nonatomic) NSMutableDictionary *updateScanObservers; // @synthesize updateScanObservers=_updateScanObservers;
@property(retain, nonatomic) NSMutableDictionary *availableUpdatesObservers; // @synthesize availableUpdatesObservers=_availableUpdatesObservers;
@property BOOL shouldNotAttemptInstallationAfterFailureDialog; // @synthesize shouldNotAttemptInstallationAfterFailureDialog=_shouldNotAttemptInstallationAfterFailureDialog;
//@property(copy) CDUnknownBlockType dialogHandler; // @synthesize dialogHandler=_dialogHandler;
//- (void).cxx_destruct;
- (void)didInteractivelyPurchaseItemIdentifier:(unsigned long long)arg1 success:(BOOL)arg2;
- (BOOL)willInteractivelyPurchaseItemIdentifier:(unsigned long long)arg1;
- (void)promptUserToOptInForAutoUpdateWithShowNotification:(BOOL)arg1;
- (BOOL)shouldPromptForAutoUpdateOptIn;
- (BOOL)isAutoUpdatedEnabled;
- (id)installedUpdatesJournal;
- (BOOL)softwareUpdateCatalogIsSeedCatalog;
- (long long)softwareUpdateCatalogTrustLevel;
- (int)catalogTrustLevel;
- (id)catalogHostName;
- (void)stopObservingOSUpdateProgressWithCallback:(id)arg1;
//- (id)observeOSUpdateProgressWithProgressHandler:(CDUnknownBlockType)arg1;
- (void)stopObservingOSUpdateScansWithCallback:(id)arg1;
//- (id)observeOSUpdateScansWithProgressHandler:(CDUnknownBlockType)arg1;
- (void)startOSUpdateScanWithForceFullScan:(BOOL)arg1 reportProgressImmediately:(BOOL)arg2 launchedFromNotification:(BOOL)arg3 userHasSeenAllUpdates:(BOOL)arg4 checkForOtherUpdates:(BOOL)arg5;
- (void)unhideAllOSUpdates;
- (void)hideOSUpdatesWithProductKeys:(id)arg1;
- (BOOL)hasHiddenOSUpdates;
- (BOOL)osUpdateScanInProgress;
- (id)_updateFailureDialogWithAuditInfo:(id)arg1;
- (BOOL)_otherUsersAreLoggedIn;
- (void)showUpdateFailureWithAuditToken:(id)arg1;
- (void)removeUpdateFromInstallLaterWithBundleID:(id)arg1;
- (id)appUpdatesToBeInstalledLater;
- (id)osUpdatesToBeInstalledLater;
- (id)osUpdatesToBeInstalledAfterLogout;
- (void)cancelUpdatesToBeInstalledLater;
//- (void)queueOSUpdatesForLaterInstall:(id)arg1 withMode:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)installAvailableUpdatesLaterWithMode:(long long)arg1;
- (BOOL)shouldOfferDoItLater;
//- (void)updatesWithTags:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)installAllAvailableUpdates;
//- (void)startAppInstallWithTags:(id)arg1 fallbackPurchase:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
//- (void)startAppUpdates:(id)arg1 andOSUpdates:(id)arg2 withDelegate:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
//- (void)_checkForBookUpdatesWithCompletionHandler:(CDUnknownBlockType)arg1;
//- (void)checkForUpdatesWithUserHasSeenUpdates:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeAvailableUpdatesObserver:(id)arg1;
//- (id)addAvailableUpdatesObserverWithBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)availableUpdatesBadgeCount;
- (id)incompatibleUpdates;
- (nullable CKUpdate *)availableUpdateWithItemIdentifier:(unsigned long long)arg1;
- (NSArray<CKUpdate *>*)availableUpdates;
- (void)connectionWasInterrupted;
- (id)initWithStoreClient:(id)arg1;
- (id)init;

@end
NS_ASSUME_NONNULL_END
