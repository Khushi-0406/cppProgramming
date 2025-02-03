#include <iostream>
using namespace std;

int main()
{
    int sum=0, avg,i,num;

    for(i=1;i<=10;i++)
    {
        cout<<"enter a number:-";
        cin>>num;
        sum=sum+num;

    }
    avg=sum/10;
    
    cout<<"sum is "<<sum<<endl;
    cout<<"avrage is "<<avg;

    return 0;
}