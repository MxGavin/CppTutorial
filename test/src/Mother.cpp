#include "Mother.h"
#include <iostream>
using namespace std;

Mother::Mother()
{
    cout << "I am the mother constructor!" << endl;
}

Mother::~Mother()
{
    cout << "This is the mother deconstructor!" << endl;
}

void Mother::sayName(){
    cout <<"I am a RobnertsQ! "<<endl;
}
