#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        string encoded = "";
        for (int i = 0; i < n; i += 2)
        {
            if (s[i] == '0' && s[i + 1] == '0')
            {
                encoded += 'A';
            } 
            else if (s[i] == '0' && s[i + 1] == '1')
            {
                encoded += 'T';
            } 
            else if (s[i] == '1' && s[i + 1] == '0') 
            {
                encoded += 'C';
            } 
            else {
                encoded += 'G';
            }
        }
        cout << encoded << endl;
    }
}