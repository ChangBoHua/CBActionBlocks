//
//  CBActionBlockWrapper.m
//  ElectronicCommerce
//
//  Created by 俊欧巴 on 17/9/25.
//  Copyright © 2017年 俊欧巴. All rights reserved.
//

#import "CBActionBlockWrapper.h"

@implementation CBActionBlockWrapper

- (void)invokeBlock:(id)sender {
    if (self.actionBlock) {
        self.actionBlock(sender);
    }
}

@end
