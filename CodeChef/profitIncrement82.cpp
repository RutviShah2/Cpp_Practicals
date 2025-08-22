#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int X, Y;
        cin >> X >> Y;
        int newProfit = Y + X / 10;
        cout << newProfit << endl;
    }
    return 0;
}
