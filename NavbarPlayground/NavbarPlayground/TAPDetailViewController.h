//
//  TAPDetailViewController.h
//  NavbarPlayground
//
//  Created by Todd Pickell on 1/31/13.
//  Copyright (c) 2013 Todd Pickell. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TAPDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
