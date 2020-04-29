//
//  MMVMetalCompressAlphaVideoFilter.h
//  MMVideoTool
//
//  Created by MOMO on 2020/3/9.
//

#import <Foundation/Foundation.h>
#import <MetalPetal/MetalPetal.h>

@interface MMVMetalCompressAlphaVideoFilter : MTIUnaryImageRenderingFilter

@property (nonatomic, assign) float scaleFactor;

@end

