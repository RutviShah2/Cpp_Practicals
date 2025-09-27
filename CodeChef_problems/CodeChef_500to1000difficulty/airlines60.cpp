#include <iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int X,N;
        cin>>X>>N;
        if((X*100)>N)
        {
            cout<<"0"<<endl;
        }
        else
        {
            int R = (N-(X*100));
            int P = (R+99)/100;
            cout<<P<<endl;
        }
    }
}   