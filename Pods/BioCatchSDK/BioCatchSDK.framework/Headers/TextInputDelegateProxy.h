//
//  TextFieldDelegateProxy.h
//  BioCatchSDK
//
//  Created by BioCatch  on 12/20/16.
//  Copyright © 2016 BioCatch. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "BCProxy.h"

@protocol BCProxyTextInputProtocol

- (void) keyWasPressed:(NSString*)key OnObject:(UIView*)object;

@end


@protocol TextInputDelegateProxyType <BCProxyType>

@property (nonatomic, weak) id<BCProxyTextInputProtocol>delegate;

- (void) insertProxyDelegate:(id<TextInputDelegateProxyType>)proxyDelegate ToOriginalObject:(id)object;

@end


@interface TextInputDelegateProxy : BCProxy <TextInputDelegateProxyType, UITextFieldDelegate, UITextViewDelegate> {
    
}

@property (nonatomic, weak) id<BCProxyTextInputProtocol>delegate;

- (void) insertProxyDelegate:(id<TextInputDelegateProxyType>)proxyDelegate ToOriginalObject:(id)object;

@end
