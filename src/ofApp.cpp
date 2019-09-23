#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofDisableAlphaBlending();
    ofEnableDepthTest();
    light.enable();
    light.setPosition(ofVec3f(100,100,200));
    light.lookAt(ofVec3f(0,0,0));


    ofDisableArbTex();
    ofLoadImage(mTex,"test.jpg");
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    //cam.begin();
    //sphere.draw();
    //cam.end();
    
    cam.begin();
    mTex.bind();
    sphere.draw();
    mTex.unbind();
    cam.end();
}
