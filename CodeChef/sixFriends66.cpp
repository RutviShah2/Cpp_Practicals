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
        if((3*X)<=(2*Y))
        {
            cout<<3*X<<endl;
        }
        else
        {
            cout<<2*Y<<endl;
        }
    }
}