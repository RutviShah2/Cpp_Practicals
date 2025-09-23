#include <iostream>
using namespace std;
int main() 
{
    int T;
    cin >> T;
    while (T--)
    {
        int X, Y, Z;
        cin >> X >> Y >> Z;
        int time_to_hit = Y / X;
        int wait_time = max(0, Z - time_to_hit);
        cout << wait_time << endl;
    }
}