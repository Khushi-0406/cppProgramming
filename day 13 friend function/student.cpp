// Create a class Student that represents a student with private attributes name and marks. Write a friend function that compares the marks of two Student objects and returns the name of the student with the higher marks.

#include <iostream>
using namespace std;

class student{
    string name;
    int marks;

public:
    student(string n, int m)
    {
        name=n;
        marks=m;
    }

    void display()
    {
        cout<<name<<" "<<marks<<endl;
    }

    friend void compare(student a,student b);
};

void compare(student a , student b)
{
if(a.marks>b.marks){
    cout<<"highest marks:-"<<a.name;
}
else{
    cout<<"highest marks:-"<<b.name;
}
}

int main()
{
    student s1("khushi", 90);
    s1.display();
    student s2("rashi", 80);
    s2.display();

    compare(s1,s2);

    return 0;

}

