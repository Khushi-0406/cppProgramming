#include <iostream>
using namespace std;

class Student{
    public:
    string name;
    int rollno;

    Student(string s,int r)  //parameterized constructor
    {
        name =s;
        rollno=r;
    }
};

int main()
{
    Student s1("khushi", 101);
    // cout<<s1.name<<"\t"<<s1.rollno<<endl;
    return 0;
}