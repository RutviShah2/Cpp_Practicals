#include <iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N,M;
        cin>>N>>M;
        if(M>=N)
        {
            cout<<0<<endl;
        }
        else
        cout<<N-M<<endl;
    }
}