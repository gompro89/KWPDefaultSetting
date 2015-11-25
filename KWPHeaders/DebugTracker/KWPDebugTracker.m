//
//  KWPDebugTracker.m
//  KWPAnimations
//
//  Created by 朴 根佑 on 2015/11/25.
//  Copyright © 2015年 KWP. All rights reserved.
//

#import "KWPDebugTracker.h"

@implementation KWPDebugTracker

void exceptionHandler(NSException *exception) {
    
    NSLog(@"%@", exception.name);
    NSLog(@"%@", exception.reason);
    NSLog(@"%@", exception.callStackSymbols);
    
}
@end
