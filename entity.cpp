#include "entity.h"

entity::entity()
{
    cout << "constructing entity" << endl << endl;
}

entity::entity(const entity& other)
{
    cout << "copy constructing entity" << endl << endl;
}

entity::~entity()
{
    cout << "destructing entity" << endl << endl;
}

void entity::act()
{
    cout << "entity act!" << endl << endl;
}
