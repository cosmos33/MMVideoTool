//
//  MMVideoEffectElementAnimaterItem.h
//  MMVideoTool
//
//  Created by wang.xiaoran on 2019/7/16.
//

#import <Foundation/Foundation.h>

@class MMVVideoAttachment;
typedef NS_ENUM(NSUInteger,MMVideoEffectElementAnimaterType){
    MMVideoEffectElementAnimaterTypeImage = 1,
    MMVideoEffectElementAnimaterTypeText
};
#import <AVFoundation/AVFoundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface MMVideoEffectElementAnimaterItem : NSObject

@property (nonatomic, assign, readonly) MMVideoEffectElementAnimaterType type;
@property (nonatomic, strong, readonly) MMVVideoAttachment * attachment;

@property (nonatomic, copy) NSString * mId;
@property (nonatomic, assign) NSTimeInterval duration;


+ (instancetype)animaterItemWithMap:(NSDictionary *)itemMap baseURL:(NSURL *)url videoSize:(CGSize)size;

-(void)updateAttachmentWithTime:(CMTime)time;

@end

@interface MMVideoEffectElementAnimaterImageItem : MMVideoEffectElementAnimaterItem

@property (nonatomic, strong, readonly) NSString * urlStr;

-(void)setImage:(UIImage *)image;

@end

@interface MMVideoEffectElementAnimaterTextItem : MMVideoEffectElementAnimaterItem

@property (nonatomic, strong, readonly) NSString * previewText;

-(void)setText:(NSString *)text;

@end
NS_ASSUME_NONNULL_END
