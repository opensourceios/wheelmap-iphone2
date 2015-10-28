//
//  WMListViewController.h
//  Wheelmap
//
//  Created by Dorian Roy on 06.11.12.
//  Copyright (c) 2012 Sozialhelden e.V. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WMNodeListView.h"
#import "WMNavigationControllerBase.h"

@interface WMNodeListViewController : WMViewController <WMNodeListView, UITableViewDataSource, UITableViewDelegate, UIScrollViewDelegate>

@property (nonatomic, strong) IBOutlet UITableView* tableView;
@property (strong, nonatomic) IBOutlet NSLayoutConstraint *tableViewTopVerticalSpaceConstraint;

@property (nonatomic, strong) NSNumber* selectedCategoryID;
@property (nonatomic) WMNodeListViewControllerUseCase useCase;
@property (nonatomic, strong) WMPopoverController *popover;
@property (nonatomic, strong) WMNavigationControllerBase *controllerBase;

- (void) showDetailPopoverForNode:(Node *)node;

@end