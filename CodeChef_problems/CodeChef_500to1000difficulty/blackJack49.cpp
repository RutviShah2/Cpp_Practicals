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
        if((A+B)<11)
        {
            cout<<-1<<endl;
        }
        else
        {
        cout<<21-A-B<<endl;
    }
}
}