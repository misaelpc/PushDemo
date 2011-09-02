//
//  pushDemoAppDelegate.h
//  pushDemo
//
//  Created by Misael Pérez Chamorro on 9/1/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class pushDemoViewController;

@interface pushDemoAppDelegate : NSObject <UIApplicationDelegate>

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet pushDemoViewController *viewController;

@end
