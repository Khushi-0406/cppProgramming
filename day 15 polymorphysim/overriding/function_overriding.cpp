#include <iostream>
using namespace std;

class one{
    public:
    void dis()
    {
        cout<<"one"<<endl;
    }
};

class two:public one
{
    public:
    void dis()
    {
        cout<<"two"<<endl;
    }
};

int main()
{
    two t;
    t.dis();       //by defaault call the derived class

    t.one::dis();  //explicity calling


}