//
//  WMRegisterViewController.h
//  Wheelmap
//
//  Created by npng on 12/12/12.
//  Copyright (c) 2012 Sozialhelden e.V. All rights reserved.
//

#import "WMViewController.h"

@interface WMRegisterViewController : WMViewController <UIWebViewDelegate>

@property (nonatomic, weak) IBOutlet UIWebView *webView;
@property (nonatomic, weak) IBOutlet UIButton* cancelButton;
@property (nonatomic, weak) IBOutlet UILabel* titleLabel;

-(IBAction)pressedCancelButton:(id)sender;

- (void)loadRegisterUrl;
- (void)loadLoginUrl;
- (void)loadForgotPasswordUrl;

@end
