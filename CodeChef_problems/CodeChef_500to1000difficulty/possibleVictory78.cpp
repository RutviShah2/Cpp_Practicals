#include <iostream>
using namespace std;
int main()
{
    int R,O,C;
    cin>>R>>O>>C;
    if((((20-O)*6*6)+C)>R)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}