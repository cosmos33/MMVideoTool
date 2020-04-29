//
//  MMVBezierEvaluator.h
//  MMVideoTool
//
//  Created by wang.xiaoran on 2019/7/17.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface MMVBezierEvaluator : NSObject

// timeCurvePoints/motionCurvePoints : 2 , 3 , 4 points are supported
- (instancetype)initWithTimeCurve:(NSArray <NSValue *> *)timeCurvePoints
                      motionCurve:(NSArray <NSValue *> *)motionCurvePoints NS_DESIGNATED_INITIALIZER;

- (CGPoint)bezierPathPositionAtTime:(CGFloat)time; //  [0, 1]
- (CGFloat)valueAtTime:(CGFloat)time;

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
