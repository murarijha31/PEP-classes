// linear search-----------------------

// #include<iostream>
// using namespace std;
// int main(){
//     int n,target;
//     cout<<"enter the size of array: ";
//     cin>>n;
//     cout<<"enter the target value: ";
//     cin>>target;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cout<<"enter "<<i<<" element: ";
//         cin>>arr[i];
//     }
//     int count  = 0;
//     for(int i=0;i<n;i++){
//         if(arr[i]==target){
//             cout<<i;
//             count++;
//         }
//     }
//     if(count==0){
//         cout<<"0";
//     }
//     return 0;
// }


// binary search----------------------------------

// #include<iostream>
// using namespace std;
// int main(){
//     int n,target;
//     cout<<"enter the size of array: ";
//     cin>>n;
//     cout<<"enter the target value: ";
//     cin>>target;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cout<<"enter "<<i<<" element: ";
//         cin>>arr[i];
//     }
//     int strt = 0;
//     int end = n-1;
//     int count  = 0;
//     while(strt<=end){
//         int mid = (strt+end)/2;
//         if(arr[mid]==target){
//             cout<<"target is at index: "<<mid;
//             count++;
//             return 0;
//         }else if(arr[mid]<target){
//             strt = mid+1;
//         }else{
//             end = mid - 1;
//         }
//     }
//     if(count==0){
//         cout<<"0";
//     }
//     return 0;
// }