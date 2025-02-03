#include <iostream>
using namespace std;

int  main()
{
    int sum=0,i,num;
    cout<<"enter N number:-";
    cin>>num;

    for(i=1;i<=num;i++)
    {
        cout<<i<<endl;
        sum=sum+i;
    }
cout<<"the sum of "<<num<<" number is "<<sum;

return 0;
}