//
//  AppDelegate.h
//  ZLoadingView
//
//  Created by jianhua zhang on 2018/4/12.
//  Copyright © 2018年 jianhua zhang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

