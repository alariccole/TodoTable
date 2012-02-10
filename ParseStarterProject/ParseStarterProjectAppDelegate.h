// Copyright 2011 Ping Labs, Inc. All rights reserved.

#import <UIKit/UIKit.h>

//@class ParseStarterProjectViewController;

@interface ParseStarterProjectAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, strong) IBOutlet UIWindow *window;

//@property (nonatomic, strong) IBOutlet ParseStarterProjectViewController *viewController;

- (void)subscribeFinished:(NSNumber *)result error:(NSError *)error;

@end
