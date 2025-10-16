#include <iostream>
using namespace std;
int main() 
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N; 
        int sum = 0;
        while (N > 0)
        {
            int digit = N % 10; 
            sum += digit; 
            N /= 10;
        }
        cout << sum << endl;
    }
}