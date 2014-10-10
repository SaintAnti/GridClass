#ifndef ENTITY_H
#define ENTITY_H

#include <iostream>     //dev include

using namespace std;    //dev include

class entity
{
public:
    entity();
    entity(const entity& other);
    ~entity();
    void act();
};

#endif // ENTITY_H
