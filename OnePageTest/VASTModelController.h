//
//  VASTModelController.h
//  OnePageTest
//
//  Created by Wayne Sheppard on 2/26/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class VASTDataViewController;

@interface VASTModelController : NSObject <UIPageViewControllerDataSource>

- (VASTDataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(VASTDataViewController *)viewController;

@end
