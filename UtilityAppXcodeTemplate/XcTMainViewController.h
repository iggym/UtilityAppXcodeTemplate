//
//  XcTMainViewController.h
//  UtilityAppXcodeTemplate
//
//  Created by Iggy Mwangi on 7/8/13.
//  Copyright (c) 2013 Iggy Mwangi. All rights reserved.
//

#import "XcTFlipsideViewController.h"

@interface XcTMainViewController : UIViewController <XcTFlipsideViewControllerDelegate, UIPopoverControllerDelegate>

@property (strong, nonatomic) UIPopoverController *flipsidePopoverController;

@end
