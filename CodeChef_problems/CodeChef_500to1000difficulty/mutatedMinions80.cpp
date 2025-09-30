#include <iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while (T--) 
    {
        int N, K;
        cin>>N>>K;
        int count = 0;
        for (int i = 0; i < N; i++)
        {
            int initialValue;
            cin>>initialValue;
            int newValue = initialValue + K;
            if (newValue % 7 == 0)
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
}