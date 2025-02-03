#include <iostream>
using namespace std;

//2,4,8,16,32,........n  next num x2 called GP
int main()
{
    int i,n;

    cout<<"enter n:-";
    cin>>n;

int a=2;
    for(i=1;i<=n;i++)
    {
        cout<<a<<" ";
        a=a*2;
    }


    return 0;
}