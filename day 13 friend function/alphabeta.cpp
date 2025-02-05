#include <iostream>
using namespace std;

class beta;
class alpha
{
    int num;

public:
    void set(int a)
    {
         num = a;
    }
    friend class beta;
};

class beta
{
public:
void display(alpha a)
{

        cout << "alphas value:-" << a.num << endl;

}

};


int main()
{
    alpha a;
    a.set(10);
    beta b;
    b.display(a);

    return 0;
}