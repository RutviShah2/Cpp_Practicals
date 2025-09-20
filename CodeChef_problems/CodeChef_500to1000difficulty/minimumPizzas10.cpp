#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, X;
        cin >> N >> X;
        int totalSlicesNeeded = N * X;
        cout << (int)ceil((double)totalSlicesNeeded / 4) << endl;
    }
    return 0;
}