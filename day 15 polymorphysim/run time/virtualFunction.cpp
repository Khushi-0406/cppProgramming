#include <iostream>
using namespace std;

class one{
    public:

    virtual void display()
    {
        cout<<"one"<<endl;
    }
};

class two:public one
{
    public:

    void display()
    {
        cout<<"two"<<endl;
    }
};

int main()
{
    one *bptr;
    two t;
    bptr= &t;
    bptr->display();
} 

//without virtual function the output is ------ one
//with virtual function the output is ----- two