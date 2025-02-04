#include <iostream>
using namespace std;

class example{
    public:
    int a, b, c;

    example()
    {
        a=0;b=0;c=0;
    }  
    void input()
    {
        cout<<"enter three number:-";
        cin>>a>>b>>c;
    }

    void display()
    {
        cout<<"A "<<a<<endl;
        cout<<"B "<<b<<endl;
        cout<<"C "<<c<<endl;

    }
};

int main()
{
    example obj;
    obj.input();
    obj.display();
    return 0;
}