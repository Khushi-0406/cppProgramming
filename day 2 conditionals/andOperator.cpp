#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter a number:-";
    cin>>n;

    if(n>99 && n<1000)
    cout<<"the number is three digit";
    else
    cout<<"the number is not a three digit number.";

    return 0;
}