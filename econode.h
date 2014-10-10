#ifndef ECONODE_H
#define ECONODE_H

#include <iostream>     //dev include

using namespace std;    //dev include

class ecoNode
{
public:
    ecoNode();
    ~ecoNode();
    ecoNode(const ecoNode& other);
    void printMe();
};

#endif // ECONODE_H
