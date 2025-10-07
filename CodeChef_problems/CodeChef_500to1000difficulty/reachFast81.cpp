#include <iostream>
#include <cmath> 
using namespace std;
int main()
{
    int T;
    cin>>T;
    while (T--) 
    {
        int A,B,K;
        cin>>A>>B>>K;
        int distance = abs(A - B);
        if (distance == 0)
        {
            cout << 0 << endl;
        } 
        else {
            cout << (distance + K - 1) / K << endl;
        }
    }
}