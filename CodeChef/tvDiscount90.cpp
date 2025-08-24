#include <iostream>
using namespace std;
int main() {
    int T;
    cin >> T; 
    while (T--) {
        int A,B,C,D;
        cin>>A>>B>>C>>D;
        if((A-C)<(B-D))
        {
            cout<<"FIRST"<<endl;
        }
        else if((A-C)>(B-D))
        {
            cout<<"SECOND"<<endl;
        }
        else
        {
            cout<<"ANY"<<endl;
        }
        
    }
    return 0;
}
