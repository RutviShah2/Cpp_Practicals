#include <iostream>
using namespace std;

// Function to calculate square
int square(int num) {
    return num * num;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    cout << "Square of " << number << " is " << square(number) << endl;

    return 0;
}
