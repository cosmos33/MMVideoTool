//
//  MMVEffectAnimaterTack.h
//  MMVideoTool
//
//  Created by wang.xiaoran on 2019/7/24.
//

#import <Foundation/Foundation.h>
@class MMVVideoAttachment;
NS_ASSUME_NONNULL_BEGIN

@interface MMVEffectAnimaterTack : NSObject

@property (nonatomic, assign) CGFloat startDelay;

+ (NSArray<MMVEffectAnimaterTack*>*)animaterTackWithList:(NSArray*)animList itemSize:(CGSize)baseSize;

-(void)updateAttachment:(MMVVideoAttachment*)attachment seconds:(CGFloat)seconds;

@end

NS_ASSUME_NONNULL_END
