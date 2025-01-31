#include <iostream>
using namespace std;

int main()
{
    int input,week,year,day, rem;

    cout<<"enter number of days:-";
    cin>>input;

    year=input/365;
    rem=input%365;
    week=rem/7;
    day=rem%7;

    cout<<year<<" years "<<week<<" weeks "<<day<<" days ";
    return 0;
}