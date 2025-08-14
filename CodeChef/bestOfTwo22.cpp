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
        if(X>Y)
        {
            cout<<X<<endl;
        }
        else if(X<Y)
        {
            cout<<Y<<endl;
        }
        else
        {
            cout<<X<<endl;
        }
    }
}