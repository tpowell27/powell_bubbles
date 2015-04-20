//
//  Balls.h
//  Bubbles_
//
//  Created by Travis Powell on 4/18/15.
//
//

#ifndef __Bubbles___Ball__
#define __Bubbles___Ball__

#include <ofMain.h>

class Ball{
    
public:
    Ball();
    
    void setup();
    void update();
    void draw();
    
    float rads;
    float rot;
    float winx;
    float winy;
    float r;
    float g;
    float b;
    
    ofVec2f start;
    ofVec2f pos;
    ofVec2f vel;
    ofColor col;
};
#endif /* defined(__Bubbles___Balls__) */
