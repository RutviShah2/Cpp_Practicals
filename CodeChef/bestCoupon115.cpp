#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int X;
        cin >> X;
        int discount1 = X / 10;
        int discount2 = 100;
        cout << max(discount1, discount2) << endl;
    }
    return 0;
}
