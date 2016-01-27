#include "people.h"
#include "Birthday.h"
#include <iostream>
using namespace std;


people::people(string x,Birthday bo)
:name(x),dateOfBirth(bo)
{
    //ctor
}

void people::printInfo(){
    cout << name << " was born on ";
    dateOfBirth.printDate();
}
