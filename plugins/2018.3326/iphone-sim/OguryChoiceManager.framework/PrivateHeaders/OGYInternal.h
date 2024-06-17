//
//  Copyright © 2020-present Ogury. All rights reserved.
//

#import <Foundation/Foundation.h>

#import <OguryChoiceManager/OguryChoiceManager.h>
#import <OguryCore/OguryPersistentEventBus.h>
#import <OguryCore/OguryLogLevel.h>

NS_ASSUME_NONNULL_BEGIN

@interface OGYInternal : NSObject

+ (OGYInternal *)shared;

- (instancetype)initWithChoiceManager:(OguryChoiceManager *)choiceManager;

- (void)setLogLevel:(OguryLogLevel)logLevel;

- (void)startWithAssetKey:(NSString *)assetKey persistentEventBus:(OguryPersistentEventBus *)persistentEventBus broadcastEventBus:(OguryEventBus *)broadcastEventBus;

- (NSString *)getVersion;

@end

NS_ASSUME_NONNULL_END
