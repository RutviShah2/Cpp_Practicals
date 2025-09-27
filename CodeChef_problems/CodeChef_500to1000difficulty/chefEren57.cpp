#include <iostream>
using namespace std;
int main() 
{
    int T;
    cin >> T;
    while (T--) 
    {
        int N, A, B;
        cin>>N>>A>>B;
        int odd_count = (N + 1) / 2; 
        int even_count = N / 2;     
        cout << (even_count * A) + (odd_count * B) << endl;
    }
}