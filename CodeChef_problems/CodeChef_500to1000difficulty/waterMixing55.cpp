#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T; 
    while (T--)
    {
        int A, B, X, Y;
        cin>>A>>B>>X>>Y;
        if(A - Y <= B && B <= A + X)
        {
            cout<<"YES"<<endl;
        }
        else 
        {
            cout<<"NO"<<endl;
        }
    }
}