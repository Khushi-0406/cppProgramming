#include <iostream>
#include <string.h>

using namespace std;

class one{
    public:

    char *name;
    one(char input[])
    {
        int len=strlen(input)+1;
        name=new char[len];
        strcpy(name,input);
    }
    void display()
    {
        cout<<name<<endl;
    }
    ~one()
    {
        cout<<"destructor";
    }
};

int main()
{
    one obj1("ram");
    obj1.display();
}