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
        string contest_code;
        int start38_count = 0;
        int ltime108_count = 0;
        for (int i = 0; i < N; ++i)
        {
            cin >> contest_code;
            if (contest_code == "START38")
            {
                start38_count++;
            } 
            else if (contest_code == "LTIME108") {
                ltime108_count++;
            }
        }
        cout << start38_count << " " << ltime108_count << endl;
    }
}