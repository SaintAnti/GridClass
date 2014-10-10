#ifndef ECONODE_H
#define ECONODE_H

#include <iostream>     //dev include

#include "entity.h"

using namespace std;    //dev include

class ecoNode
{
public:
    ecoNode();
    ~ecoNode();
    ecoNode(const ecoNode& other);

    void printMe();
    void act();
private:
    entity *myEntity;

};

#endif // ECONODE_H
