//
//  TableViewController.h
//  WebServerTest
//
//  Created by Dominik Arnhof on 14.08.12.
//  Copyright (c) 2012 HTL Hollabrunn. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TableViewController : UITableViewController

@property (nonatomic, strong) NSMutableArray *data;

- (IBAction)refreshPressed:(id)sender;
- (void) loadData;

@end
