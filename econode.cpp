#include "econode.h"

ecoNode::ecoNode()
{
    cout << "constructing ecoNode" << endl;
    myEntity = new entity;
}

ecoNode::~ecoNode()
{
    cout << "destructing ecoNode" << endl;
    delete myEntity;
}

ecoNode::ecoNode(const ecoNode& other)
{
    cout << "copy constructing ecoNode" << endl;
    if(&other != this)
        myEntity = new entity(*(other.myEntity));
}

void ecoNode::printMe()
{
    cout << "I am being printed!" << endl;
}

void ecoNode::act()
{
    cout << "ecoNode act" << endl;
    myEntity->act();
}
