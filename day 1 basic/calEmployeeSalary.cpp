#include <iostream>
using namespace std;

int main()
{
    int id, hours,amount;
    float salary;

    cout<<"Enter your employee id:-";
    cin>>id;
    cout<<"enter total worked hours of a month:-";
    cin>>hours;
    cout<<"enter amount your received per hour:-";
    cin>>amount;

    salary=hours*amount;

    cout<<"The salary he recived per month is "<<salary;
    return 0;
}