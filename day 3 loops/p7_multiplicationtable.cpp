#include <iostream>
using namespace std;

int main()
{
    int num, ans, i;
    cout<<"table:-";
    cin>>num;

    for(i=1;i<=10;i++)
    {
        ans=i*num;
        cout<<num<<" * "<<i<<" = "<<ans<<endl;
    }
    
return 0;
}