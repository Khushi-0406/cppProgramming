#include <iostream>
using namespace std;

class two;
class three;
class one
{
    int a;

public:
    void set(int x)
    {
        a=x;
    }

    friend void add(one, two, three);
};

class two
{
    int b;

public:
    void set2(int y)
    {
        b=y;
    }

    friend void add(one, two, three);
};

class three
{
    int c;

public:
    void set3(int z)
    {
        c=z;
    }

    friend void add(one, two, three);
};

void add(one ob1, two ob2, three ob3)
{
    cout << ob1.a + ob2.b + ob3.c;
}

int main()
{
    one ob1;
    two ob2;
    three ob3;
    ob1.set(4);
    ob2.set2(10);
    ob3.set3(6);
    add(ob1, ob2, ob3);

    return 0;
}