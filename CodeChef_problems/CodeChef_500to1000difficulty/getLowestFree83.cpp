#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while (T--)
    {
        int A, B, C;
        cin>>A>>B>>C;
        int min_val = min({A, B, C});
        cout << A + B + C - min_val << endl;
    }
}