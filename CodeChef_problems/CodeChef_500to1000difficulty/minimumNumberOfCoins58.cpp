#include <iostream>
using namespace std;
int main() 
{
    int T;
    cin>>T;
    while(T--)
    {
        int X;
        cin>>X;
        if(X % 5 != 0) 
        {
            cout << -1 << endl;
        } 
        else
        {
            cout << (X / 10) + (X % 10) / 5 << endl;
        }
    }
}