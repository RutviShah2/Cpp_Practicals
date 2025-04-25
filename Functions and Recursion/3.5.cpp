#include <iostream>
using namespace std;

int digitSum(string n) {
    int sum = 0;
    for (char ch : n) {
        sum += ch - '0';
    }
    return sum;
}

int superDigit(int n) {
    if (n < 10) return n;

    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return superDigit(sum);
}

int main() {
    string n;
    int k;
    cin >> n >> k;

    int initialSum = digitSum(n);
    int totalSum = initialSum * k;

    cout << superDigit(totalSum) << endl;
    cout << "24DCS120_RUTVI SHAH" << endl;

    return 0;
}
