//
//  XcTFlipsideViewController.h
//  UtilityAppXcodeTemplate
//
//  Created by Iggy Mwangi on 7/8/13.
//  Copyright (c) 2013 Iggy Mwangi. All rights reserved.
//

#import <UIKit/UIKit.h>

@class XcTFlipsideViewController;

@protocol XcTFlipsideViewControllerDelegate
- (void)flipsideViewControllerDidFinish:(XcTFlipsideViewController *)controller;
@end

@interface XcTFlipsideViewController : UIViewController

@property (weak, nonatomic) id <XcTFlipsideViewControllerDelegate> delegate;

- (IBAction)done:(id)sender;

@end
