#include <iostream>
using namespace std;
int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, X;
        cin >> N >> X;
        int A[N];
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        int count = 0;
        for (int i = 0; i < N; i++)
        {
            if (A[i] >= X)
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}