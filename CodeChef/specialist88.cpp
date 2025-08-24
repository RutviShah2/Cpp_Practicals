#include <iostream>
using namespace std;
int main() {
    int T;
    cin >> T;
    while (T--) {
        int X,Y,Z;
        cin>>X>>Y>>Z;
        if((X>Y)&&(X>Z))
        {
                cout<<"SETTER"<<endl;
        }
else if((Y>X)&&(Y>Z))
{
    cout<<"TESTER"<<endl;
}
else
{
    cout<<"EDITORIALIST"<<endl;
}
}
    return 0;
}
