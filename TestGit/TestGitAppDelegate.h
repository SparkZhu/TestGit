//
//  TestGitAppDelegate.h
//  TestGit
//
//  Created by Spark on 11-3-13.
//  Copyright 2011年 Mokard. All rights reserved.
//

#import <UIKit/UIKit.h>

@class TestGitViewController;

@interface TestGitAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet TestGitViewController *viewController;

@end
