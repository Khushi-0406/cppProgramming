#include <iostream>
using namespace std;

class Student
{
    public:
    string name;
    int rollno;
    float cgpa;
};

int main()
{
    Student s;
    s.name = "khushi";
    s.rollno =101;
    s.cgpa= 9.77;
    
    Student s3;
    s3.name = "rashi";
    s3.rollno =102;
    s3.cgpa= 8.2;

    Student s2;
    cout<<"enter name:-";
    cin>>s2.name;
    cout<<"enter rollno:-";
    cin>>s2.rollno;
    cout<<"enter cgpa:-";
    cin>>s2.cgpa;

    cout<<s.name<<"\t"<<s.rollno<<"\t"<<s.cgpa<<endl;
    cout<<s2.name<<"\t"<<s2.rollno<<"\t"<<s2.cgpa<<endl;
    cout<<s3.name<<"\t"<<s3.rollno<<"\t"<<s3.cgpa<<endl;

}