//
//  PoloSceneTableViewController.h
//  marcoPolo
//
//  Created by red5 on 5/21/14.
//  Copyright (c) 2014 red5. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PoloSceneTableViewController: UITableViewController <UITableViewDelegate, UITableViewDataSource>

@property (nonatomic, strong) NSMutableArray *poloTitleArray;
@property (nonatomic, strong) NSMutableArray *poloDetailArray;


@end
