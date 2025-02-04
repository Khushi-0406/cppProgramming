#include <iostream>
using namespace std;

class parent{
    public:
    int a;
    void set()
    {
        a = 5;
    }
    void display()
    {
        cout<<a<<endl;
    }
};

class child:public parent{
    public:
    int b;
    void set2()
    {
        b=10;
    }
    void display2()
    {
        cout<<b<<endl;
    }
};

int main()
{
    child obj1;

    obj1.set();
    obj1.display();
    obj1.set2();
    obj1.display2();

}