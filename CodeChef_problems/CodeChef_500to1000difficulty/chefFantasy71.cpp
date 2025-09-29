#include <iostream>
using namespace std;
int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    } 
    else {
        return n * factorial(n - 1);
    }
}
int main()
{
    int T;
    cin>>T;
    while (T--) 
    {
        int N;
        cin >> N;
        cout << N *(N - 1) << endl;
    }
}