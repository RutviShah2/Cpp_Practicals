#include <iostream>
#include <algorithm>
using namespace std;
int main() 
{
    int T;
    cin >> T;
    while(T--) 
    {
        int X,Y;
        cin>>X>>Y;
        int scoreAB = max(0, 500 - (X * 2)) + max(0, 1000 - ((X + Y) * 4));
        int scoreBA = max(0, 1000 - (Y * 4)) + max(0, 500 - ((X + Y) * 2));
        cout << max(scoreAB, scoreBA) << endl;
    }
}