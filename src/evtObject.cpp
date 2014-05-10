#include "evtObject.h"

evtObject::evtObject()
{
    registerEvents();
}

evtObject::~evtObject()
{
    unregisterEvents();
}

void evtObject::registerEvents()
{
    ofAddListener(ofEvents().setup, this, &evtObject::setup);
    ofAddListener(ofEvents().update, this, &evtObject::update);
    ofAddListener(ofEvents().draw, this, &evtObject::draw);
    ofAddListener(ofEvents().mousePressed, this, &evtObject::mousePressed);
    ofAddListener(ofEvents().mouseReleased, this, &evtObject::mouseReleased);
    ofAddListener(ofEvents().mouseDragged, this, &evtObject::mouseDragged);
}

void evtObject::unregisterEvents()
{
    ofRemoveListener(ofEvents().setup, this, &evtObject::setup);
    ofRemoveListener(ofEvents().update, this, &evtObject::update);
    ofRemoveListener(ofEvents().draw, this, &evtObject::draw);
    ofRemoveListener(ofEvents().mousePressed, this, &evtObject::mousePressed);
    ofRemoveListener(ofEvents().mouseReleased, this, &evtObject::mouseReleased);
    ofRemoveListener(ofEvents().mouseDragged, this, &evtObject::mouseDragged);
}

void evtObject::setup(ofEventArgs &args)
{
    cout << "setup" << endl;
}

void evtObject::update(ofEventArgs &args)
{
    //cout << "update" << endl;
}

void evtObject::draw(ofEventArgs &args)
{
    //cout << "draw" << endl;
}

void evtObject::mousePressed(ofMouseEventArgs &args)
{
    cout << "mousePressed" << endl;
}

void evtObject::mouseReleased(ofMouseEventArgs &args)
{
    cout << "mouseReleased" << endl;
}

void evtObject::mouseDragged(ofMouseEventArgs &args)
{
    cout << "mouseDragged" << endl;
}