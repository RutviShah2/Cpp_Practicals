#include <iostream>
using namespace std;
int main() 
{
    int T;
    cin >> T;
    while (T--) 
    {
        int X, Y;
        cin >> X >> Y;
        int months = (Y - 1) / X;
        cout << months << endl;
    }
}