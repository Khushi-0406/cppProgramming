#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter n:-";
    cin>>n;
    
    bool flag= true; //number is prime
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        flag=false; //false means composite
        break;
    }

    if(flag==true) cout<<"prime";
    else cout<<"composite";

    return 0;
}