#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int T;
    cin>>T;
    while(T--)
    {
        int A,B,C;
        cin>>A>>B>>C;
        if((A!=B) && (A!=C) && (B!=C))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
