//
//  AppDelegate.h
//  GirlCare
//
//  Created by 林廣 on 2017/10/22.
//  Copyright © 2017年 KuangSze. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

