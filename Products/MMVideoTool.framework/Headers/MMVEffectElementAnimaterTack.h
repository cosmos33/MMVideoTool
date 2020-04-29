//
//  MMVEffectElementAnimaterTack.h
//  MMVideoTool
//
//  Created by wang.xiaoran on 2019/7/17.
//

#import <Foundation/Foundation.h>
@class MMVVideoAttachment;
typedef NS_OPTIONS(NSUInteger, MMVEffectElementAnimaterTackType)
{
    MMVEffectElementAnimaterTackTypeScale = 1,
    MMVEffectElementAnimaterTackTypeAlpha = 1 << 1,
    MMVEffectElementAnimaterTackTypeTranslate = 1 << 2,
    MMVEffectElementAnimaterTackTypeRotate = 1 << 3,
    MMVEffectElementAnimaterTackTypePath = 1 << 4
};
NS_ASSUME_NONNULL_BEGIN

@interface MMVEffectElementAnimaterTack : NSObject

@property (nonatomic, assign) CGFloat startDelay;

+ (instancetype)animaterTackWithMap:(NSDictionary*)animaterMap videoSize:(CGSize)videoSize itemSize:(CGSize)baseSize;

-(void)updateAttachment:(MMVVideoAttachment*)attachment seconds:(CGFloat)seconds;

-(MMVEffectElementAnimaterTackType)animaterTackType;

@end

NS_ASSUME_NONNULL_END
