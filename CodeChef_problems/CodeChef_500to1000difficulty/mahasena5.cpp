#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    int arr[N]; 
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    int evenCount = 0;
    int oddCount = 0;

    for (int i = 0; i < N; i++)
    {
        if(arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    if(evenCount > oddCount) {
        cout << "READY FOR BATTLE" << endl;
    } else {
        cout << "NOT READY" << endl;
    }

    return 0;
}