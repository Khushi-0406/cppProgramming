#include <iostream>
using namespace std;

int main()
{
    int phy,chem,bio,math,com;

    cout<<"enter the marks of physics";
    cin>>phy;
    cout<<"enter the marks of chemistry";
    cin>>chem;
    cout<<"enter the marks of biology";
    cin>>bio;
    cout<<"enter the marks of mathematics";
    cin>>math;
    cout<<"enter the marks of computers";
    cin>>com;

int total=phy+chem+bio+math+com;
float per= (total/500.0)*100;
    cout<<per<<endl;

    cout<<"the result is :-"<<endl;

    if(per>=90) cout<<"GRADE A";
    else if(per>=80) cout<<"GRADE B";
    else if(per>=70) cout<<"GRADE C";
    else if(per>=60) cout<<"GRADE D";
    else if(per>=40) cout<<"GRADE E";
    else if(per<=40) cout<<"FAIL";

    return 0;

}