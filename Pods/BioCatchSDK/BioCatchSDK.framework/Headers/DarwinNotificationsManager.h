//
//  DarwinNotificationsManager.h
//  BioCatchSDK
//
//  Created by BioCatch  on 7/17/17.
//  Copyright © 2017 BioCatch. All rights reserved.
//

#import <Foundation/Foundation.h>

#ifndef DarwinNotifications_h
#define DarwinNotifications_h

@protocol DarwinNotificationsManagerType 

- (void)registerForNotificationName:(NSString *)name callback:(void (^)(void))callback;
- (void)postNotificationWithName:(NSString *)name;
- (void)unregister;

@end

@interface DarwinNotificationsManager : NSObject <DarwinNotificationsManagerType>

@property (strong, nonatomic) id someProperty;

@end

#endif
