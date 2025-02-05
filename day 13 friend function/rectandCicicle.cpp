// Design two classes, Rectangle and Circle. Write a friend function that calculates and returns the area of both shapes. The function should be able to access the private members of both classes to perform the calculations.

#include <iostream>
using namespace std;

class circle;
class rect
{
    int l, b;

public:
    void set(int x, int y)
    {
        l = x;
        b = y;
    }

    friend void calc(rect, circle);
};

class circle
{
    int pi = 3.14;
    int r;

public:
    void set(int z)
    {
        r = z;
    }
    friend void calc(rect, circle);
};

void calc(rect r, circle c)
{
    int arect;
    arect = r.l * r.b;

    int areacir;
    areacir = c.pi * c.r * c.r;

    cout << "area of rectangle:-" << arect << endl
         << "area of circle:-" << areacir;
}

int main()
{
    rect r;
    circle c;

    int x, y, z;
    cout << "enter the length and breadth of rectangle:-";
    cin >> x >> y;
    r.set(x, y);

    cout << "enter radius of c ircle:-";
    cin >> z;
    c.set(z);

    calc(r, c);

    return 0;
}