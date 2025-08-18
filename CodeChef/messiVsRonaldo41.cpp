#include <iostream>
using namespace std;
int main()
{
    int A,B,X,Y;
    cin>>A>>B>>X>>Y;
    if((A*2+B)>(X*2+Y))
    {
        cout<<"Messi"<<endl;
    }
    else if((A*2+B)<(X*2+Y))
    {
        cout<<"Ronaldo"<<endl;
    }
    else
    {
        cout<<"Equal"<<endl;
    }
}