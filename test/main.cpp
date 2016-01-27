#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <fstream>

#include "Burrito.h"
#include "Sally.h"
#include "Birthday.h"   //must be include before people.h
#include "people.h"
#include "Hannah.h"
#include "OverLoad.h"
#include "Mother.h"
#include "Son.h"
#include "Daughter.h"

using namespace std;



//#define TS_BeforeOther
//#define TS_DefualtArguments
//#define TS_UnaryScope
//#define TS_30_FunctionOverloading
//#define TS_31_Recursion //
//#define TS_32_CreateArrayUsingLoops
//#define TS_42_ArrowMemberSelectionOperator
//#define TS_44_ConstObject
//#define TS_45_MemberInitializers
//#define TS_46_Composition
//#define TS_47_Friend
//#define TS_48_This
//#define TS_49_OperatorOverloading
//#define TS_52_Inheritance     //????
//#define TS_53_ProtectedMembers
//#define TS_54_DerivedClassConstructor
//#define TS_55_Polymorphism
//#define TS_56_VirtualFunctions
//#define TS_58_Template
//#define TS_62_Exceptions
//#define TS_64_WorkingWithFiles
//#define TS_68_CoolProgram
//#define TS_71_StringClass
#define TS_72_StringSubstringsSwappingFinding

#ifdef TS_BeforeOther
class GavinsClass{
    public:
        GavinsClass(string z){                  /* Constructor */
            setName(z);
        }

        void setName(string x){
            name = x;
        }

        string getName(){
            return name;
        }

    private:
        string name;

};
#endif // TS_BeforeOther

#ifdef TS_47_Friend
class StankFist{
    public:
        StankFist(){
            stinkyVar = 0;
        }
    private:
        int stinkyVar;

    friend void stinkysFriend(StankFist &sfo);
};

void stinkysFriend(StankFist &sfo){
    sfo.stinkyVar = 99;
    cout << sfo.stinkyVar << endl;
}
#endif // TS_47_Friend


#ifdef TS_55_Polymorphism
class Enemy{
protected:
    int attackPower;
public:
    void setAttackPower(int a){
        attackPower = a;
    }
};

class Ninja:public Enemy{
public:
    void attack(){
        cout <<"I am a ninja ,ninjia chop! -" << attackPower <<endl;
    }
};

class Monster:public Enemy{
public:
    void attack(){
        cout <<"monster must eat you!!! -" << attackPower <<endl;
    }
};
#endif // TS_55_Polymorphism

#ifdef TS_56_VirtualFunctions
class Enemy{
protected:
    int attackPower;
public:
    void setAttackPower(int a){
        attackPower = a;
    }
    virtual void attack()=0;    //pure virtual function
//    {
//        cout << "I am the enemy class!"<<endl;
 //   }
};

class Ninja:public Enemy{
public:
    void attack(){
        cout <<"ninjia attack! ninjia chop! -" << attackPower <<endl;
    }
};

class Monster:public Enemy{
public:
    void attack(){
        cout <<"monster attack!monster must eat you!!! -" << attackPower <<endl;
    }
};
#endif // TS_55_Polymorphism


#ifdef TS_DefualtArguments
int volume(int l=1,int w=1,int h=1);
#endif

#ifdef TS_UnaryScope
int tuna = 69;
#endif

#ifdef TS_30_FunctionOverloading
void printNumber(int x){
    cout << "I am printing an integer " << x <<endl;
}
void printNumber(float x){
    cout << "I am printing a float " << x <<endl;
}
#endif

#ifdef TS_31_Recursion
int factorialFinder(int x){
    if(x<=1){       //base condition/case
        return 1;
    }else{
        return x*factorialFinder(x-1);
    }
}
#endif

#ifdef TS_58_Template
template <class bucky>
bucky addCrap(bucky a,bucky b){
    return a+b;
}

template <class FIRST,class SECOND>

FIRST smaller(FIRST a, SECOND b){
    return (a<b?a:b);
}

// 60_ClassTemplate
template <class T>
class Ethan{
    T fst,snd;
public:
    Ethan(T a, T b){
        fst = a;
        snd = b;
    }
    T bigger();
};

template <class T>
T Ethan<T>::bigger(){
    return (fst>snd?fst:snd);
}

// 61_Template Specializations
template <class T>
class Spunky{
public:
    Spunky(T x){
        cout << x << " is not a character" <<endl;
    }
};

template<>
class Spunky<char>{
public:
    Spunky(char x){
        cout << x << " is indeed a character" <<endl;
    }
};
#endif // TS_58_Template

#ifdef TS_68_CoolProgram
int getWhatTheyWant(){
    int choice;

    cout << "1 just plain items" << endl;
    cout << "2 help items" << endl;
    cout << "3 harmful items" << endl;
    cout << "4 quit items" << endl;

    cin >> choice;
    return choice;
}

//display items function
void displayItems(int x){
    ifstream objectFile("objects.txt");
    string name;
    double power;

     switch(x){
        case 1:
            while(objectFile >> name >> power){
                if(power==0){
                    cout << name << ' ' << power << endl;
                }
            }
            break;
        case 2:
            while(objectFile >> name >> power){
                if(power>0){
                    cout << name << ' ' << power << endl;
                }
            }
            break;
        case 3:
            while(objectFile >> name >> power){
                if(power<0){
                    cout << name << ' ' << power << endl;
                }
            }
            break;
        default :
            break;
    }
}

#endif // TS_68_CoolProgram




















//======================================================================================
//======================================================================================
//======================================================================================
int main()
{
  //  GavinsClass GavinsObject("setting initial");

  //  GavinsObject.setName("I am Gavin");
  //  cout << GavinsObject.getName() <<endl;

  //  GavinsClass go("Sally mcSalad\n");
  //  cout << go.getName();

  //  Burrito bo;

#if 0
    srand(time(0));  //initial the random function
    for(int x=1; x<25;x++){
        cout << 1+(rand()%6) << endl; // no computer can generate real random number
    }
#endif // 0

#ifdef TS_DefualtArguments
    cout << volume();
#endif

#ifdef TS_UnaryScope
    int tuna =20;
    cout << tuna<<endl;
    cout << ::tuna<<endl;       //Global variables
#endif

#ifdef TS_30_FunctionOverloading
    int a = 54;
    float b = 32.45988;
    printNumber(a);
    printNumber(b);
#endif

#ifdef TS_31_Recursion
    cout << factorialFinder(5)<<endl;
#endif


#ifdef TS_32_CreateArrayUsingLoops
    int bucky[9];
    cout <<"Element - Value"<<endl;
    for(int x=0;x<9;x++){
        bucky[x]=99;
        cout << x <<"----------"<<bucky[x]<< endl;
    }
#endif // TS_32_CreateArrayUsingLoops


#ifdef TS_42_ArrowMemberSelectionOperator
    Sally so;
    Sally *sallyPointer = &so;

    so.printCrap();
    sallyPointer->printCrap();
#endif // TS_42_ArrowMemberSelectionOperator

#ifdef TS_44_ConstObject
    const Sally constObj;
    constObj.printConst();
#endif // TS_44_ConstObject

#ifdef TS_45_MemberInitializers
    Sally so(3,87);
    so.print();
#endif // TS_45_MemberInitializers

#ifdef TS_46_Composition
    Birthday birthObject(12,10,1982);
    people GavinObj("Gavin Wong",birthObject);
    GavinObj.printInfo();
#endif // TS_46_Composition

#ifdef TS_47_Friend
    StankFist bob;
    stinkysFriend(bob);
#endif // TS_47_Friend

#ifdef TS_48_This
    Hannah ho(23);
    ho.printCrap();

#endif // TS_48_This

#ifdef TS_49_OperatorOverloading

    OverLoad a(34);
    OverLoad b(21);
    OverLoad c;

    c = a+b;
    cout << c.OverNum <<endl;
#endif // TS_49_OperatorOverloading

#ifdef TS_52_Inheritance
    Son Ethan;
    Ethan.sayName();
#endif // TS_52_Inheritance

#ifdef TS_53_ProtectedMembers
    Daughter tina;
    tina.doSomething();
#endif // TS_53_ProtectedMembers

#ifdef TS_54_DerivedClassConstructor
  //  Mother mom;
    Daughter tina;
#endif // TS_54_DerivedClassConstructor

#ifdef TS_55_Polymorphism
    Ninja n;
    Monster m;
    Enemy *enemy1 = &n;     //because ninja is of type enemy,this is valid
    Enemy *enemy2 = &m;     //anything that an enemy can do,monster can do

    enemy1->setAttackPower(4);  //ninja is just a more specific type of enemy
    enemy2->setAttackPower(26); //every enemy has setAttackPower

    n.attack();             //can't use enemy1 because its type enemy
    m.attack();             //Enemy class does not have attack
                            //virtual members make this even easier
#endif // TS_55_Polymorphism


#ifdef TS_56_VirtualFunctions
    Ninja n;
    Monster m;
    Enemy *enemy1 = &n;
    Enemy *enemy2 = &m;

    enemy1->setAttackPower(4);  //ninja is just a more specific type of enemy
    enemy2->setAttackPower(26); //every enemy has setAttackPower
    enemy1->attack();
    enemy2->attack();

#endif // TS_56_VirtualFunctions

#ifdef TS_58_Template
    double  x=7.0,y=43.235,z;
    z =addCrap(x,y);
    cout << z << endl;

    int t = 89;
    double q = 56.78;
    cout << smaller(t,q) << endl;

    // 60_ClassTemplate
    Ethan <int>eo(69,105);
    cout << eo.bigger() << endl;

    // 61_Template Specializations
    Spunky<int> obj1(7);
    Spunky<double> obj2(3.124);
    Spunky<char> obj3('a');

#endif // TS_58_Template

#ifdef TS_62_Exceptions
    try{
        int momsAge = 30;
        int sonsAge = 34;
        if(sonsAge > momsAge){
            throw 99;
        }
    }catch(int x){
        cout <<"son can not be older than mom. ERROR NUMBER: "<< x <<endl;
    }


    try{

        int num1;
        cout << "Enter first number: " << endl;
        cin >> num1;

        int num2;
        cout << "Enter second number: " << endl;
        cin >> num2;

        if(num2==0){
            throw 0;
        }

        cout << num1/num2 << endl;

    }catch(...){
        cout << "you cant divided by 0" << endl;
    }

#endif // TS_62_Exceptions

#ifdef TS_64_WorkingWithFiles
    ofstream buckyFile;
    buckyFile.open("tuna.txt"); //even this file isn't exist

    buckyFile << "I love tuna and tuna loves me!\n";
    buckyFile.close();

    ofstream gavinsFile("butterfly.txt");//even this file isn't exist
 //   ofstream gavinsFile("");//even this file isn't exist

    if(gavinsFile.is_open()){
        cout <<"ok, this file is opened"<<endl;
        gavinsFile << "oi love the beef!\n";
        gavinsFile.close();
    }else{
         cout <<"sorry,you messed up"<<endl;
    }

    ofstream theFile("players.txt");
    cout << "Enters player's ID, Name, and Money" << endl;
    cout << "press Ctrl+Z to quit \n" << endl;

    int idNumber;
    string name;
    double money;

    while(cin>>idNumber>>name>>money){
        theFile << idNumber << " " << name << " " << money << endl;
    }
    theFile.close();

    //Reading custom File structures
    ifstream readFile("players.txt");
    int rdID;
    string reName;
    double reMoney;

    while(readFile >> rdID >> reName >> reMoney){
        cout << rdID << ", " << reName << ", " << reMoney << endl;
    }

#endif // TS_64_WorkingWithFiles

#ifdef TS_68_CoolProgram
    int whatTheyWant;

    whatTheyWant = getWhatTheyWant();

    while(whatTheyWant != 4){
        displayItems(whatTheyWant);
        whatTheyWant = getWhatTheyWant();
    }

#endif // TS_68_CoolProgram

#ifdef TS_71_StringClass

    string s1("hamster ");
    string s2;
    string s3;

    cout << s1.at(3) << endl;
    for(int t=0;t<s1.length();t++){
        cout << s1.at(t) << endl;
    }

    s2 = s1;
    s3.assign(s1);
    cout<< s1 << s2 << s3 << endl;


    string x;
    cout <<"Please enter a string: " << endl;
    getline(cin,x);
    cout << x << endl;

    string bucky;
    cout <<"Please enter a string: " << endl;
    cin >> bucky;
    cout << "the string i entered is " << bucky << endl;
#endif // TS_71_StringClass


#ifdef TS_72_StringSubstringsSwappingFinding

    //substring
    string s1("OMG i think i am preggy!!");
    cout << s1.substr(17,7)<<endl;

    //swapping
    string one("apples ");
    string two("beans ");

    cout << one << two << endl;
    one.swap(two);
    cout << one << two << endl;

    //finding
    string s3("hi my name is gavin ,and ham is spam oh yes i am!");
    cout << s3.find("am") << endl;

    cout << s3 << endl;
    s3.erase(20);
    cout << s3 << endl;
    s3.replace(14,5,"Jianeng");
    cout << s3 << endl;
    s3.insert(14,"Huang ");
    cout << s3 << endl;


#endif // TS_72_StringSubstringsSwappingFinding















    return 0;
}







#ifdef TS_DefualtArguments
int volume(int l,int w,int h){
    return l*w*h;
}
#endif
