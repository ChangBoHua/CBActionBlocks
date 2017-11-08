//
//  UIGestureRecognizer+CBActionBlocks.h
//  ElectronicCommerce
//
//  Created by 俊欧巴 on 17/9/25.
//  Copyright © 2017年 俊欧巴. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CBActionBlock.h"

@interface UIGestureRecognizer (CBActionBlocks)

- (instancetype)initWithBlock:(CBActionBlock)actionBlock;
- (void)setBlock:(CBActionBlock)actionBlock;

@end
