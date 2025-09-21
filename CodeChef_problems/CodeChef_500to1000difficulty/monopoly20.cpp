#include <iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int P,Q,R,S;
        cin>>P>>Q>>R>>S;
        if(P>(Q+R+S))
        {
            cout<<"YES"<<endl;
        }
        else if(Q>(P+R+S))
        {
            cout<<"YES"<<endl;
        }
        else if(R>(P+Q+S))
        {
            cout<<"YES"<<endl;
        }
        else if(S>(P+Q+R))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}