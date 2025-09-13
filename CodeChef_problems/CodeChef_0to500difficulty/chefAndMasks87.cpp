#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;  

    while (T--) {
        int X,Y;
        cin>>X>>Y;
        if((X*10)>=Y)
        {
            cout<<"CLOTH"<<endl;
        }
        else
        {
            cout<<"DISPOSABLE"<<endl;
        }
    }
    return 0;
}
