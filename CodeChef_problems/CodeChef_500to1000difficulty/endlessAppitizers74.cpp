#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--) 
    {
        int X,Y,R;
        cin>>X>>Y>>R;
        int total_sticks = X + (R / 30);
        int plates = ceil((double)total_sticks / Y);
        cout<<plates<<endl;
    }
}