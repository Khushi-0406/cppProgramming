#include <iostream>
using namespace std;

class add
{
public:
    void sum(int a, int b)
    {
        cout << a + b << endl;
    }

    void sum(int a, int b, int c)
    {
        cout << a + b + c << endl;
    }
    void sum(int a, int b, int c, int d)
    {
        cout << a + b + c + d << endl;
    }
    void sum(int a, double b)
    {
        cout << a + b << endl;
    }
};

int main()
{
    add obj1;
    obj1.sum(2, 4);

    obj1.sum(2, 3, 4);

    obj1.sum(2, 3, 4, 5);

    obj1.sum(2, 2.4);
}