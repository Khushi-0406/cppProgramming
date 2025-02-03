#include <iostream>
using namespace std;

int main()
{
   int x,y;

   cout<<"enter the value of x-coordinate:-";
   cin>>x;
   cout<<"enter the value of y coordinate:-";
   cin>>y;
   
   if(x>0 && y>0)
   cout<<"the point lies in the 1st quadrant";

   else if(x<0 && y>0)
   cout<<"the point lies in the 2nd quadrant";

   else if(x<0 && y<0)
   cout<<"the point lies in the 3rd quadrant";

   else if(x>0 && y<0)
   cout<<"the point lies in the 4th quadrant";

   else if(x != 0 && y==0)
   cout<<"the point lies on the x-axis";

   else if(x==0 && y != 0)
   cout<<"the point lies on the y-axis";

   else if(x==0 && y==0)
   cout<<"the point lies on the origin";

   return 0;

}
