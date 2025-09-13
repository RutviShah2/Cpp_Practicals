#include <iostream>
using namespace std;
int main() {
    int N, K;
    cin >> N >> K;
    int count = 0;
    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        if (num % K == 0) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}