//
//  WMInfinitePhotoViewController.h
//  Wheelmap
//
//  Created by Andrea Gerlach on 11.12.12.
//  Copyright (c) 2012 Sozialhelden e.V. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "InfiniteGallery.h"

@interface WMInfinitePhotoViewController : WMViewController <InfiniteGalleryDataSource>

@property (weak, nonatomic) IBOutlet UIView *				galleryView;
@property (nonatomic, strong) NSMutableArray *				imageURLArray;

@property (nonatomic,strong) IBOutlet UIView *				containerView;
@property (strong, nonatomic) IBOutlet UIScrollView *		scrollView;
@property (strong, nonatomic) IBOutlet InfiniteGallery *	infiniteGallery;
@property (strong, nonatomic) IBOutlet UIButton *			closeButton;
@property (strong, nonatomic) IBOutlet UIView *				headerView;

@property (assign) long tappedImage;

- (IBAction)closeButtonPressed:(id)sender;

@end