#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout<<"enter:-";
    cin>>ch;

    if(ch>='A' && ch<='Z') cout<<ch<<" is alphabet";
    else cout<<ch<<" is not an alphabet";

    return 0;
}