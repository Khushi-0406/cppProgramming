#include<iostream>
using namespace std;

class one{
    public:
    int a;
};

class two{
    public:
    int b;
};

class three:public one,two{
    public:
    int c;

    void set()
    {
        a=10;
        b=20;
        c=30;
    }
    void display()
    {
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
};

int main()
{
    three obj1;
    obj1.display();

    obj1.set();
    obj1.display();
}
