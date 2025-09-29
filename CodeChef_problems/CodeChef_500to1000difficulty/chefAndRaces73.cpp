#include <iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while (T--) 
    {
        int X,Y,A,B;
        cin>>X>>Y>>A>>B;
        int wins = 0;
        if (X != A && X != B) 
        {
            wins++;
        }
        if (Y != A && Y != B)
        {
            wins++;
        }
        cout << wins << endl;
    }
}