#include <iostream>
using namespace std;

int main()
{
    int sp,cp,profit,loss;

    cout<<"enter cost price:-";
    cin>>cp;
    cout<<"enter selling price:-";
    cin>>sp;

    profit=sp-cp;
    loss=cp-sp;

    if(sp>cp) cout<<"profit of "<<profit;
    else cout<<"loss of "<<loss;

    return 0;
}