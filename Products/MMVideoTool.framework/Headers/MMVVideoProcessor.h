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

typedef NS_ENUM(NSUInteger, MMVVideoProcessorAlphaType) {
    MMVVideoProcessorAlphaTypeHalf = 0,
    MMVVideoProcessorAlphaTypeCompress
} ;

@interface MMVVideoAttachment : NSObject

@property (nonatomic, assign)  CGImageRef  image; // the non-nil 'image' will take place

@property (nonatomic, assign)  CGSize  size; // size of image/buffer witdh:[0,1], height :[0,1], default : size:{1.f, 1.f}  meaning the whole video buffer will be covered
@property (nonatomic, assign)  CGPoint  center; // center of image/buffer x:[0,1], y:[0,1]

@property (nonatomic, assign)  CGFloat  rotation;

@property (nonatomic, copy) NSString *identifier;

@property (nonatomic, assign) float alpha;

@end

@interface MMVVideoPixelBufferAttachment : MMVVideoAttachment
@property (nonatomic, assign)  CVPixelBufferRef pixelBuffer;
@end

@interface MMVVideoTextAttachment : MMVVideoAttachment
@property (nonatomic, copy) NSString *text;
@property (nonatomic, copy) NSString *fontName;
@property (nonatomic, assign) float fontSize;
@property (nonatomic, assign)  CGColorRef fontColor;
@end

@interface MMVVideoProcessorOption : NSObject
@property (nonatomic, assign) MMVVideoProcessorVideoType videoType;
@property (nonatomic, assign) MMVVideoProcessorResizingMode resizingMode;
@property (nonatomic, copy, nullable) NSDictionary *mixSettings;
@property (nonatomic, copy) NSArray *postProcessingArray;
@property (nonatomic, assign) BOOL enablePostProcess;
@end

@protocol MMVVideoProcessor<NSObject>

- (instancetype)initWithRenderTarget:(CGRect)renderedBounds option:(MMVVideoProcessorOption *)option;

- (void)processPixelBuffer:(CVPixelBufferRef)pixelBuffer;

- (void)clearContent;

@property (nonatomic, strong, readonly) UIView *renderingView;

@property (nonatomic, assign) float prePasteAttachmentScale;

@property (atomic, strong) NSArray <MMVVideoAttachment *> *videoAttachments;

@end
