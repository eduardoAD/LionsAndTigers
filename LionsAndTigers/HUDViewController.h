//
//  HUDViewController.h
//  LionsAndTigers
//
//  Created by Eduardo Alvarado Díaz on 10/9/14.
//  Copyright (c) 2014 Globant. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol HUDDelegate
@end
@interface HUDViewController : UIViewController

@property id<HUDDelegate> delegate;
@end
