#include <iostream>
using namespace std;
int reverseNum(int n)
{
    int res = 0;
    while(n > 0)
    {
        int d = n % 10;
        res = res * 10 + d;
        n = n/10;
    }
    return res;
}
int main()
{
    int T;
    cin >> T;
    while(T--) {
        int N;
        cin >> N;
        cout << reverseNum(N) << endl;
    }
}