#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int X1,Y1,X2,Y2;
        cin>>X1>>Y1>>X2>>Y2;
        cout<<max(abs(X1-X2),abs(Y1-Y2))<<endl;
    }
}