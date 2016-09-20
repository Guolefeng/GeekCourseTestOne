//
//  AppDelegate.h
//  EAKit
//
//  Created by Eiwodetianna on 16/9/19.
//  Copyright © 2016年 Eiwodetianna. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AFNetworking.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate> {
    AFNetworkReachabilityManager *internetReach;
}

@property (strong, nonatomic) UIWindow *window;


@end

