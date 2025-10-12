#include <iostream>
using namespace std;
int main() 
{
    const int maxN = 100000;
    bool is_prime[maxN + 1];
    for (int i = 0; i <= maxN; i++)
    {
        is_prime[i] = true;
    }
    is_prime[0] = is_prime[1] = false; 
    for (int p = 2; p * p <= maxN; ++p)
    {
        if (is_prime[p]) {
            for (int i = p * p; i <= maxN; i += p)
            {
                is_prime[i] = false;
            }
        }
    }
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        if (is_prime[N])
        {
            cout << "yes" << endl;
        }
        else {
            cout << "no" << endl;
        }
    }
}