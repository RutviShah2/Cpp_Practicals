#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--) 
    {
        int N, K, M;
        cin >> N >> K >> M;
        int total_capacity = K * M;
        int bags = N / total_capacity;
        if (N % total_capacity != 0)
        {
            bags++;
        }
        cout << bags << endl;
    }
}