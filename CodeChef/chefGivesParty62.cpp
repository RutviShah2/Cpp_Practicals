#include <iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N,X,K;
        cin>>N>>X>>K;
        if((N*X)<=K)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}