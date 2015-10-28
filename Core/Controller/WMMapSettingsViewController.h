//
//  WMMapSettingsViewController.h
//  Wheelmap
//
//  Created by Michael Thomas on 11.12.12.
//  Copyright (c) 2012 Sozialhelden e.V. All rights reserved.
//

#import "WMViewController.h"
#import "WMMapViewController.h"

static long selectedMapType;

@interface WMMapSettingsViewController : WMViewController

@property (nonatomic, weak) IBOutlet UIButton *standardButton;
@property (nonatomic, weak) IBOutlet UIButton *hybridButton;
@property (nonatomic, weak) IBOutlet UIButton *satelliteButton;
@property (nonatomic, weak) IBOutlet UIView *buttonsView;
@property (nonatomic, weak) IBOutlet UIImageView *wheelmapLogo;

- (IBAction)segmentedControlButtonPressed:(UIButton *)sender;

@end
