//
//  MMVideoEffectLayouter.h
//  MMVideoTool
//
//  Created by wang.xiaoran on 2019/7/24.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface MMVideoEffectLayouter : NSObject

-(instancetype)initWithConfigJson:(NSDictionary *)configJson;
-(CGRect)videoFrameWithSuperViewSize:(CGSize)superSize;

@end

NS_ASSUME_NONNULL_END
