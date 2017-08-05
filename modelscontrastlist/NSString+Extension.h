//
//  NSString+Extension.h
//  KOFACS
//
//  Created by 董天文 on 16/8/11.
//  Copyright © 2016年  apple. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface NSString (Extension)

+(CGFloat)widthOfTheString:(NSString *)string withFont:(CGFloat)font;

-(NSString *)saveSpecialWord;

-(NSInteger)validContentLength;

@end
