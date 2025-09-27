#include <iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int ages[N]; 
        int count = 0;
        for (int i = 0; i < N; i++)
        {
            cin >> ages[i];
            if (ages[i] >= 10 && ages[i] <= 60)
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
}