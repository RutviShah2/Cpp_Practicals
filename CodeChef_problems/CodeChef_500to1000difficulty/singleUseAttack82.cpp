#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while (T--) 
    {
        int H, X, Y;
        cin >> H >> X >> Y;
        int remainingHealth = H - Y;
        int normalAttacks = 0;
        if (remainingHealth > 0)
        {
            normalAttacks = ceil((double)remainingHealth / X);
        }
        cout << 1 + normalAttacks << endl;
    }

}