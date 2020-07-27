//
//  BezierEvaluator.hpp
//  Bessel
//
//  Created by 杨乃川 on 2018/10/18.
//  Copyright © 2018年 杨乃川. All rights reserved.
//

#ifndef BezierEvaluator_hpp
#define BezierEvaluator_hpp

#include <stdio.h>


namespace BPE {

    typedef struct  {
        float x;
        float y;
    }Point;
    
    class BezierPathEvaluator {
        Point  *curvePoints;
        int np;
    public:
        ~BezierPathEvaluator();
        BezierPathEvaluator(Point *points, int point_num);
        Point evaluator(float time);
    };
    
};

#endif /* BezierEvaluator_hpp */
