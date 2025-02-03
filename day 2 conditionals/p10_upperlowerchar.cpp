#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout<<"enter a character:-";
    cin>>ch;

    if(ch>='A' && ch<='Z') cout<<ch<<" is uppercase";
    else cout<<ch<<" is lowercase";
    
    return 0;
}