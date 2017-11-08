//
//  UIBarButtonItem+CBActionBlocks.h
//  ElectronicCommerce
//
//  Created by 俊欧巴 on 17/9/25.
//  Copyright © 2017年 俊欧巴. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UIControl+CBActionBlocks.h"
#import "CBActionBlock.h"

@interface UIBarButtonItem (CBActionBlocks)

- (instancetype)initWithBarButtonSystemItem:(UIBarButtonSystemItem)systemItem block:(CBActionBlock)actionBlock;

- (instancetype)initWithImage:(UIImage *)image landscapeImagePhone:(UIImage *)landscapeImagePhone style:(UIBarButtonItemStyle)style block:(CBActionBlock)actionBlock;

- (instancetype)initWithImage:(UIImage *)image style:(UIBarButtonItemStyle)style block:(CBActionBlock)actionBlock;

- (instancetype)initWithTitle:(NSString *)title style:(UIBarButtonItemStyle)style block:(CBActionBlock)actionBlock;

- (void)setBlock:(CBActionBlock)actionBlock;

@end
