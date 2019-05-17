//
//  MMVVideoProcessor.h
//  MMVideoTool
//
//  Created by 杨乃川 on 2018/6/4.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, MMVVideoProcessorResizingMode) {
    MMVVideoProcessorResizingModeScale,
    MMVVideoProcessorResizingModeAspect,
    MMVVideoProcessorResizingModeAspectFill
} ;

typedef NS_ENUM(NSUInteger, MMVVideoProcessorVideoType) {
    MMVVideoProcessorVideoTypeLeftAlpha,
    MMVVideoProcessorVideoTypeChroma
} ;

@interface MMVVideoAttachment : NSObject

@property (nonatomic, assign)  CGImageRef image;

@property (nonatomic, assign)  CVPixelBufferRef pixelBuffer; // the non-nil 'image' will take place

@property (nonatomic, assign)  CGSize  size; // size of image/buffer witdh:[0,1], height :[0,1], default : size:{1.f, 1.f}  meaning the whole video buffer will be covered
@property (nonatomic, assign)  CGPoint  center; // center of image/buffer x:[0,1], y:[0,1]

@property (nonatomic, assign)  CGFloat  rotation;

@property (nonatomic, copy) NSString *identifier;
@end


@interface MMVVideoProcessorOption : NSObject
@property (nonatomic, assign) MMVVideoProcessorVideoType videoType;
@property (nonatomic, assign) MMVVideoProcessorResizingMode resizingMode;
@end

@protocol MMVVideoProcessor<NSObject>

- (instancetype)initWithRenderTarget:(CGRect)renderedBounds option:(MMVVideoProcessorOption *)option;

- (void)processPixelBuffer:(CVPixelBufferRef)pixelBuffer;

- (void)clearContent;

@property (nonatomic, strong, readonly) UIView *renderingView;

@property (atomic, strong) NSArray <MMVVideoAttachment *> *videoAttachments;

@end

