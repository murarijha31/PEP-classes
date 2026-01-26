#include <iostream>
using namespace std;

int main() {
    int n,m;
    cout<<"enter the value of n: ";
    cin>>n;
    char art;
    cout<<"enter operator: ";
    cin>>art;
    cout<<"enter the value of m: ";
    cin>>m;
    switch(art){
        case '+':
        cout<<"addition of n and m is: "<<n+m;
        break;
        case '-':
        cout<<"substraction of n and m is: "<<n-m;
        break;
        case '*':
        cout<<"multiplication of n and m is: "<<n*m;
        break;
        default:
        cout<<"division of n  and m is: "<<n/m;
    }
    return 0;
}