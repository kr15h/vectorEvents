#include "ofApp.h"

void ofApp::setup()
{
    addObjects();
}

void ofApp::addObjects()
{
    for ( int i=0; i<10; i++ ) {
        objectsVector.push_back(evtObject());
    }
}

void ofApp::draw()
{
    ofBackground(0);
    
    stringstream ss;
    ss << "This application is made jsut to show that ofEvents are not\n";
    ss << "being called, are not working, when the object that registers\n";
    ss << "to the events is being stored in a vector.\n\n";
    ss << "Press and drag your mouse to see that only events for singleObject\n";
    ss << "variable are being called. Events for other objects that are\n";
    ss << "inside the objectsVector variable are not being called.";
    
    ofDrawBitmapString(ss.str(), ofPoint(10, 20));
}