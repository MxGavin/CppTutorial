#ifndef DAUGHTER_H
#define DAUGHTER_H
#include "Mother.h"

class Daughter:public Mother
{
    public:
        void doSomething();
        Daughter();
        ~Daughter();
    protected:
    private:
};

#endif // DAUGHTER_H
