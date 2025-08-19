#include <iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int X1,Y1,X2,Y2;
        cin>>X1>>Y1>>X2>>Y2;
        if((X1+Y1)<(X2+Y2))
        {
            cout<<X1+Y1<<endl;
        }
        else
        {
            cout<<X2+Y2<<endl;
        }
    }
}