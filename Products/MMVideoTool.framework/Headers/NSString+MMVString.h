//
//  NSString+MMVString.h
//  GPUImage
//
//  Created by wang.xiaoran on 2019/8/19.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSString (MMVString)

- (NSString *)constrainToMaxLength:(NSUInteger)maxLength;

@end

NS_ASSUME_NONNULL_END
