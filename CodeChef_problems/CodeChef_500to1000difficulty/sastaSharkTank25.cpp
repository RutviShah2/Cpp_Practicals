#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int A, B;
        cin >> A >> B;
        int valuation_A = A * 10;
        int valuation_B = B * 5;
        if (valuation_A < valuation_B)
        {
            cout << "SECOND" << endl;
        } 
        else if (valuation_A > valuation_B) 
        {
            cout << "FIRST" << endl;
        } 
        else 
        {
            cout << "ANY" << endl;
        }
    }
}