#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    while (N--) {
        int a, b, c;
        cin >> a >> b >> c;
        int maximum = max(a, max(b, c));
        int minimum = min(a, min(b, c));
        int secondMax = a + b + c - maximum - minimum;

        cout << secondMax << endl;
    }
    return 0;
}
