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


class sport:public student{
    public:
    int sport1;
    int sport2;

     void set3()
    {
        cout<<"enter batminton score:-";
        cin>>sport1;
        cout<<"enter cricket score:-";
        cin>>sport2;
    }

    void display3()
    {
        cout<<"batminton marks:-"<<sport1<<" cricket marks:- "<<sport2<<endl;
    }
};

class result:public test,public sport{
    public:
    int total;
};

int main()
{
    result obj1;
    obj1.test::set();
    obj1.set2();
    obj1.set3();
    obj1.test::display();
    obj1.display2();
    obj1.display3();
    obj1.total=obj1.mark1+obj1.mark2+obj1.sport1+obj1.sport2;

    cout<<"total marks is "<<obj1.total;

    return 0;
}


