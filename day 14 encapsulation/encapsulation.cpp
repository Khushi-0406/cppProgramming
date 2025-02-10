#include <iostream>
using namespace std;

class one
{
    int a;

public:
    void set(int x)
    {
        a = x;
    }
    void display()
    {
        cout << "A:- " << a;
    }
};

int main()
{
    one obj1;
    obj1.set(2);
    obj1.display();

    return 0;
}

// assessing the private member data by public class not directly is called as an encapsulation.