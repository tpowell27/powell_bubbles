//
//  Balls.cpp
//  Bubbles_
//
//  Created by Travis Powell on 4/18/15.
//
//

#include "Ball.h"

Ball::Ball(){
    pos = ofVec2f(ofGetMouseX(),ofGetMouseY());
    vel = ofVec2f(ofRandom(-5,5),ofRandom(-5,5));
    r = 0;
    g = 255;
    b = 255;
    col = ofColor(r,g,b,255);
    rads = ofRandom(5,20);
    rot = 0;
    
    winx = ofGetWindowWidth();
    winy = ofGetWindowHeight();
}

void Ball::setup(){
    start = pos;
    ofSetCircleResolution(40);
}

void Ball::update(){
    pos+=vel;
    rot+=abs(vel.x);
    
    float distance = ofDist(start.x,start.y,pos.x,pos.y);
    float bright = ofMap(distance,0,500,0,255);
    float green = ofMap(distance,0,200,150,255);
    float blue = ofMap(distance,0,200,50,255);
    col.a=(bright);
    col.g=(green);
    col.b=(blue);

    if(((pos.x>=winx)&&(pos.x<=winx+10))||((pos.x<=0)&&(pos.x>=winx-10))) {
        ofBackground(ofRandom(0,50),ofRandom(0,50),ofRandom(0,50));
    }
    if(((pos.y>=winy)&&(pos.y<=winy+10))||((pos.y<=0)&&(pos.y>=winy-10))) {
        ofBackground(ofRandom(0,50),ofRandom(0,50),ofRandom(0,50));
    }
}

void Ball::draw(){
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