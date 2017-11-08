//
//  UIGestureRecognizer+CBActionBlocks.m
//  ElectronicCommerce
//
//  Created by 俊欧巴 on 17/9/25.
//  Copyright © 2017年 俊欧巴. All rights reserved.
//

#import "UIGestureRecognizer+CBActionBlocks.h"
#import "CBActionBlockWrapper.h"
#import <objc/runtime.h>

@implementation UIGestureRecognizer (CBActionBlocks)

- (instancetype)initWithBlock:(CBActionBlock)actionBlock {
    UIGestureRecognizer *gestureRecognizer = [[[self class] alloc] init];
    [gestureRecognizer setBlock:actionBlock];
    return gestureRecognizer;
}


- (void)setBlock:(CBActionBlock)actionBlock {
    NSMutableArray *actionBlocksArray = [self actionBlocksArray];
    
    CBActionBlockWrapper *blockActionWrapper = [[CBActionBlockWrapper alloc] init];
    blockActionWrapper.actionBlock = actionBlock;
    [actionBlocksArray addObject:blockActionWrapper];
    
    [self addTarget:blockActionWrapper action:@selector(invokeBlock:)];
}


- (NSMutableArray *)actionBlocksArray {
    NSMutableArray *actionBlocksArray = objc_getAssociatedObject(self, &CBActionBlocksArray);
    if (!actionBlocksArray) {
        actionBlocksArray = [NSMutableArray array];
        objc_setAssociatedObject(self, &CBActionBlocksArray, actionBlocksArray, OBJC_ASSOCIATION_RETAIN);
    }
    return actionBlocksArray;
}


@end
