#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(255,255,255);
    
    x1=0;
    x2=0;
    x3=0;
    
    y1=0;
    y2=0;
    
    counter = 0;
    
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    x1=x1+0.009f;
    x2=x2+0.009f;
    x3=x3+0.009f;
    
    y1=y1+0.009f;
    y2=y2+0.009f;
    
    counter = counter + 0.033f;
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    //PAINTING 1
    float h1 = 70 + 15*sin(x1);
    ofFill();
    
    if(h1>=83){
        ofSetColor(254, 0, 0);
    }else{
        ofSetColor(200,200,200);
    }
    //ofSetColor(254,0,0);  //red rectangle
    ofDrawRectangle(200,250,100,h1);
    
    
    
    float h2 = 40 + 20*sin(x2);
    ofSetColor(255,211,74);  //yellow rect
    ofDrawRectangle(300,380,h2,60);
    
    float h3 = 15*sin(x3)-30;
    ofSetColor(6,79,132); //bule rect
    ofDrawRectangle(400,440,50,h3);
    
    ofNoFill();
    ofSetColor(0,0,0);
    ofDrawRectangle(200,250,250,250);
    
    ofSetLineWidth(5);
    ofDrawLine(300,250,300,500);
    ofDrawLine(h2+300,250,h2+300,500);  //moving line
    ofDrawLine(200,335,450,335);
    ofDrawLine(200,380,450,380);
    ofDrawLine(200,440,450,440);   //long lines
    
    ofDrawLine(400,380,400,500);
    ofDrawLine(300,480,400,480);   //short lines
    
    
    //PAINTING 2
    ofNoFill();
    ofSetColor(0,0,0);

    ofPushMatrix();
    ofTranslate(640,380);
    ofRotateZ(45);
    for(float i=0;i<10;i++){
        ofRotateZ(ofGetElapsedTimef()*i);
    }
    ofDrawRectangle(-100,-100,200,200);
    ofPopMatrix();
    
    ofPushMatrix();
    ofTranslate(640,380);
    for(float i=0;i<10;i++){
        ofRotateZ(ofGetElapsedTimef()*i);
    }
    ofSetLineWidth(5);
    ofDrawLine(-83,-60,83,-60);
    ofDrawLine(-70,-70,-70,70);
    ofDrawLine(95,-48,95,48);
    ofDrawLine(-41,98,41,98);
    
    ofFill();
    ofSetColor(200,200,200);
    ofDrawTriangle(-40,100,40,100,0,140);
    ofPopMatrix();
    
    
    //PAINTING 3
    
    ofPushMatrix();
    ofTranslate(840,250);
    
    ofNoFill();
    ofSetColor(0,0,0);
    ofDrawLine(0,50,70,50);
    
    ofFill();
    float w1 = 20*sin(y1)-150;
    ofSetColor(254,0,0); //red
    ofDrawRectangle(200,0,w1,175);
    
    float w2 = 50+20*sin(y2);
    //ofSetColor(6,79,132); //blue
    
    ofEnableAlphaBlending();
    ofSetColor(6,79,132,100+((int)(counter * 5.0f) % 255));
    ofDrawRectangle(0,175,w2,75);
    ofDisableAlphaBlending();
    
    ofSetColor(255,211,74);  //yellow
    ofDrawRectangle(170,220,30,30);
    
    
    ofNoFill();
    ofSetColor(0,0,0);
    ofDrawRectangle(0,0,200,250);
    
    ofSetLineWidth(5);
    
    ofDrawLine(w1+200,0,w1+200,250); //moving line
    
    ofDrawLine(0,175,200,175);
    ofDrawLine(170,175,170,250);
    ofDrawLine(170,220,200,220);
    ofPopMatrix();
    
    ofDrawBitmapString("P I E T  M O N D R I A N", 200,570);
    ofDrawBitmapString("Composition with Red, Blue, and Yellow,1930 (Left)", 200,600);
    ofDrawBitmapString("Tableau I: Lozenge with Four Lines and Gray,1926 (Middle)", 200,620);
    ofDrawBitmapString("Composition II in Red, Blue, and Yellow,1930 (Right)", 200,640);
    ofDrawBitmapString("Animation: Su Zhang", 890,640);
    

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
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

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
