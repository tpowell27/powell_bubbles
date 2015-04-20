//
//  bubbles.cpp
//  Bubbles_
//
//  Created by Travis Powell on 4/15/15.
//
//

#include "Bubbles.h"

Bubbles::Bubbles(){
    pos = ofVec2f(500,500);
    vel = ofVec2f(ofRandom(-5,5),ofRandom(-5,5));
    r = ofRandom(150,200);
    g = ofRandom(50,150);
    b = ofRandom(0,100);
    col = ofColor(r,g,b,255);
    rads = ofRandom(5,20);
    rot = 0;
    
    winx = ofGetWindowWidth();
    winy = ofGetWindowHeight();
}

void Bubbles::setup(float _x,float _y){
    pos = ofVec2f(_x,_y);
    start = pos;
    ofSetCircleResolution(3);
}

void Bubbles::update(){
    Ball tempBall;
    tempBall.setup();
    balls.push_back(tempBall);
    
    pos+=vel;
    rot+=abs(vel.x);
    
    float distance = ofDist(start.x,start.y,pos.x,pos.y);
    float bright = ofMap(distance,0,600,255,0);
    col.a=(bright);
    
    if((pos.x>=winx)||(pos.x<=0)) {
        vel.x*=-1;
        col.r=ofRandom(0,255);
        col.g=ofRandom(0,255);
        col.b=ofRandom(0,255);
    }
    if((pos.y>=winy)||(pos.y<=0)) {
        vel.y*=-1;
        col.r=ofRandom(0,255);
        col.g=ofRandom(0,255);
        col.b=ofRandom(0,255);
    }
    
    //if((pos.x+distance==tempBall.pos.x+tempBall.distance)&&(pos.y+rads==tempBall.pos.y+tempBall.rads)) {
    //    pos.x*=-1;
   //     pos.y*=-1;
   // }
}

void Bubbles::draw(){
    ofSetColor(col);
    //option 1
    ofPushMatrix();
    ofTranslate(pos);
    ofRotate(rot);
    ofCircle(0,0,rads);
    ofPopMatrix();
    
    //option2
    //ofPushMatrix();
    //ofRotate(rot);
    //ofRotate(ofRandom(360));
    //ofCircle(0,0,rads);
}