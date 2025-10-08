#include <iostream>
#include <numeric>  
#include <vector>  
using namespace std;
int main() 
{
    int numTestCases;
    cin >> numTestCases;
    while (numTestCases--) 
    {
        int arrayLength;
        cin >> arrayLength;
        vector<int> arr(arrayLength);
        for (int i = 0; i < arrayLength; ++i) 
        {
            cin >> arr[i];
        }
        int sum = accumulate(arr.begin(), arr.end(), 0);
        if (arrayLength % 2 != 0) 
        {
            cout << -1 << endl;
        } 
        else 
        {
            cout << abs(sum) / 2 << endl;
        }
    }
}