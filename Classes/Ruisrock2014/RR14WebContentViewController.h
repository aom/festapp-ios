//
//  RR14WebContentViewController.h
//  FestApp
//
//  Created by Oleg Grenrus on 10/06/14.
//  Copyright (c) 2014 Futurice Oy. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RR14WebContentViewController : UIViewController
@property (strong, nonatomic) IBOutlet UIWebView *webView;
- (id)initWithContent:(NSString *)content title:(NSString *)title;
@end
