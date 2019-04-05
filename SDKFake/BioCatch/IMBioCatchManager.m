//
//  IMBioCatchManager.m
//  SDKAuthenticator
//
//  Created by Carlos A. Savi on 03/04/2019.
//  Copyright © 2019 Filipe Henrique Souza. All rights reserved.
//

#import "IMBioCatchManager.h"
@import BioCatchSDK;

static IMBioCatchManager *sharedManager = nil;

@implementation IMBioCatchManager

+ (instancetype)sharedManager {
    
    static dispatch_once_t onceToken;
    
    dispatch_once(&onceToken, ^{
        sharedManager = [[IMBioCatchManager alloc] init];
    });
    
    return sharedManager;
}

- (void)startBioCatch:(NSString *)customerSessionID {
    
    // Inicia biocatch
    [[BioCatch sharedInstance] startWithCustomerSessionID:customerSessionID bcServerUrl: [NSURL URLWithString:@"https://wup-5989cc72.bzl.v2.we-stats.com/client/v3/web/wup?cid=beasttest"] publicKey:nil];
    NSLog(@"BIOCATCH - Start on SDK");
    
}

- (void)pauseBioCatch {
    [[BioCatch sharedInstance] pause];
    NSLog(@"BIOCATCH - Pause on SDK");
}

- (void)resumeBioCatch {
    [[BioCatch sharedInstance] pause];
    NSLog(@"BIOCATCH - Resume on SDK");
}

- (void)stopBioCatch {
    [[BioCatch sharedInstance] pause];
    NSLog(@"BIOCATCH - Stop on SDK");
}

@end
