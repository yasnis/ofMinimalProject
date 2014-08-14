#include "ofMain.h"

class testApp : public ofBaseApp{
    //--------------------------------------------------------------
    void setup(){
        ofBackground(0);
        ofSetFrameRate(60);
        ofSetVerticalSync(true);
    }
    
    //--------------------------------------------------------------
    void update(){
        
    }
    
    //--------------------------------------------------------------
    void draw(){
        
    }
    
    //--------------------------------------------------------------
    void keyPressed(int key){
        if(key == 'f'){
            ofToggleFullscreen();
        }
    }
};

//========================================================================
int main( ){
	ofSetupOpenGL(960,540, OF_WINDOW);
	ofRunApp( new testApp());
}
