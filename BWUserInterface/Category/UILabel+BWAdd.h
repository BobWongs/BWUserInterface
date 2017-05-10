//
//  UILabel+BWAdd.h
//  BWUserInterface
//
//  Created by BobWong on 16/8/16.
//  Copyright © 2016年 Bob Wong Studio. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UILabel (BWAdd)

+ (UILabel *)labelSingleLineLeftAlignment13FontSize;
+ (UILabel *)labelSingleLineRightAlignment13FontSize;

- (void)reframeLabelAccordingToText;

@end
