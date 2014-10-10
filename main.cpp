#include <iostream>

#include "thegrid.h"
#include "econode.h"

using namespace std;

typedef void (*fptr)(ecoNode x);

void ecoNodePrint(ecoNode x);

int main()
{
    theGrid<ecoNode, fptr> test(2,2);
    fptr U=ecoNodePrint;

    test.call(U);

    cout << "Hello World!" << endl;
    return 0;
}

void ecoNodePrint(ecoNode x)
{
    x.printMe();
}
