#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter a number:-";
    cin>>n;
    int sum=0;
    while(n !=0)
    {
        int ld=n%10;
        n/=10;
        sum=sum+ld;
    }
    cout<<sum;

return 0;
}