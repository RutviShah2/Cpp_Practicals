#include <iostream>
using namespace std;
int main() 
{
    int T;
    cin >> T;
    while (T--) 
    {
        int S,X,Y,Z;
        cin>>S>>X>>Y>>Z;
        int available_space = S - (X + Y);
        if(available_space >= Z) 
        {
            cout<<"0"<<endl;
        }
        else if(available_space + X >= Z || available_space + Y >= Z)
        {
            cout<<"1"<<endl;
        } 
        else
        {
            cout<<"2"<<endl;
        }
    }
}