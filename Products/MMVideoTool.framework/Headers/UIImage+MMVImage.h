//
//  UIImage+MMVImage.h
//  MMVideoTool
//
//  Created by wang.xiaoran on 2019/7/30.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIImage (MMVImage)

//+ (UIImage *)textImageWithBaseImg:(UIImage *)img baseSize:(CGSize)baseSize text:(NSString *)text fontSize:(NSInteger)fontSize textColorStr:(NSString *)textColor;
+ (UIImage *)textImageWithVideoWidth:(CGFloat)videoWidth BaseImg:(UIImage *)img baseSize:(CGSize)baseSize text:(NSString *)text fontSize:(NSInteger)fontSize textColorStr:(NSString *)textColor;

@end

NS_ASSUME_NONNULL_END
