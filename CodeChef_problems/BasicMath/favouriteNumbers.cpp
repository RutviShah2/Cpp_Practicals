#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int A;
        cin>>A;
        if((A%2==0) && (A%7==0))
        {
            cout<<"ALICE"<<endl;
        }
        else if((A%2!=0) && (A%9==0))
        {
            cout<<"BOB"<<endl;
        }
        else
        {
            cout<<"CHARLIE"<<endl;
        }
    }
}
