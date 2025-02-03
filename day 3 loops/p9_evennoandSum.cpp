#include <iostream>
using namespace std;

int main(){
    int num, i,sum=0,odd;
        cout<<"enter the number:-";
        cin>>num;
    
    for(i=1;i<=num;i++)
    {   if (i % 2 ==0)
    {
        cout<<i<<endl;
        sum=sum+i;
    }
    }
    cout<<"sum of odd numbers are:- "<<sum;
}