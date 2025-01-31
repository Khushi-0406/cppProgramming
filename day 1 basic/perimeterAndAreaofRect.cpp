#include <iostream>
using namespace std;

int main()
{
    int prem,area,l,b;

    cout<<"enter the length:-";
    cin>>l;
    cout<<"enter the breath:-";
    cin>>b;

    prem=(l+b)*2;
    area= l*b;

    cout<<"premiter of rectangle is "<<prem<<endl;
    cout<<"area of rectangle is "<<area;

    return 0;
}