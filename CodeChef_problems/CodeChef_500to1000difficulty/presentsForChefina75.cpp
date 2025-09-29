#include <iostream>
using namespace std;
int main() 
{
    int T;
    cin>>T;
    while (T--) 
    {
        long long int N;
        cin>>N;
        cout << N - N / 5 << endl;
    }
}