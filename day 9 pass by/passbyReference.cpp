#include<iostream>
using namespace std;
class student{
  public:
  int rollno;
  public:
  int rolls(int &a){
    cout<<a<<" is the roll no inside the function"<<endl;
    a = 12;
    cout<<a<<" is the roll no inside the function"<<endl;
  }
};
int main(){
    student s1;
    int x = 10;
    cout<<x<<" is the roll no in the main method "<<endl;
    s1.rolls(x);
    cout<<x<<" is the roll no after calling the function"<<endl;
}