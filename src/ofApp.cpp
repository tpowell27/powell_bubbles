#include "ofApp.h"//Developer/of_v0.8.4_osx_release/apps/myApps/Bubbles_/src/ofApp.cpp

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetBackgroundColor(20, 10, 255);
}

//--------------------------------------------------------------
void ofApp::update(){
    
    Bubbles tempBubble;
    tempBubble.setup(ofRandom(0,ofGetWindowWidth()),ofRandom(0,ofGetWindowHeight()));
    //tempBubble.col.setHsb(tempBubble.h,tempBubble.s,tempBubble.b);
    bubbleys.push_back(tempBubble);

    
    for(int i=0; i<bubbleys.size(); i++) {
        bubbleys[i].update();
        float distance=ofDist(bubbleys[i].start.x,bubbleys[i].start.y,bubbleys[i].pos.x,bubbleys[i].pos.y);
        if(distance>500){
            bubbleys.erase(bubbleys.begin()+i);
            i--;
        }
    }
    for(int i=0; i<balls.size(); i++) {
        balls[i].update();
        float distance=ofDist(balls[i].start.x,balls[i].start.y,balls[i].pos.x,balls[i].pos.y);
        if(distance>800){
            balls.erase(balls.begin()+i);
            i--;
        }
    }
    
    if(ofGetMousePressed()){
        
        Ball tempBall;
        tempBall.setup();
        balls.push_back(tempBall);
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetCircleResolution(100);
    for(int i=0; i<balls.size(); i++) {
        balls[i].draw();
    }
    
    ofSetCircleResolution(3);
    for(int i=0; i<bubbleys.size(); i++) {
        bubbleys[i].draw();
    }

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
 
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
