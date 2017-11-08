//
//  CBActionBlockWrapper.h
//  ElectronicCommerce
//
//  Created by 俊欧巴 on 17/9/25.
//  Copyright © 2017年 俊欧巴. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CBActionBlock.h"

static NSString *const CBActionBlocksArray = @"CBActionBlocksArray";

@interface CBActionBlockWrapper : NSObject

@property (nonatomic, copy) CBActionBlock actionBlock;
@property (nonatomic, assign) UIControlEvents controlEvents;

- (void)invokeBlock:(id)sender;

@end
