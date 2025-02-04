#include <iostream>
using namespace std;

class student{
    public:
    int id;
    string name;

    void set()
    {
        cout<<"enter id:-";
        cin>>id;
        cout<<"enter name:-";
        cin>>name;
    }

    void display()
    {
        cout<<"id:-"<<id<<" name:- "<<name<<endl;
    }
};

class test:public student{
    public:
    int mark1;
    int mark2;

    void set2()
    {
        cout<<"enter physics marks:-";
        cin>>mark1;
        cout<<"enter biology marks:-";
        cin>>mark2;
    }
    void display2()
    {
        cout<<"physics marks:-"<<mark1<<" biology marks:- "<<mark2<<endl;
    }
};


class sport{
    public:
    int sport1;
    int sport2;
};

class result:public test,sport{
    public:
    int total;

    void set3()
    {
        cout<<"enter batminton score:-";
        cin>>sport1;
        cout<<"enter cricket score:-";
        cin>>sport2;
    }

    void calculation()
    {
    total= mark1+mark2+sport1+sport2;
    }
    void display3()
    {
        cout<<"total marks are:- "<<total<<endl;
    }
};

int main()
{
    result obj1;
    obj1.set();
    obj1.set2();
    obj1.set3();
    obj1.calculation();
    obj1.display();
    obj1.display2();
    obj1.display3();

    return 0;
}


