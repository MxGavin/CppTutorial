#ifndef PEOPLE_H
#define PEOPLE_H

#include <string>
#include "Birthday.h"
using namespace std;

class people
{
    public:
        people(string x,Birthday bo);
        void printInfo();
    private:
        string name;
        Birthday dateOfBirth;
};

#endif // PEOPLE_H
