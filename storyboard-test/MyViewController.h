//
//  MyViewController.h
//  storyboard-test
//
//  Created by João Medrado on 25/08/2014.
//  Copyright (c) 2014 Joao Medrado. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MyViewController : UIViewController
@property (nonatomic, strong) IBOutlet UILabel *myLabel;
- (IBAction)changeTxt:(id)sender;
@end
