//
//  FlyNoWay.h
//  StrategyPattern
//
//  Created by buginux on 2017/5/18.
//  Copyright © 2017年 buginux. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FlyBehavior.h"

@interface FlyNoWay : NSObject <FlyBehavior>

- (void)fly;

@end
