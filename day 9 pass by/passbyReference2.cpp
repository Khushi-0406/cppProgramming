#include<iostream>
using namespace std;
class One{
  public:
  int num;
  public:
  void set(int x){
    num = x;
  }
  void PassByValue(One &obj1 , One &obj2){
    obj1.num = 100;
    obj2.num = 200;
    obj1.display();
    cout<<"\n";
    obj2.display();
  }
  void display(){
    cout<<num;
  }
};

int main(){
    One obj1,obj2,obj3;
    obj1.set(10);
    obj2.set(20);
    cout<<"before passing the value"<<endl;
    obj1.display();
    cout<<"\n";
    obj2.display();
    cout<<"\n";
    obj3.PassByValue(obj1,obj2);
    cout<<"\n";
    cout<<"after passing the value"<<endl;
    obj1.display();
    cout<<"\n";
    obj2.display();
}