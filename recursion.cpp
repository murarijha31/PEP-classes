//  sum of n antural number-------------

// #include <iostream>
// using namespace std;

// // Recursive function to find sum
// int sumOfNatural(int n) {
//     // Base case
//     if (n == 0)
//         return 0;

//     // Recursive case
//     return n + sumOfNatural(n - 1);
// }

// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;

//     cout << "Sum of first " << n << " natural numbers = "
//          << sumOfNatural(n);

//     return 0;
// }


// fibonaaci series----------------------------

// #include<iostream>
// using namespace std;

// int freq(int n){
//     if(n==0) return 0;
//     if(n==1) return 1;

//     return freq(n-1)+freq(n-2);
// }
// int main(){
//     int n;
//     cout<<"enter the n value: ";
//     cin>>n;
//     cout<<"fibonacci of "<<n<<" is "<<freq(n); 
//     return 0;
// }


// factorial---------------------

#include<iostream>
using namespace std;

int fact(int n){
    if(n==0) return 1;
    if(n==1) return 1;

    return n*fact(n-1);
}
int main(){
    int n;
    cout<<"enter the n value: ";
    cin>>n;
    cout<<"factorial of "<<n<<" is "<<fact(n); 
    return 0;
}