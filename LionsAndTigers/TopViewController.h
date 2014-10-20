//
//  TopViewController.h
//  LionsAndTigers
//
//  Created by Eduardo Alvarado Díaz on 10/9/14.
//  Copyright (c) 2014 Globant. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol TopDelegate
- (void) topRevealButtonTapped;
@end
@interface TopViewController : UIViewController

@property id<TopDelegate> delegate;

@end
