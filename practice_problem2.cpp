
// swap to numbers using pointers

// #include<iostream>
// using namespace std;

// int main(){
//    int a[5]={1,3,3,4,5};
//     cout<<a<<endl;
//     cout<<*a<<endl;
//     cout<<*(a+1);
//     return 0;
// }


// 

// #include<iostream>
// using namespace std;

// int main(){
//    int n;
//    cin>>n;
//    int arr[n];
//    for(int i=0;i<n;i++){
//     cin>>arr[i];
//    }
//    int max = arr[0];
//    for(int i=0;i<n;i++){
//     if(arr[i]>max){
//         max=arr[i];
//     }
//    }
//    int min = arr[0];
//    for(int i=0;i<n;i++){
//     if(arr[i]<min){
//         min=arr[i];
//     }
//    }
//    int sum = 0;
//    for(int i=0;i<n;i++){
//     sum = sum + arr[i];
//    }
//    cout<<max<<endl;
//    cout<<min<<endl;
//    cout<<sum;
//     return 0;
// }


// move zero in end----------------------------

// #include <iostream>
// using namespace std;

// int main() {
//     cout<<"enter the value of n: ";
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int k = 0;
//     for(int i=0;i<n;i++){
//         if(arr[i] != 0){
//             arr[k++] = arr[i];
//         }
//     }
    
//     while(k<n){
//         arr[k++] = 0;
//     }

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }