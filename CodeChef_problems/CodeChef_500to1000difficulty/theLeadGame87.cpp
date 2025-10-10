#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int player1_score = 0;
    int player2_score = 0;
    int max_lead = 0;
    int winner = 0;
    for (int i = 0; i < n; i++)
    {
        int score1, score2;
        cin >> score1 >> score2;
        player1_score += score1;
        player2_score += score2;
        int lead = player1_score - player2_score;
        int abs_lead = abs(lead);
        if (abs_lead > max_lead) 
        {
            max_lead = abs_lead;
            winner = (lead > 0) ? 1 : 2;
        }
    }
    cout << winner << " " << max_lead << endl;
}