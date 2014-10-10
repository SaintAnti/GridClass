#include <iostream>

#include "thegrid.h"
#include "econode.h"

using namespace std;

typedef void (*fptr)(ecoNode x);

void ecoNodePrint(ecoNode x);

void ecoNodeAct(ecoNode x);

int main()
{
    cout << "phase 1:" << endl << endl << endl << endl;

    theGrid<ecoNode, fptr> test(2,2);
    fptr a=ecoNodePrint;
    fptr b=ecoNodeAct;

    test.call(a);

    cout << endl << endl << endl << endl << "phase 2:" << endl << endl << endl << endl;

    test.call(b);

    cout << endl << endl << endl << endl << "end" << endl << endl << endl << endl;

    return 0;
}

void ecoNodePrint(ecoNode x)
{
    x.printMe();
}

void ecoNodeAct(ecoNode x)
{
    x.act();
}
