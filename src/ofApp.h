#pragma once

#include "ofMain.h"
#include "evtObject.h"

class ofApp : public ofBaseApp
{
public:
    void setup();
    void addObjects();
    void draw();
    void exit();
    
    evtObject singleObject;
    vector<evtObject*> objectsVector;
};
