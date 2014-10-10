#include "econode.h"

ecoNode::ecoNode()
{
    cout << "constructing ecoNode" << endl;
}

ecoNode::~ecoNode()
{
    cout << "destructing ecoNode" << endl;
}

ecoNode::ecoNode(const ecoNode& other)
{
    cout << "copy constructing ecoNode" << endl;
}

void ecoNode::printMe()
{
    cout << "I am being printed!" << endl;
}
