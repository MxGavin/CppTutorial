#include "Sally.h"
#include <iostream>
using namespace std;

Sally::Sally(int a, int b)
:regVar(a),
cstVar(b)
{
    cout <<"i am the constructor!"<<endl;
}

Sally::~Sally(){
    cout << "I am the deconstructor. "<<endl;
}

void Sally ::print()
{
    cout << "regular var is: "<< regVar <<"\nconst variable is : "<< cstVar <<endl;
}

void Sally ::printCrap()
{
    cout << "did someone say steak?"<<endl;
}

void Sally ::printConst() const{
    cout << "I am the const function " <<endl;
}
