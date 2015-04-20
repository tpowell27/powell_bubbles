//
//  bubbles.h
//  Bubbles_
//
//  Created by Travis Powell on 4/15/15.
//
//

#ifndef __Bubbles___Bubbles__
#define __Bubbles___Bubbles__

#include <ofMain.h>
#include <Ball.h>

class Bubbles{
    
public:
    Bubbles();
    
    void setup(float _x,float _y);
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
    
    vector <Ball> balls;
};

#endif /* defined(__Bubbles___bubbles__) */