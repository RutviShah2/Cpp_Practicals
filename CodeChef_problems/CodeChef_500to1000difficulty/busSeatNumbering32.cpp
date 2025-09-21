#include <iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        if(N<=10 && N<30)
        {
            cout<<"Lower double"<<endl;
        }
        else if(N<=15 && N>10)
        {
            cout<<"Lower single"<<endl;
        }
        else if(N<=25 && N>15)
        {
            cout<<"Upper double"<<endl;
        }
        else
        {
            cout<<"Upper single"<<endl;
        }
    }
}