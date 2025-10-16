#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int X,Y;
        cin>>X>>Y;
        if(X>Y)
        {
            cout<<Y*1<<endl;
        }
        else if(X==Y)
        {
            cout<<Y*1<<endl;
        }
        else
        {
            cout<<(X*1) + ((Y-X)*2)<<endl;
        }
    }
}
