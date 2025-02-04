//default constructor

#include <iostream>
using namespace std;

class one{
    public:
    one()
    {
        cout<<"constrcuctror is called"<<endl;
    }
};
int main()
{
    one obj1,obj2,obj3;
    return 0; 
}