#include <iostream>
using namespace std;

class one{         //base
    public:
    int a;
    void set1()
    {
        a=10;
    }
    void display1()
    {
        cout<<a<<endl;
    }
};

class two:public one{    //derived
    public:
    int b;
    void set2()
    {
        b=20;
    }
    void display2()
    {
        cout<<b<<endl;
    }
};

class three:public one{    //derived
    public:
    int c;
    void set3()
    {
        c=30;
    }
    void display3()
    {
        cout<<c<<endl;
    }
};

int main()
{
    two obj1;
    obj1.set1();
    obj1.display1();
    obj1.set2();
    obj1.display2();
    
    three obj2;
    obj2.set1();
    obj2.display1();
    obj2.set3();
    obj2.display3();
}