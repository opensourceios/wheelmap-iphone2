//
//  WMShareSocialViewController.m
//  Wheelmap
//
//  Created by Andrea Gerlach on 01.12.12.
//  Copyright (c) 2012 Sozialhelden e.V. All rights reserved.
//

#import "WMShareSocialViewController.h"
#import "WMSharingManager.h"

@interface WMShareSocialViewController ()
{
    WMSharingManager* sharingManager;
}
@end

@implementation WMShareSocialViewController


- (void)viewDidLoad
{
    [super viewDidLoad];
    
    // sharing manager
    sharingManager = [[WMSharingManager alloc] initWithBaseViewController:self];
    
	// Do any additional setup after loading the view.
    [self.twitterButton setTitle:NSLocalizedString(@"twitter", @"") forState:UIControlStateNormal];
    [self.facebookButton setTitle:NSLocalizedString(@"facebook", @"") forState:UIControlStateNormal];
    [self.emailButton setTitle:NSLocalizedString(@"email", @"") forState:UIControlStateNormal];
    [self.smsButton setTitle:NSLocalizedString(@"sms", @"") forState:UIControlStateNormal];
    
    [self.closeButton setTitle:NSLocalizedString(@"Cancel", nil) forState:UIControlStateNormal];
    
    self.scrollView.backgroundColor = [UIColor wmGreyColor];
    self.titleLabel.text = NSLocalizedString(@"NavBarTitleSharing", nil);
}

- (void) viewWillAppear:(BOOL)animated
{
    [super viewWillAppear:animated];
    
    self.title = NSLocalizedString(@"NavBarTitleSharing", nil);
    self.navigationBarTitle = self.title;
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)twitterButtonPressed:(id)sender {
    [sharingManager tweet:self.shareLocationLabel.text];
}

- (IBAction)facebookButtonPressed:(id)sender {
    [sharingManager facebookPosting:self.shareURlString];
}

- (IBAction)smsButtonPressed:(id)sender {
    [sharingManager sendSMSwithBody:self.shareLocationLabel.text];
}

- (IBAction)emailButtonPressed:(id)sender {
    [sharingManager sendMailWithSubject:NSLocalizedString(@"ShareLocationLabel", nil) andBody:self.shareLocationLabel.text];
}

- (IBAction)closeButtonPressed:(id)sender {
    [self dismissViewControllerAnimated:YES];
}

- (void)viewDidUnload {
    [self setScrollView:nil];
    [self setShareLocationLabel:nil];
    [self setSmsButton:nil];
    [self setTwitterButton:nil];
    [self setFacebookButton:nil];
    [self setEmailButton:nil];
    [self setSmsButton:nil];
    [super viewDidUnload];
}

// sharing viewcontrollers are always presented modally, so don't override for ipad
- (void)presentViewController:(UIViewController *)modalViewController animated:(BOOL)animated{
    [self presentForcedModalViewController:modalViewController animated:animated];
}

@end
