//
//  MMVideoEffectConfig.h
//  MMVideoTool
//
//  Created by wang.xiaoran on 2019/7/16.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>

@class MMVVideoAttachment;

typedef NS_ENUM(NSInteger, MMVideoEffectConfigAlphaType) {
    MMVideoEffectConfigAlphaTypeHalf = 0,
    MMVideoEffectConfigAlphaTypeCompress = 1
};

@protocol MMVideoEffectConfigPreviewDelegate<NSObject>

-(void)videoEffectConfigPreviewText:(NSString*_Nonnull)text key:(NSString*_Nullable)key;
-(void)videoEffectConfigPreviewImage:(NSString*_Nonnull)urlStr key:(NSString*_Nullable)key;

@end

NS_ASSUME_NONNULL_BEGIN

@interface MMVideoEffectConfig : NSObject

@property (nonatomic, strong, readonly) NSURL *videoURL;

@property (nonatomic, strong, readonly) NSArray <MMVVideoAttachment*>* attachmentList;

@property (nonatomic, assign, readonly) float videoScale;

@property (nonatomic, weak) id<MMVideoEffectConfigPreviewDelegate> previewDataSource;

@property (nonatomic, assign) MMVideoEffectConfigAlphaType alphaType;

@property (nonatomic, copy) NSArray *postProcessingArray;

- (instancetype)initWithLocalPathURL:(NSURL *)url;

-(BOOL)checkVideoSource;

-(void)updateAttachmentWithTime:(CMTime)time;
-(void)resetAttachment;
-(void)setImage:(UIImage*)image forKey:(NSString *)key;
-(void)setText:(NSString*)text forKey:(NSString *)key;

-(BOOL)configLocation;
-(CGRect)videoFrameWithSuperViewSize:(CGSize)superSize;

@end

NS_ASSUME_NONNULL_END
