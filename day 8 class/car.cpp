#include <iostream>
using namespace std;

class Car
{
    public:
    string name;
    int price;
    int seats;
    string type;
};

void display(Car c)
{
    cout<<c.name<<"\t"<<c.price<<"\t"<<c.seats<<"\t"<<c.type<<endl;
}

int main()
{
    Car c1;   //static
    c1.name="honda";
    c1.price=15000;
    c1.seats=5;
    c1.type="sedan";
    
    Car c2;
    c2.name = "maruti swift";
    c2.price=60000;
    c2.seats=6;
    c2.type="hatchback";

    Car c3;  
    c3.name = "lamborgney";
    c3.price=100000;
    c3.seats=4;
    c3.type="yellow";

    display(c1);
    display(c2);
    display(c3);
}