#include <iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int W,X,Y,Z;
        cin>>W>>X>>Y>>Z;
        if((X+Y==W) || (Y+Z==W) || (X+Z==W) || (X==W) || (Y==W) || (Z==W) || (X+Y+Z==W))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}