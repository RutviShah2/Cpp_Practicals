#include <iostream>
using namespace std;
int main() {
    int T;
    cin >> T;
    while (T--) {
        int X,Y;
        cin>>X>>Y;
        if((X*3)<=Y)
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
