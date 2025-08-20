#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;  // Number of test cases

    while (T--) {
        int X;
        cin>>X;
        if(X<4)
        {
            cout<<"MILD"<<endl;
        }
        else if(X>=4 && X<7)
        {
            cout<<"MEDIUM"<<endl;
        }
        else
        {
            cout<<"HOT"<<endl;
        }
    }

    return 0;
}
