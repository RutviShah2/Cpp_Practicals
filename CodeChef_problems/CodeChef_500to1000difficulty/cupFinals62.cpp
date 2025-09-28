#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
    int T;
    cin >> T;
    while (T--)
    {
        int X,Y,D;
        cin>>X>>Y>>D;
        int skill_difference = abs(X - Y);
        if(skill_difference <= D)
        {
            cout<<"YES"<<endl;
        } 
        else
        {
            cout<<"NO"<<endl;
        }
    }
}