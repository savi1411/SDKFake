//
//  BCObserver.h
//  BioCatchSDK
//
//  Created by BioCatch  on 12/22/16.
//  Copyright © 2016 BioCatch. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@protocol BCObserverProtocol

- (void)observeValueForKeyPath:(nullable NSString *)keyPath ofObject:(nullable id)object change:(nullable NSDictionary<NSKeyValueChangeKey, id> *)change context:(nullable void *)context;

@end

@interface BCObserver : NSObject {
    NSMutableDictionary *observerDictionaries; // object being observed is the object, keyPath is the key
    dispatch_queue_t queue;
}

@property (nonatomic, weak) _Nullable id<BCObserverProtocol>delegate;

- (void) observeObject:(NSObject* _Nonnull)object ForChange:(NSString* _Nonnull)keyPath;
- (void) StopObservingObject:(NSObject* _Nonnull)object ForKeyPath:(NSString* _Nonnull)keyPath;

@end
