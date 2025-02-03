#include <iostream>
using namespace std;

int main()
{
    int ch;
    cout<<"enter a character:-";
    cin>>ch;

    if(ch=='A' || ch=='E' || ch=='I' || ch=='O'|| ch=='U') cout<<"the character is vowels";
    else cout<<"the character is consonant";

    return 0;
}