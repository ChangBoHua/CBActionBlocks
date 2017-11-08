//
//  UIControl+CBActionBlocks.h
//  ElectronicCommerce
//
//  Created by 俊欧巴 on 17/9/25.
//  Copyright © 2017年 俊欧巴. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CBActionBlock.h"
@interface UIControl (CBActionBlocks)

- (void)handleControlEvents:(UIControlEvents)controlEvents withBlock:(CBActionBlock)actionBlock;

- (void)removeActionBlocksForControlEvents:(UIControlEvents)controlEvents;

@end
