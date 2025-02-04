#include <iostream>
using namespace std;

class one{
    public:
    int a;
};

class two:public one{
    public:
    int b;
};

class three:public two{
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
    cout<<a<<endl<<b<<endl<<c;
}
};

int main()
{
    three obj1;
    obj1.set();
    obj1.display();
}