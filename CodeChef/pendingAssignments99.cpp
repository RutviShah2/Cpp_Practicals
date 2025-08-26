#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--)
    {
    int X,Y,Z;
    cin>>X>>Y>>Z;
    if((X*Y)<=(24*Z*60))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
    return 0;
}
