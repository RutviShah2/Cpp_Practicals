#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int calculate_score(int a, int b, int c)
{
    vector<int> rolls = {a, b, c};
    sort(rolls.begin(), rolls.end());
    return rolls[1] + rolls[2]; 
}
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int A1, A2, A3, B1, B2, B3;
        cin >> A1 >> A2 >> A3 >> B1 >> B2 >> B3;
        int alice_score = calculate_score(A1, A2, A3);
        int bob_score = calculate_score(B1, B2, B3);
        if (alice_score > bob_score) 
        {
            cout << "Alice" << endl;
        }
        else if (bob_score > alice_score) 
        {
            cout << "Bob" << endl;
        } 
        else {
            cout << "Tie" << endl;
        }
    }
}