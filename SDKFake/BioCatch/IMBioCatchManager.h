//
//  IMBioCatchManager.h
//  SDKAuthenticator
//
//  Created by Carlos A. Savi on 03/04/2019.
//  Copyright © 2019 Filipe Henrique Souza. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface IMBioCatchManager : NSObject

+ (instancetype)sharedManager;

- (void)startBioCatch:(NSString *)customerSessionID;
- (void)pauseBioCatch;
- (void)resumeBioCatch;
- (void)stopBioCatch;

@end

NS_ASSUME_NONNULL_END
