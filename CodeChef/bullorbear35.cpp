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
            cout<<"loss"<<endl;
        }
        else if (X==Y)
        {
            cout<<"neutral"<<endl;
        }
        else
        {
            cout<<"profit"<<endl;
        }
    }
}