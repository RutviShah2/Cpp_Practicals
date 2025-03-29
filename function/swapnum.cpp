#include<iostream>
using namespace std;
void swap(int *x, int *y){
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
}
int main(){
    int a,b;
    cout<<"Enter Two Number :: ";
    cin>>a>>b;
    cout<<a<<" "<<b<<endl;
    swap(&a,&b);
    cout<<a<<" "<<b<<endl;

}