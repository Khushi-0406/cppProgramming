#include <iostream>
using namespace std;

int main()
{
   char a='X';
   char b='M';
   char c='L';
   char d;
   d=a;
   a=c;
   c=d;

   cout<<a<<"\t"<<b<<"\t"<<c;

    return 0;
}