#include <iostream>
using namespace std;

class add{
    public:

    int a,b;
    
    void set(int x, int y )
    {
        a=x;
        b=y;
    }

    add operator+(add ob2)
    {
        add ob3;
        ob3.a=a+ob2.a;
        ob3.b=b+ob2.b;
        return ob3;
    }

    void display()
    {
        cout<<a<<" "<<b;
    }
};

int main()
{
    add ob1,ob2,ob3;
    ob1.set(2,3);
    ob2.set(3,4);
    ob3 = ob1.operator+(ob2);
    ob3.display();

}