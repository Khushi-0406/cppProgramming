#include <iostream>
using namespace std;

class one{
    public:
    int a,b;
    one(int x,int y)
    {
        a=x;
        b=y;
    }
    void display()
    {
        cout<<a<<" "<<b<<endl;
    }
};

int main()
{
    one obj1(2,3);
    obj1.display();
    one obj2(7,8);
    obj2.display();

    return 0;
}