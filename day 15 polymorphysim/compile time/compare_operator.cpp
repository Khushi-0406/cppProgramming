// Overloading the == Operator:
// Create a class Time that represents time in hours and minutes. Overload the == operator to compare if two Time objects are equal.

// Task:
// Define a Time class with hours and minutes as data members.

// Implement a constructor to initialize the time.

// Overload the == operator to compare two Time objects for equality.


#include <iostream>
using namespace std;

class time{
    int hour, min;

    public:

    time(int h, int m)
    {
        hour=h;
        min=m;
    }

    void operator==(time t2)
    {
        if(hour==t2.hour && min==t2.min)
    {
        cout<<"time is same";
    }
    else{
        cout<<"time is not same";
    }

    }

    void display()
    {
        cout<<"hours:-"<<hour<<" Minutes:- "<<min<<endl;
    }


};

int main()
{
    time t1(10,20);
    time t2(10,20);
    t1.display();
    t2.display();
    t1.operator==(t2);
}