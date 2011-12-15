//
//  AppDelegate.h
//  unic0n
//
//  Created by HONG ILDO on 11. 12. 15..
//  Copyright thehyang@naver.com 2011년. All rights reserved.
//

#import <UIKit/UIKit.h>

@class RootViewController;

@interface AppDelegate : NSObject <UIApplicationDelegate> {
	UIWindow			*window;
	RootViewController	*viewController;
}

@property (nonatomic, retain) UIWindow *window;

@end
