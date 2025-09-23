#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int X, Y;
        cin >> X >> Y;
        int diff = Y - X;
        if (diff <= 0) 
        {
            cout << 0 << endl;
        }
        else 
        {
            cout << (diff + 7) / 8 << endl;
        }
    }
}