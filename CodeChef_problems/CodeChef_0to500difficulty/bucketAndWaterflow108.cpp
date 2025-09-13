#include <iostream>
using namespace std;
int main() {
    int T;
    cin >> T;
    while (T--) {
        int W,X,Y,Z;
        cin>>W>>X>>Y>>Z;
        if(W+(Y*Z)>X)
        {
            cout<<"OVERFLOW"<<endl;
        }
        else if(W+(Y*Z)==X)
        {
            cout<<"FILLED"<<endl;
        }
        else
        {
            cout<<"UNFILLED"<<endl;
        }
}
return 0;
}
