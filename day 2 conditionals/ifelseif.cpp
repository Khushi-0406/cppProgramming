#include <iostream>
using namespace std;

int main()
{
    int sp, cp, profit,loss;
    cout<<"enter cost price:-";
    cin>>cp;
    cout<<"enter selling price:-";
    cin>>sp;

    if(sp>cp)
    cout<<"profit is "<<sp-cp;

    else if(cp>sp)
    cout<<"loss is "<<cp-sp;

    else
    cout<<"no profit no loss";


}