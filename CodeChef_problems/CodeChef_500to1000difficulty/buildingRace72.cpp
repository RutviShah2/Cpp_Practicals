#include <iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int A,B,X,Y;
        cin>>A>>B>>X>>Y;
        if((A*Y)<(B*X))
        {
            cout<<"CHEF"<<endl;
        }
        else if((A*Y)>(B*X))
        {
            cout<<"CHEFINA"<<endl;
        }
        else
        {
            cout<<"BOTH"<<endl;
        }
    }
}