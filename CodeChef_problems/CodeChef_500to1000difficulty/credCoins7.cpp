#include <iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int X,Y;
        cin>>X>>Y;
        if((X*Y)<100)
        {
            cout<<"0"<<endl;
        }
        else if((X*Y)==100)
        {
            cout<<"1"<<endl;
        }
        else
        {
            cout<<(X*Y)/100<<endl;
        }
    }
    return 0;
}