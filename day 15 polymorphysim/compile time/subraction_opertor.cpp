#include <iostream>
using namespace std;

class one{
    public:
    int a, b,c;

    void set(int x,int y)
    {
        a=x;
        b=y;
    }

    void operator +()
    {
         c =a+b;
    }
    void display()
    {
        cout<<"sum is "<<c<<endl;
    }

};

int main()
{
    one o;
    o.set(9,4);
    +o;   //operator function calling
    o.display();
}