//
//  XcTFlipsideViewController.m
//  UtilityAppXcodeTemplate
//
//  Created by Iggy Mwangi on 7/8/13.
//  Copyright (c) 2013 Iggy Mwangi. All rights reserved.
//

#import "XcTFlipsideViewController.h"

@interface XcTFlipsideViewController ()

@end

@implementation XcTFlipsideViewController

- (void)awakeFromNib
{
    self.contentSizeForViewInPopover = CGSizeMake(320.0, 480.0);
    [super awakeFromNib];
}

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

#pragma mark - Actions

- (IBAction)done:(id)sender
{
    [self.delegate flipsideViewControllerDidFinish:self];
}

@end
