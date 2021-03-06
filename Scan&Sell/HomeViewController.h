//
//  HomeViewController.h
//  Scan&Sell
//
//  Created by SaiKiran Dasika on 25/06/15.
//  Copyright (c) 2015 Burst. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Sale.h"
@import Firebase;

@interface HomeViewController : UITableViewController<UISearchBarDelegate,UIViewControllerTransitioningDelegate>

@property (nonatomic, strong) NSArray *feedProducts;
@property (nonatomic, strong) UIRefreshControl *refreshControl;
- (IBAction)logout:(id)sender;
@property (nonatomic, strong) NSArray *sales;
@property (nonatomic, strong) Sale *tappedSale;
@property (weak, nonatomic) IBOutlet UIButton *selectFeedButton;
@property (nonatomic, strong) FIRDatabaseReference *ref;

typedef NS_ENUM(NSInteger, FeedType) {
    NormalFeed = 0,
    NearbyFeed,
};
@end
