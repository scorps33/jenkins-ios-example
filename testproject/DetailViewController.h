//
//  DetailViewController.h
//  testproject
//
//  Created by Vedha on 14/04/15.
//  Copyright (c) 2015 Raj. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

