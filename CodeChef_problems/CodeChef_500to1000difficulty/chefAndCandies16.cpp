#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, X;
        cin >> N >> X;
        if (N <= X)
        {
            cout << 0 << endl;
        } 
        else {
            cout << ceil((double)(N - X) / 4) << endl;
        }
    }
    return 0;
}