#include <iostream>
using namespace std;

class Animal{
    public:
    void speak()
    {
        cout<<"speaking"<<endl;
    }
};

class cat:public Animal
{
    public:
    void speak()
    {
        cout<<"meowing"<<endl;
    }
};

class cow:public Animal
{
    public:

};

int main()
{

    Animal a;
    a.speak();   //speaking
    cat c;
    c.speak();   //meowing  modify the fun.
    cow c2;
    c2.speak();  //speaking 
}

