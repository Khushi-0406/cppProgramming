#include <iostream>
using namespace std;

class one
{
public:
    int a, b;
    void set(int x, int y)
    {
        a = x;
        b = y;
    }

    void operator +(one &obj2)
    {
        int c = a + obj2.a;
        int d = b + obj2.b;
        cout << c << " " << d << endl;
    }
};

int main()
{
    one obj1;
    one obj2;
    obj1.set(2, 4);
    obj2.set(4, 5);
   // obj1 + obj2;
   obj1.operator +(obj2);

}