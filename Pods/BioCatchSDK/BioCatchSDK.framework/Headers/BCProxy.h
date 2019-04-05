//
//  BCProxy.h
//  BioCatchSDK
//
//  Created by BioCatch  on 12/22/16.
//  Copyright © 2016 BioCatch. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@protocol BCProxyType

@property (atomic, retain, setter=setRealObject:, getter=getRealObject) id realObject;

/*
 Add selectors for intersecting method calls, the methods intersected should be implemented in this class's subclass.
 */
- (void) intersectSelector:(SEL)selector;
- (void) removeIntersectSelector:(SEL)selector;
- (void) removeAllIntersections;
- (void) reset;

@end


@interface BCProxy : NSObject <BCProxyType> {
    NSMutableArray *intersectionArray;
    id _realObject;
}

@property (atomic, retain, setter=setRealObject:, getter=getRealObject) id realObject;

/*
 Add selectors for intersecting method calls, the methods intersected should be implemented in this class's subclass.
 */
- (void) intersectSelector:(SEL)selector;
- (void) removeIntersectSelector:(SEL)selector;
- (void) removeAllIntersections;
- (void) reset;

@end
