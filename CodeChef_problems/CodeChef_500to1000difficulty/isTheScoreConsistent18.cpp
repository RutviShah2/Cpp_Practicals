#include <iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int A,B;
        cin>>A>>B;
        int C,D;
        cin>>C>>D;
        if((A<=C) && (B<=D))
        {
            cout<<"POSSIBLE"<<endl;
        }
        else
        {
            cout<<"IMPOSSIBLE"<<endl;
        }
        
    }
}