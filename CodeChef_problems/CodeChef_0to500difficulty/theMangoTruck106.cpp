#include <iostream>
using namespace std;
int main() {
    int T;
    if (!(cin >> T)) return 0;
    while (T--) {
        long long X, Y, Z;
        cin >>X >>Y>>Z;
        if (Y > Z){
            cout << 0 << '\n';
        } else{
            cout << (Z - Y) / X << '\n';
        }
    }
    return 0;
}
