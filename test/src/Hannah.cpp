#include "Hannah.h"
#include <iostream>
using namespace std;


Hannah::Hannah(int num)
:h(num)
{
    //ctor
}

void Hannah::printCrap()
{
    cout << "h= " << h <<endl;
    cout << "this->h= " << this->h <<endl;
    cout << "(*this).h= " <<(*this).h <<endl;
}
