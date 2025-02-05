#include <iostream>
using namespace std;

class two;
class three;
class one{
    int a=10;
    public:


friend void fun(one,two,three);
};

class two{
    int b=50;
    public:

friend void fun(one,two,three);
};

class three{
    int c=90;
    public:

    friend void fun(one,two,three);
};

void fun(one ob1,two ob2, three ob3)
{
cout<<ob1.a<<" "<<ob2.b<<" "<<ob3.c;
}

int main()
{
    one ob1;
    two ob2;
    three ob3;
    fun(ob1,ob2,ob3);
}