#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T; 

    while (T--) 
    {
        int N,M,X;
        cin>>N>>M>>X;
        cout<<((N*2)+(M*2))*X<<endl;
    }

    return 0;
}
