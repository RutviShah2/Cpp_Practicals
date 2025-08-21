#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T; 

    while (T--) {
        int X;
        cin>>X;
        if(X<=3)
        {
            cout<<"Bronze"<<endl;
        }
        else if (X>3 && X<=6)
        {
            cout<<"Silver"<<endl;
        }
        else
        {
            cout<<"Gold"<<endl;
        }
    }
        
    return 0;
}
