//
//  MMVideoEffectAnimaterItem.h
//  MMVideoTool
//
//  Created by wang.xiaoran on 2019/7/22.
//

#import <Foundation/Foundation.h>
@class MMVVideoAttachment;
#import <AVFoundation/AVFoundation.h>
NS_ASSUME_NONNULL_BEGIN

@interface MMVideoEffectAnimaterItem : NSObject

@property (nonatomic, strong, readonly) MMVVideoAttachment * attachment;

-(void)updateAttachmentWithTime:(CMTime)time;

@end

@interface MMVideoEffectAnimaterAvatarItem : MMVideoEffectAnimaterItem

@property (nonatomic, strong, readonly) NSString * urlStr;

- (instancetype)initWithConfigJson:(NSDictionary *)configJson;
-(void)setImage:(UIImage *)image;

@end

@interface MMVideoEffectAnimaterTextItem : MMVideoEffectAnimaterItem

@property (nonatomic, strong, readonly) NSString * previewText;

- (instancetype)initWithConfigJson:(NSDictionary *)configJson baseURL:(NSURL *)url;
-(void)setText:(NSString *)text;

@end

NS_ASSUME_NONNULL_END
