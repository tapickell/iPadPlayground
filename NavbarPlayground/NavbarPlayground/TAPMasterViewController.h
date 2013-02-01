//
//  TAPMasterViewController.h
//  NavbarPlayground
//
//  Created by Todd Pickell on 1/31/13.
//  Copyright (c) 2013 Todd Pickell. All rights reserved.
//

#import <UIKit/UIKit.h>

@class TAPDetailViewController;

@interface TAPMasterViewController : UITableViewController {
    TAPDetailViewController *detailViewController;
    
    NSDictionary *groupsDict;
    NSArray *evenArray;
    NSArray *oddArray;
}

@property (strong, nonatomic) TAPDetailViewController *detailViewController;

@property (nonatomic, retain) NSDictionary *groupsDict;
@property (nonatomic, retain) NSArray *evenArray;
@property (nonatomic, retain) NSArray *oddArray;

- (void) initData;

@end
