#include "Daughter.h"
#include <iostream>
using namespace std;

Daughter::Daughter()
{
    cout << "I am the daughter's constructor!" << endl;
}

Daughter::~Daughter()
{
    cout << "This the daughter's deconstructor!" << endl;
}

void Daughter::doSomething()
{
    publicv = 1;
    protectedv = 2;
//    privatev = 3;
}
