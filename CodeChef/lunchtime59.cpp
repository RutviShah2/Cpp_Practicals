#include <iostream>
using namespace std;
int main() {
    int T;
    cin >> T; 
    while (T--) {
       int X;
       cin>>X;
       if(X>=1 && X<=4)
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
