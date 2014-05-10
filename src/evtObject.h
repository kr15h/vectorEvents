#ifndef H_EVT_OBJECT
#define H_EVT_OBJECT

#include "ofMain.h"

class evtObject
{
public:
    evtObject();
    ~evtObject();
    
    void registerEvents();
    void unregisterEvents();
    
    void setup(ofEventArgs& args);
    void update(ofEventArgs& args);
    void draw(ofEventArgs& args);
    
    void mousePressed(ofMouseEventArgs& args);
    void mouseReleased(ofMouseEventArgs& args);
    void mouseDragged(ofMouseEventArgs& args);
};

#endif