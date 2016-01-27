#include "OverLoad.h"

OverLoad::OverLoad()
{
    //ctor
}

OverLoad::OverLoad(int a)
{
    OverNum = a;
}

OverLoad OverLoad::operator+(OverLoad otherObject){
    OverLoad brandNew;
    brandNew.OverNum = OverNum + otherObject.OverNum;
    return(brandNew);
}
