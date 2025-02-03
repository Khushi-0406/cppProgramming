#include <iostream>
using namespace std;

int main(){
    int fact=1, i,num;
    cout<<"enter the number:-";
    cin>>num;
    for(i=1;i<=num;i++){
        fact=fact*i;
    }
    cout<<"the factorial of "<<num<<" number is:- "<<fact;
}