#include <iostream>
using namespace std;
int main() {
    int T;
    cin >> T; 

    while (T--) {
        int X, Y;
        cin >> X >> Y;
        double allowed = X * 1.07;
        if (Y <= allowed)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
