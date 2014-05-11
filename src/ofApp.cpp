#include "ofApp.h"

void ofApp::setup()
{
    addObjects();
}

void ofApp::addObjects()
{
    for ( int i=0; i<10; i++ ) {
        objectsVector.push_back( new evtObject() );
    }
}

void ofApp::draw()
{
    ofBackground(0);
    
    stringstream ss;
    ss << "To make oF events to work with an object inside a vector\n";
    ss << "dynamically allocate the object with the <new> keyword\n";
    ss << "and then just add a pointer to the vector.";
    
    ofDrawBitmapString(ss.str(), ofPoint(10, 20));
}

void ofApp::exit()
{
    // Clear vector
    while ( objectsVector.size() ) {
        delete objectsVector.back();
        objectsVector.pop_back();
    }
}