#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, X;
        cin >> N >> X;
        
        if (X * 2 >= N) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
