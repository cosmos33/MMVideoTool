//
//  MMVideoEffectElementAnimater.h
//  MMVideoTool
//
//  Created by wang.xiaoran on 2019/7/16.
//

#import <Foundation/Foundation.h>
#import "MMVideoEffectElementAnimaterItem.h"

@class MMVVideoAttachment;
#import <AVFoundation/AVFoundation.h>
NS_ASSUME_NONNULL_BEGIN

@interface MMVideoEffectElementAnimater : NSObject

@property(nonatomic, weak, readonly) NSArray <MMVideoEffectElementAnimaterItem*>* items;
@property(nonatomic, weak, readonly) NSArray <MMVVideoAttachment*>* attachmentList;

- (instancetype)initWithConfigJson:(NSDictionary *)configJson baseURL:(NSURL *)url;
-(void)setImage:(UIImage*)image key:(NSString *)key;
-(void)setText:(NSString*)text key:(NSString *)key;
-(void)updateAttachmentWithTime:(CMTime)time;

@end

NS_ASSUME_NONNULL_END
