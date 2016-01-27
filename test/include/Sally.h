#ifndef SALLY_H
#define SALLY_H


class Sally
{
    public:
        Sally(int a,int b);


        ~Sally();   //deconstruct
        void print();
        void printCrap();
        void printConst() const;
    protected:
    private:
        int regVar;
        const int cstVar;
};

#endif // SALLY_H
