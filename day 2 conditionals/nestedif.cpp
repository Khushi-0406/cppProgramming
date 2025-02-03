#include <iostream>
using namespace std;

int main()
{ 
    int a , b ,c;
    cout<<"enter first number:-";
    cin>>a;
    cout<<"enter second number:-";
    cin>>b;
    cout<<"enter third number:-";
    cin>>c;

    if(a>b)
    {
        if(a>c)
        {
            cout<<a<<" is greatest number";
        }
        else
        {
            cout<<c<<" is greatest number.";
        }
    }
    else
    {   
        if(b>c)
        {
            cout<<b<<" is greatest number.";
        }
        else{
       cout<<c<<" is greatest number.";
    }
    } 

    return 0;
}