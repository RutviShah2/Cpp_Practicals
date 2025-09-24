#include <iostream>
#include <string>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        string S;
        cin >> S;
        string complementaryStrand = "";
        for (int i = 0; i < N; i++)
        {
            if (S[i] == 'A')
            {
                complementaryStrand += 'T';
            }
            else if (S[i] == 'T')
            {
                complementaryStrand += 'A';
            }
            else if (S[i] == 'C') 
            {
                complementaryStrand += 'G';
            } 
            else if (S[i] == 'G')
            {
                complementaryStrand += 'C';
            }
        }
        cout << complementaryStrand << endl;
    }
}